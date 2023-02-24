#include "Playlist.h"
#include <cstdlib>

template<typename T>
DoubleLinkedList<T>::DoubleLinkedList(T a){
    first = Node<T>(a, NULL, NULL);
    first.prev = &first;
    first.next = &first;
    now = &first;
}

template<typename T>
void DoubleLinkedList<T>::AddData(T a){
    Node<T> *nd = first.prev;
    nd->next = (Node<T> *) malloc(sizeof(Node<T>));
    Node<T> *nw = nd->next;

    nw->data = a;
    nw->prev = first.prev;
    nw->next = &first;
    first.prev = nw;
}

Playlist::Playlist(Song song){
    dll = DoubleLinkedList<Song>(song);
}

void Playlist::AddSong(Song song){
    dll.AddData(song);
}
template<typename T>
T DoubleLinkedList<T>::getNow(){
    return now->data;
}

Song Playlist::getNow(){
    return dll.getNow();
}
template<typename T>
void DoubleLinkedList<T>::Next(){
    now = now->next;
}

void Playlist::Next(){
    dll.Next();
}
template<typename T>
void DoubleLinkedList<T>::Prev(){
    now = now->prev;
}

void Playlist::Prev(){
    dll.Prev();
}
