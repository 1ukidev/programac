#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Vec* vec_from_array(const double* arr, size_t size) {
    Vec* v = (Vec*)malloc(sizeof(Vec));
    if (!v) return NULL;

    v->data = (double*)malloc(size * sizeof(double));
    if (!v->data) {
        free(v);
        return NULL;
    }
    v->size = size;
    for (size_t i = 0; i < size; ++i) {
        v->data[i] = arr[i];
    }
    return v;
}

void vec_free(Vec* v) {
    if (v) {
        free(v->data);
        free(v);
    }
}

void vec_print(const Vec* v) {
    if (!v) return;
    printf("{ ");
    for (size_t i = 0; i < v->size; ++i) {
        printf("%.2f ", v->data[i]);
    }
    printf("}\n");
}

double vec_dot(const Vec* a, const Vec* b) {
    double result = 0.0;
    for (size_t i = 0; i < a->size; ++i) {
        result += a->data[i] * b->data[i];
    }
    return result;
}

Vec* vec_add(const Vec* a, const Vec* b) {
    Vec* result = (Vec*)malloc(sizeof(Vec));
    result->data = (double*)malloc(a->size * sizeof(double));
    result->size = a->size;

    for (size_t i = 0; i < a->size; ++i) {
        result->data[i] = a->data[i] + b->data[i];
    }
    return result;
}

Vec* vec_subtract(const Vec* a, const Vec* b) {
    Vec* result = (Vec*)malloc(sizeof(Vec));
    result->data = (double*)malloc(a->size * sizeof(double));
    result->size = a->size;

    for (size_t i = 0; i < a->size; ++i) {
        result->data[i] = a->data[i] - b->data[i];
    }
    return result;
}

Vec* vec_scale(double s, const Vec* a) {
    Vec* result = (Vec*)malloc(sizeof(Vec));
    result->data = (double*)malloc(a->size * sizeof(double));
    result->size = a->size;

    for (size_t i = 0; i < a->size; ++i) {
        result->data[i] = s * a->data[i];
    }
    return result;
}

double vec_norm(const Vec* a) {
    return sqrt(vec_dot(a, a));
}
