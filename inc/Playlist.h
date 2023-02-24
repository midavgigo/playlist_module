#ifndef __PLATLIST_H__
#define __PLATLIST_H__
#include "Song.h"
#include <thread>

class Playlist;
template<typename T> class DoubleLinkedList;

template<typename T> class Node{
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

template<typename T> class DoubleLinkedList{
private:
    Node<T> first;
    Node<T> *now;
public:
    DoubleLinkedList(T a);
    T getNow();
    void Prev();
    void Next();
    void AddData(T a);
    DoubleLinkedList(){}
};

class Playlist{
protected:
    DoubleLinkedList<Song> dll;
public:
    Playlist(Song song);
    void AddSong(Song song);
    void Next();
    void Prev();
    Song getNow();
};

#endif
