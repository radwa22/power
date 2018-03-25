

namespace queue 
{


//using linked list
struct Node 
{
    double data ; // if char data will be char data
    Node*Next ;
};
struct DoublesQueue
{
    Node*front ;
    Node*rear;
};
void enqueue( DoublesQueue &queue ,double data ) // if char data will be char data
{  Node*oldNode = queue.rear ;
   Node*newNode = new Node ;
  newNode -> data = data ;
  oldNode->Next = newNode ;
  newNode -> Next = nullptr ;
   queue.rear = newNode ;
  
}
int dequeue( DoublesQueue &queue )
{  
    Node*OLDfront = queue.front ;
   queue.front = OLDfront -> Next ;
    delete OLDfront ;
}

int front( DoublesQueue &queue )
{
   Node*current = queue.front ;
   return current -> data ;
}

bool isEmpty( DoublesQueue &queue )
{   
  return (queue.front ==queue.rear ) ;
}

int size( DoublesQueue &queue )
{
    Node*current = queue.front ;
    int i = 0 ;
    {
        while (current->Next != nullptr)
        {
           
            current = current -> Next ;
             i++ ;
        }
        return i ;
    }
}
void clear( DoublesQueue &queue )
{  
    Node*current = queue.front ;
    while (current != nullptr)
    {
        current = current -> Next  ;
        delete current ;
    }
}
}