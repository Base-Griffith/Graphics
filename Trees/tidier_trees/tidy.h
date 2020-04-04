#ifndef tidy_h
#define tidy_h

struct extreme
{
	struct node *adr;
	int offset;		// offset from root
	int level;		// tree level
};

void setup_tdr(struct node *t, int level, struct extreme &rmost, struct extreme &lmost);

void petrify(struct node *t, int xpos);

void draw_tree(int cx, int cy , node *N );

void tidy();

#endif
