#ifndef     _BTREE_H
#define     _BTREE_H

typedef struct _btnode {
	int  key;
	int    height;
	struct _btreenode *lchild;
	struct _btreenode *rchild;
}btnode;

void btInsert(int node);
void btRemove(int node);
void btBlance(int node);
int  btComputeHeight(int node);
void btFreeNode(int node);
void btAllocateNode();


#endif // !_BTREE_H
