template<class T>
class Deque{
public:
  Deque();
  bool isEmpty();
  int size();
  void addFirst(struct node&n);
  void addLast(node&n);
  T removeFirst();
  T removeLast();
  Iterator() p;
  ~Deque();
private:
  int size;
  struct node{
    T item;
    struct node *next;
    struct node *prev;
  }
  struct node *last;
  struct node *first;
} 
