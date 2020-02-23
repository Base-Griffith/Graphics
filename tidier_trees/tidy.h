#ifndef tidy_h
#define tidy_h

struct extreme
{
	struct node *addr;
	int off;		// offset from root
	int lev;		// tree level
};

void setup(struct node *t, int level, int minsep, struct extreme *rmost, struct extreme *lmost);

void petrify(struct node *t, int xpos);

void draw_tree(int cx, int cy , node *N );

void tidy();

#endif
