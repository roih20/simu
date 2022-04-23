#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node{
    int valor;
    Node *next;
}; 
typedef Node Node;

void* createNode(){ 
    return malloc(sizeof(Node));
}

void insert(int value, Node **L) {
  Node* temp = (Node*) createNode();
  temp->valor = value;

  if (*L == NULL) {
    temp->next = NULL;
  } else {
    temp->next = *L;

  }
  *L = temp;
}

void isertarAlFinal (Node **L, int value) {
  Node* temp = (Node*) createNode();
  temp->valor = value;
  temp->next = NULL;

  if (*L == NULL) {
    *L = temp;
  } else {
    Node* aux = *L;
    while (aux->next != NULL) {
      aux = aux->next;
    }
    aux->next = temp;
  }
  
}


void sobreescribirOcurrencias (Node **L, int v_1, int v_2) {
  Node* temp = (Node*) createNode();

  while (*L != NULL) {
    if (temp->valor == v_1) {
      temp->valor = v_2;
    }
    temp = temp->next; //Avanzamos al siguiente
  }
}

void copiarContenido (Node** L, int p_1, int p_2) {
  Node* temp = *L;
  int position = 0;
  int copy;
  while (*L != NULL) {
    if (position == p_1) {
      copy = temp->valor;
    }
    if (position == p_2) {
      temp->valor = copy;
    }
    temp = temp->next;
    position++;
  }
}

void intercambiarDatos (Node** L, int p_1, int p_2) {
  Node* temp = *L;
  Node* aux = *L;
  Node* aux2 = *L;
  int position = 0;
  int copy_p1, copy_p2;
  
  while (*L != NULL) {
    if (position == p_1) {
      copy_p1 = temp->valor;
      aux = temp;
      aux->valor = copy_p2;
    }
    if (position == p_2) {
      copy_p2 = temp->valor;
    }
    temp = temp->next;
    position++;
  }
}

bool numeroRepetido (Node** L, int value, int n) {
  Node* temp = *L;
  int cont = 0;
  bool ans = false;
  while (*L != NULL) {
    if (temp->valor == value) {
      cont++;
    }
    temp = temp->next;

    if (cont <= n) {
      ans = true;
      break;
    }
  }
  return ans;
}

int pares(Node** L, int n) {
  Node* temp = *L;
  int pares = 0;

  while (*L != NULL) {
    if (temp->valor%2 == 0) {
      pares++;
    }
  }
  return pares;
}