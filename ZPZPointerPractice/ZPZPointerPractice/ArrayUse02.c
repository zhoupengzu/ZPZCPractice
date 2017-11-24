//
//  ArrayUse02.c
//  ZPZPointerPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "ArrayUse02.h"

int * returnArrayInfo(void);

void printGetArrayInfo() {
    int * a = returnArrayInfo();
    printf("%d\n",*(a + 1));
}

int * returnArrayInfo() {
    static int a[3] = {1,2,3}; //为什么要用static
    return a;
}
