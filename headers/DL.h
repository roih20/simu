#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
  /* data */
  int data;
  Node* next;
  Node* prev;
};

typedef Node Node;

void* crearNodo(){
    return malloc(sizeof(Node));
}

void insert(Node** L, int value) {
  Node* temp = (Node*) crearNodo();
  temp->data = value;
  temp->prev = NULL;

  if (*L == NULL) {
    temp->next = NULL;
  } else {
    (*L)->prev = temp;
    temp->next = *L;
  }

  *L = temp;
}

void intercambiarPosicion (Node** L, int p_1, int p_2) {
  Node* temp = *L;
  Node* aux = (Node*) crearNodo();
  Node* aux2 = (Node*) crearNodo();
  int position;
   while (temp != NULL) {
      if (position == p_1) {
        aux = temp;
      }
      if (position == p_2) {
        aux2 = temp;
      }
      temp = temp->next;
      position++;
  }
  swap(aux->data, aux2->data);
}

void destroyList (Node**L) {
  Node *temp;

  while (*L != NULL) {
    temp = *L;
    *L = (*L)->next;
    free(temp);
  }
}

void insertarAlFinal (Node **L, int value) {
  Node* temp = (Node*) crearNodo();
  temp->data = value;
  temp->next = NULL;

  if (*L == NULL) {
    *L = temp;
  } else {
    Node* Lcopy = *L;
    while (Lcopy->next != NULL) {
      Lcopy = Lcopy->next;
    }
    Lcopy->next = temp;
  }

}