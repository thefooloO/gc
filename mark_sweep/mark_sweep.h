//
// Created by weigu on 2022/10/26.
//

#ifndef GC_MARK_SWEEP_H
#define GC_MARK_SWEEP_H

#define TRUE  1
#define FALSE 0

void msg();
void init();
void malloc_t(int size);
void free_t(void *ptr);
void attach_t(void *parent, void *child);
void detach_t(void *parent, void *child);

struct objHeader {
    int size;          // 对象大小
    int mark;          // 标记
    int index;         // 子对象数据的索引
    void *child[5];    // 子对象
};

#endif //GC_MARK_SWEEP_H