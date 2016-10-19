#ifndef _DEQUE_H
#define _DEQUE_H
template<typename T>
class Deque{
public:
    //default constructor
    Deque();
    //copy constructor
    Deque(const Deque<T> & d);
    //assignment operator
    Deque<T>& operator=(const Deque<T> & d);
    //default destructor
    ~Deque();
    //return true if deque is empty, ie size == 0
    inline bool isEmpty() const;
    
    //return the current size of deque
    inline int size() const;
    
    //add a item to the front of the deque
    void addFirst(T item);
    
    //add a item to the end of the deque
    void addLast(T item);
    
    /* remove the first node of the deque
     throw runtime error if trying to remove from an empty deque*/
    T removeFirst();
    
    /* remove the last node of the deque
     throw runtime error if trying to remove from an empty deque*/
    T removeLast();
    
    //define iterator class
    class Iterator;
    
    //return an iterator object
    Iterator iterator() const;
  
private:
    class Node;
    //current size of the deque
    int size;
    //the last node
    Node *last;
    //the first node
    Node *first;
}

template<typename T>
class Deque<T>::Node{
    
}
#endif
