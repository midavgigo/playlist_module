#ifndef __DLL_H__
#define __DLL_H__
#include <cstdlib>

template<typename T> class DoubleLinkedList;

template<typename T>
class Node{
protected:
    Node *prev, *next;
    T data;
    Node(T _data, Node *_prev, Node *_next){
        data = _data;
        prev = _prev;
        next = _next;
    }
    Node(){}
    friend class DoubleLinkedList<T>;
};

template<typename T>
class DoubleLinkedList{
private:
    Node<T> first;
    Node<T> *now = nullptr;
public:
    DoubleLinkedList(){}
    DoubleLinkedList(T a){
        first = Node<T>(a, nullptr, nullptr);
        first.prev = &first;
        first.next = &first;
        now = &first;
    }
    T getNow(){
        return now->data;
    }
    void Prev(){
        now = now->prev;
    }
    void Next(){
        now = now->next;
    }
    void AddData(T a){
        if(now == nullptr){
            first = Node<T>(a, nullptr, nullptr);
            first.prev = &first;
            first.next = &first;
            now = &first;
            return;
        }
        Node<T> *nd = first.prev;
        nd->next = (Node<T> *) malloc(sizeof(Node<T>));
        Node<T> *nw = nd->next;

        nw->data = a;
        nw->prev = first.prev;
        nw->next = &first;
        first.prev = nw;
    }
};

#endif
