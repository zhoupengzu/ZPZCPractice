//
//  PointerArray01.c
//  ZPZPointerPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "PointerArray01.h"
/**
 * 指针数组:数组存储指向 int 或 char 或其他数据类型的指针
 * 数组里存储整数：int a[]
 * 则数组里存储整数指针：int * a[]
 * 整数指针表示：该指针变量地址里存储的是整数
 */
void pointArrayUse01(){
    const int MAX = 3;
    int a[MAX] = {10,20,30};
    int *ptr[MAX];
    for (int i = 0; i < MAX; i++) {
        /*
         * 为什么不是这个写法？
            int tempInt = a[i];
            printf("%d\n",tempInt);
            int * tempPtr = &tempInt;  //这里取到的是整数变量tempInt的地址，不是a[i]的地址，所以后面的结果都会出错
            printf("%p\n",tempPtr);
            ptr[i] = tempPtr;
         */
        ptr[i] = &a[i];
    }
    for (int i = 0; i < MAX; i++) {
        printf("%d\n",*(ptr[i]));
    }
}
