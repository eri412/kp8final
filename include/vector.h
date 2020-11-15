#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

#include "stack.h"

#define SIZE_MULTIPLIER 2
#define DEFAULT_CAPACITY 8

typedef struct {
    int data;
    int next;
} Elem;

typedef struct {
    int size;
    int first;
    Stack *stack;
    Elem *buff;
} Vector;

typedef struct {
    Vector *vec;
    int pos;
} Iter;

int iter_eq(Iter lhs, Iter rhs);
Iter vector_begin(Vector *vec);
Iter vector_end(Vector *vec);
void iter_next(Iter *iter);
int iter_get(Iter iter);
void iter_change(Iter iter, int data);
int vector_size(Vector *vec);
void vector_print(Vector *vec);
void _vector_grow(Vector *vec);
void vector_add(Iter iter, int data);
void vector_del(Iter iter);
Vector *vector_new();
void vector_free(Vector *vec);
void vector_task(Vector *vec, int k);

#endif
