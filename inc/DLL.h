#ifndef __DLL_H__
#define __DLL_H__
#include<iostream>
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
    friend class DoubleLinkedList<T>;
};

template<typename T>
class DoubleLinkedList{
private:
    Node<T> *first = nullptr;
    Node<T> *now = nullptr;
public:
    DoubleLinkedList(){}
    DoubleLinkedList(T a){
        first = new Node<T>(a, nullptr, nullptr);
        first->prev = first;
        first->next = first;
        now = first;
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
            first = new Node<T>(a, nullptr, nullptr);
            first->prev = first;
            first->next = first;
            now = first;
            return;
        }
        Node<T> *nd = first->prev;
        nd->next = new Node<T>(a, first->prev, first);
        Node<T> *nw = nd->next;
        first->prev = nw;
    }
    void Begin(){
        now = first;
    }

    void DelNow(){
        if(now == nullptr){
            return;
        }
        if(now->next == now){
            Node<T> *old = now;
            delete old;
            now = nullptr;
            first = nullptr;
        }else{
            Node<T> *old = now;
            now->prev->next = now->next;
            now->next->prev = now->prev;
            now = now->next;
            delete old;
        }
    }
};

#endif
