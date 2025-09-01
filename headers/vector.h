#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h> 

typedef struct {
    double* data;   
    size_t size; 
} Vec;

double vec_dot(const Vec* a, const Vec* b);
Vec* vec_add(const Vec* a, const Vec* b);
Vec* vec_subtract(const Vec* a, const Vec* b);
Vec* vec_scale(double s, const Vec* a);
double vec_norm(const Vec* a);
Vec* vec_from_array(const double* arr, size_t size);
void vec_free(Vec* v);
void vec_print(const Vec* v);
#endif
