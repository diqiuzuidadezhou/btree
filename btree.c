
typedef struct _btnode {
	int  key;
	int    height;
	int   lchild;
	int   rchild;
	union{
	      int parent;
	      int next;
	};
}btnode;

void btInsert(int node);
void btRemove(int node);
void btBlance(int node);
int  btComputeHeight(int node);
void btFreeNode(int node);
void btAllocateNode();

int m_root = NULL;
int free_list = NULL;
btmode m_nodes[];
void btInset(int node)
{
     if(NULL == m_root)
     {
        m_root = mode;
	m_nodes[m_root].parent = NULL;
     }
     int data = m_nodes[node].key;
     int *index = &m_root;
     
     while(0 != *index)
     {
         if(data == m_nodes[*index].key)
	    return;
	 else if(data < m_nodes[*index].key)
	 {
	    index = &m_nodes[*index].lchild;
	 }
	 else if(data > m_nodes[*index].key)	
	 {
	     index = &m_nodes[*index].rchild;
	 }
     }
     *index = node;
     
}
