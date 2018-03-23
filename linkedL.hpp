
#ifndef radwa
#define radwa
namespace radwa
{


struct Node 
{
    int data ;
    Node *Next  ;
};

struct IntegersLL
{
  Node*head = nullptr;
};

void insertFront( IntegersLL &list , int data )
{  
     Node*current = new Node ;
         current ->data = data ;
         current ->Next = list.head ;
         list.head = current ;

}
void insertBack( IntegersLL &list, int data )
{
   Node*current = list.head ;
   while ( current -> Next != nullptr)
   {
       current = current -> Next ;
   }
   Node*NewNode = new Node ;
   NewNode -> data = data ;
   current -> Next = NewNode ;
  NewNode -> Next = nullptr ;
}
void removeFront( IntegersLL &list )
{  
    Node*current = list .head ;
    list.head = list.head -> Next ;
    delete current ; 
}
void removeBack( IntegersLL &list )
{
  Node*current = list.head ;
  Node* pcurrent = current ; 
  while(current -> Next != nullptr)
  {   
       
     pcurrent = current ;
    current = current -> Next ;
     
  }
   
  pcurrent-> Next = nullptr ;
  delete current ;

}
int  getAt( IntegersLL &list , int index ) //first possible solution
{
   Node*current = list.head ;
   int i = 0 ;
   while(current -> Next != nullptr)
  {
     current = current -> Next ;
     i++ ; 
     if (i==index)
     {
         return current -> data ;
     }
  }

}
/*int getAt( IntegersLL &list , int index ) //2nd
{
  Node*current = list.head ;
  for(int i =0 ; i< index ; i++ )
  {
    current = current -> Next ;

  }
  return current -> data ;
}*/
int front( IntegersLL &list )
{
   Node*front = list.head ;
   return front -> data ;
}
int back( IntegersLL &list )
{
  Node*current= list.head ;
  while (current != nullptr)
  {
    current = current -> Next ;
  }
  return current -> data ;
}
void removeAt( IntegersLL &list , int index )
{
   Node*current = list.head ;
    Node*pcurrent = current ; 
   int i=0 ;
   while(current -> Next != nullptr)
   {   
       current=current-> Next ;
       i++;
       if(i==index)
       {
           
           pcurrent ->Next = current -> Next ;
           delete current ;
       }
   }
}
bool isEmpty( IntegersLL &list )
{
  return (list.head == nullptr);


}
int size( IntegersLL &list )
{
    Node*current = list.head ;
    int i = 0 ;
    while (current -> Next != nullptr)
    {
        current = current -> Next ;
        i++ ;
    }
    return i ;
}
void printAll( IntegersLL &list )
{
    Node*current = list.head ;
    int i = 0 ; 
    while (current != nullptr)
    {
        
        std::cout << current -> data <<std::endl ;
        i++ ;
    }
}

void clear(IntegersLL &list)
{ 
    Node*current = list.head ;
    while (current != nullptr)
    {
        current = current -> Next  ;
        delete current ;
    }
}
}

#endif
 



