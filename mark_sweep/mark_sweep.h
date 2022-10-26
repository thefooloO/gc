//
// Created by weigu on 2022/10/26.
//

#ifndef GC_MARK_SWEEP_H
#define GC_MARK_SWEEP_H

#define TRUE  1
#define FALSE 0

void * heap;

void msg();
void init();
void malloc_t(int size);
void free_t(void *ptr);

struct objHeader {
    int size;   // 对象大小
    int mark;   // 标记
};

#endif //GC_MARK_SWEEP_H
