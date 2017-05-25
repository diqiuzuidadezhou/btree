
typedef struct _btnode {
	int  key;
	int    height;
	int parent;
	int   lchild;
	int   rchild;
}btnode;

void btInsert(int node);
void btRemove(int node);
void btBlance(int node);
int  btComputeHeight(int node);
void btFreeNode(int node);
void btAllocateNode();

int m_root = NULL;
int free_list = NULL;

void btInset(int node)
{
     if(NULL == m_root)
     {
        m_root = mode;
	
     }
}
