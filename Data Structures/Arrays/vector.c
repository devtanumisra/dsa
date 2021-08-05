#include <stdio.h>
#include <stdlib.h>

typedef struct vector {
  int* arr;
  int capacity;
  int current_size;
} vector;

vector* init_vector(int capacity) {
  vector* vect = malloc(sizeof(vector));
  vect->arr = malloc(sizeof(int) * capacity);
  vect->capacity = capacity;
}

vector* free_vector(vector* vect) {
  free(vect->arr);
  free(vect);
}

vector* resize_vector(vector* vect, int new_capacity) {
  vector* temporary = init_vector(new_capacity);
  temporary->current_size = vect->current_size;
  for(int i = 0; i < vect->current_size; ++i) {
    temporary->arr[i] = vect->arr[i];
  }
  free_vector(vect);
  return temporary;
}

vector* push_back(vector* vect, int num) {
  if(vect->current_size == vect->capacity) {
    vect = resize_vector(vect, vect->capacity * 2);
  }
  vect->arr[vect->current_size] = num;
  vect->current_size++;
  return vect;
}

int pop_back(vector* vect) {
  if (vect->current_size != 0) {
    vect->current_size--;
  }
  return vect->arr[vect->current_size];
}

void print_vector(vector* vect) {
  for(int i = 0; i < vect->current_size; ++i) {
    printf("%d ", vect->arr[i]);
  }
  putchar('\n');
}

int main(int argc, char *argv[]) {
  vector* vect = init_vector(10);
  for(int i = 0; i < 10; ++i) {
    vect = push_back(vect, i);
  }
  printf("%d\n", pop_back(vect));
  print_vector(vect);
  free_vector(vect);
  return 0;
}