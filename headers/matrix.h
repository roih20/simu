#include <iostream>
#include <stdlib.h>

using namespace std;

int** create (int nrows, int ncols) {

  int** matrix = (int** ) malloc(sizeof(int*)*nrows);

  for (int i = 0; i < nrows; i++)
    matrix[i] = (int*) malloc(sizeof(int)*ncols);

  return matrix;
}

// Crear una matriz por columnas 
int** create_cols (int nrows, int ncols) {

  int** matrix = (int** ) malloc(sizeof(int*)*ncols);

  for (int i = 0; i < ncols; i++) {
    matrix[i] = (int*) malloc(sizeof(int)*nrows);
  } 

  return matrix;
}

// Recorrer una matriz por columnas y mostrar su contenido

void show_matrix (int** matrix, int nrows, int ncols) {
   for (int i = 0; i < ncols; i++) {
     for (int j = 0; i < nrows; i++) {
       cout << matrix[j][i] << endl;
     }
   }
}

// buscar un valor en la matriz recorriendo por columnas

bool search (int **matrix, int ncols, int nrows, int value) {
  bool ans = false;
  for (int i = 0; i < ncols; i++) {
    for (int j = 0; j < nrows; i++) {
      if (matrix[j][i] == value) {
        bool ans = true;
        break;
      }
    }
  }
  return ans;
}

// contar ocurrencias de un valor en la matriz

int ocurrence (int** matrix, int ncols, int nrows, int value) {
  int cont = 0;
  for (int i = 0; i < ncols; i++) {
    for (int j = 0; i < nrows; i++) {
      if (matrix[j][i] == value) {
        cont++;
      }
    }
  }

  return cont;
}

void build_nXn (int n) {
  int** matrix = (int**) malloc(sizeof(int*)*n);
  for (int i = 0; i < n; i++) {
    matrix[i] = (int*) malloc(sizeof(int)*n);
  }
}

bool matrix_n (int** matrix) {
  bool ans = false;

  return ans;
}

void matrix_identidad (int n) {
  int **matrix = (int**) malloc(sizeof(int*)*n);

  for (int i = 0; i < n; i++) {
    matrix[i] = (int*) malloc(sizeof(int)*n);
  }

  for (int i = 0; i < n*n; i++) {
    matrix[i/n][i%n] = 1;
    i+=n;
  }
}

bool equals_matrix (int** matrix_1, int** matrix_2) {
  
}