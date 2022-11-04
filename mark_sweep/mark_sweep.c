//
// Created by weigu on 2022/10/26.
//

#include <stdio.h>
#include <malloc.h>
#include "mark_sweep.h"

void *heap;
void mark();
void sweep();

void msg() {
    printf("mark sweep!\n");
}

void init() {
    heap = malloc(1024);
}

void malloc_t(int size) {

}

void free_t(void *ptr) {

}

void attach_t(void *parent, void *child) {

}

void detach_t(void *parent, void *child) {

}

void mark() {
    printf("mark phase.\n");
}

void sweep() {
    printf("sweep phase.\n");
}