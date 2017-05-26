
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
     int parent = 0;
     while(0 != *index)
     {
         if(data == m_nodes[*index].key)
	    return;
	 else if(data < m_nodes[*index].key)
	 {
	    parent = *index;
	    index = &m_nodes[*index].lchild;	 
	 }
	 else if(data > m_nodes[*index].key)	
	 {
	     parent = *index; 
	     index = &m_nodes[*index].rchild;
	 }
     }
     *index = node;
     m_nodes[node].parent = parent;
     
	while(0 != parent)
	{
	    int child1 = m_nodes[parent].lchild;
	    int child2 = m_nodes[parent].rchild;
	    int balance = m_nodes[child1].height - m_nodes[child1].height;
	     if(balance<-1 )
	     {
	          child1 = m_nodes[child2].lchild;
		  child2 = m_nodes[child2].rchild;
		   balance = m_nodes[child1].height - m_nodes[child1].height;
		  if(balance<0)
		  {
		      child2 = m_nodes[parent].rchild;
		      m_nodes[child2].lchild = m_nodes[child1].rchild;  
		      m_nodes[child2].parent = child1;
		      m_nodes[child1].parent = parent;
		      m_nodes[child1].rchild = child2;
		      m_nodes[parent].rchild = child1;
		      child1 = m_nodes[parent].rchild;
	              child2 = m_nodes[child1].lchild;
		      m_nodes[parent].rchild = child2;
		     m_nodes[child2].parent = parent;
			  
		  }
	     }
	}
}
