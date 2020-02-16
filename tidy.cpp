#include <iostream>

using namespace std;

struct node
{
	struct node *llink, *rlink;
	int xcoord, ycoord;	// coordinates of this node
	int offset;		// distance to each son
	bool thread;
};

struct extreme
{
	struct node *addr;
	int off;		// offset from root
	int lev;		// tree level
};

void setup(struct node *t, int level, int minsep, struct extreme *rmost, struct extreme *lmost)
{
	struct node *l, *r;
	struct extreme lr, ll, rr, rl;

	int cursep, rootsep, loffsum, roffsum;

	if (t == NULL)
	{
		lmost->lev = -1;
		rmost->lev = -1;
	}
	else
	{
		t->ycoord = level;
		l = t->llink;
		r = t->rlink;
		setup(l, minsep, level + 1, &lr, &ll);	// lr, ll etc not set yet?
		setup(r, minsep, level + 1, &rr, &rl);
		if (r == NULL && l == NULL)		// t is a leaf
		{
			rmost->addr = t;
			lmost->addr = t;
			rmost->lev = level;
			lmost->lev = level;
			rmost->off = 0;
			lmost->off = 0;
			t->offset = 0;
		}
		else					// t not a leaf
		{
			cursep = minsep;
			rootsep = minsep;
			loffsum = 0;
			roffsum = 0;	

			while (l != NULL && r != NULL)
			{	
				if (cursep < minsep)	// push
				{
					rootsep += minsep - cursep;
					cursep = minsep;
				}
				// advancing l, r
				if (l->rlink != NULL)
				{
					loffsum += l->offset;
					cursep -= l->offset;
					l = l->rlink;
				}
				else
				{
					loffsum -= l->offset;
					cursep += l->offset;
					l = l->llink;
				}
				if (r->llink != NULL)
				{
					roffsum -= r->offset;
					cursep -= r->offset;
					r = r->llink;
				}
				else
				{
					roffsum += r->offset;
					cursep += r->offset;
					r = r->rlink;
				}
			}		

			t->offset = (rootsep + 1) / 2;
			loffsum -= t->offset;
			roffsum += t->offset;

			if ((rl.lev > ll.lev) || (t->llink == NULL))
			{
				lmost = &rl;
				lmost->off += t->offset;
			}
			else
			{
				lmost = &ll;
				lmost->off -= t->offset;
			}
			if ((lr.lev > rr.lev) || (t->rlink == NULL))
			{
				rmost = &lr;
				rmost->off -= t->offset;
			}	
			else
			{
				rmost = &rr;
				rmost->off += t->offset;
			}

			if (l != NULL && l != t->llink)
			{
				rr.addr->thread = true;
				rr.addr->offset = abs((rr.off + t->offset) - loffsum);
				if (loffsum - t->offset <= rr.off)
					rr.addr->llink = l;
				else
					rr.addr->rlink = l;
			}
			else if (r != NULL && r != t->rlink)
			{
				ll.addr->thread = true;
				ll.addr->offset = abs((ll.off - t->offset) - roffsum);
				if (roffsum + t->offset >= ll.off)
					ll.addr->rlink = r;
				else
					ll.addr->llink = r;
			}
		}	
	}
}

void petrify(struct node *t, int xpos)
{
	if (t != NULL)
	{
		t->xcoord = xpos;
		if (t->thread)
		{
			t->thread = false;
			t->rlink = NULL;
			t->llink = NULL;
		}
		petrify(t->llink, xpos - t->offset);
		petrify(t->rlink, xpos + t->offset);
	}
}

int main()
{
	return 0;
}
