
namespace RH
{

struct IntegersStack
{
  int top = -1 ;
  int buffer[1000];
};
void push( IntegersStack &stack , int data )
{  
                  
    stack.top ++ ;
   stack.buffer[stack.top] = data ;
}
int pop( IntegersStack &stack )
{
    stack.top-- ;
    return stack.buffer[stack.top];
    
}

int front( IntegersStack &stack )
{

  return stack.buffer [stack.top];

}
bool isEmpty( IntegersStack &stack )
{

   return (stack.top == -1);

}
int size( IntegersStack &stack )
{

    return stack.top + 1 ;
}
void clear( IntegersStack &stack )
{
  stack.buffer[-1];

}
//using linked list
struct Node
{
  int data;
    Node* next = nullptr;
};


struct stackll
 {
    Node *front = nullptr;
 };

 void push( stackll &Stack , int data )
 {
     Node*NEW = new Node ;
       NEW -> data = data ;
       NEW -> next = Stack.front ;
       Stack.front = NEW ;
 }
 int pop (stackll&Stack)
 {
    Node * current = Stack.front ;
    return current -> data ;

 }
 bool isEmpty(stackll &Stack )
 {
     return (Stack.front ==nullptr);
 }


}