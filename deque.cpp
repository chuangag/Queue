#include deque.h
template<class T>
Deque::Deque():size(0),first(0),last(0)
{
  
}

template<class T>
bool Deque::isEmpty(){
  return size;
}

template<class T>
int Deque::size(){
  return size;
}

template<class T>
void Deque::addFirst(struct node &n){
  struct node *newnode = new struct node;
  newnode->item=n.item;
  if(first==NULL){
    newnode->next=n.next;
    newnode->prev=n.prev;
    first=newnode;  
    last=first;
  }
  else{
    
  }
  
  
}

template<class T>
void Deque::addLast(){}

template<class T>
T Deque::removeFirst(){}

template<class T>
T Deque::removeLast(){}

template<class T>
~Deque(){}