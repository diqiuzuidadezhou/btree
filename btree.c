
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
