#include "Playlist.h"
#include <cstdlib>

Playlist::Playlist(Song song){
    first = Node(song, NULL, NULL);
    first.prev = &first;
    first.next = &first;
    now = &first;
}

void Playlist::AddSong(Song song){
    Node *nd = first.prev;
    nd->next = (Node *) malloc(sizeof(Node));
    Node *nw = nd->next;

    nw->song = song;
    nw->prev = first.prev;
    nw->next = &first;
    first.prev = nw;
}

Song Playlist::getNow(){
    return now->getSong();
}

void Playlist::Next(){
    now = now->next;
}
void Playlist::Prev(){
    now = now->prev;
}
