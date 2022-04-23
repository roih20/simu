#include <iostream>
#include <stdlib.h>

using namespace std;

int* create (int size) {
  int* array = (int*) malloc(sizeof(int)*size);
  return array;
}

void insert (int* array, int pos, int value) {
  array[pos] = value;
}

string search(int* array, int size, int value) {
  string ans = "No existe el valor";
  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      ans = "Si existe el valor";
      break;
    }
  }

  return ans;
}

int* create_copy (int* original, int size) {
  int* new_one = (int*) malloc(sizeof(int)*size);
  new_one = original;
  return new_one;
}

void buildarrays (int n, int size) {
  for (int i = 0; i <= n; i++) {
   int* array = create(size);
   cout << "El arreglo es: " << array << endl;
  }
}

void twoposition (int* array, int value) {
  int size = sizeof(array);
  cout << size << endl;
  for (int i = 1; i <= size; i++) {
    array[2 * i] = value;
  }

  for (int i= 0; i <= size; i++) {
    cout << array[i] << endl;
  }
}

void overrideArray (int* array, int v_1, int v_2) {
  int size = sizeof(array);

  for (int i = 0; i < size; i++) {
    if (array[i] == v_1){
      array[i] == v_2;
    }
  }
}

void copy_position (int* array, int p_1, int p_2) {
  int value = array[p_1];
  array[p_2] = value;
}

void change_position (int* array, int p_1, int p_2) {
  int value_1 = array[p_1];
  int value_2 = array[p_2];
  array[p_1] = value_2;
  array[p_2] = value_1; 
}

bool no_repeat (int array[], int value) {
  int size = sizeof(array);
  int cont = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      cont++;
    }
  }
  if (cont >= 2) return true;

  return false;
}

bool only_two (int array[], int value) {
  int size = sizeof(array);
  int cont = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      cont++;
    }
  }
  if (cont == 2) return true;
  return false;
}

bool is_n_times (int array[], int value, int n) {
  int size = sizeof(array);
  int cont = 0;
  for (int i = 0; i < size; i++){
    if(array[i] == value){
      cont++;
    }
  }
  if(cont >= n) return true;
  return false;
}

int even_numbers (int array[], int n) {
  int cont = 0;
  int size = sizeof(array);
  for(int i = 0; i < size; i++) {
    if (array[i] % 2 == 0){
      cont++;
    }
  }
  return cont;
}

int odd_numbers (int array[], int n){
  int cont = 0;
  int size = sizeof(array);
  for (int i = 0; i < size; i++){
    if (array[i] % 2 != 0){
      cont++;
    }
  }

  return cont;
}

int n_multiples (int array[], int n){
  int cont = 0;
  int size = sizeof(array);
  for (int i = 0; i < size; i++){
    if (array[i] % n == 0){
      cont++;
    }
  }
  return cont;
}

int n_divisibles (int array[], int n){
  int cont = 0;
  int size = sizeof(array);
  for (int i = 0; i < size; i++){
    if(array[i] % n == 0){
      cont++;
    }
  }
}

int closed_interval (int array[], int n){
  int size = sizeof(array);
  int cont = 0;
  if (size > n + 1) {
    for (int i = n - 1; i <= n + 1; i++){
      cont++;
    }
  }

  return cont;
}


int n_closed_interval (int array[], int n, int d){
  int size = sizeof(array);
  int cont = 0;

  if (size > n + d) {
    for (int i = n - d; i < n + d; i++){
      cont++;
    }
  }
  return cont;
}

void duplicate_array_copy (int array[]) {
  int new_array[] = { };
  int size = sizeof(array);
  for (int i = 0; i < size; i++){
    new_array[i] = array[i] * 2;
  }
}

void multiplicate_array_copy (int array[], int n) {
  int new_array[] = { };
  int size = sizeof(array);
  for (int i = 0; i < size; i++) {
    new_array[i] = array[i] * n;
  }
}

void copy_pair_array (int array[]) {
  int new_array[] = { };
  int size = sizeof(array);
  for (int i = 0; i < size; i++) {
    new_array[2*i] = array[i];
  }
}

void copy_odd_array (int array[]) {
  int new_array[] = { };
  int size = sizeof(array);
  for (int i = 0; i < size; i++) {
    new_array[2*i+1] = array[i];
  }
}

void ignore_third_ocurrence (int array[], int v) {
  int new_array[] = { };
  int size = sizeof(array);
  int cont = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] == v) cont++;
    if (cont == 3) {
      new_array[i] = NULL;
      cont++;
    } else {
      new_array[i] = array[i];
    }
  }
}