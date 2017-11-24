//
//  ArrayDefine01.c
//  ZPZPointerPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "ArrayDefine01.h"

void printInfo(void) {
    printf("Hello, Array!\n");
}

void defineArray(void) {
    //初始化
    int a[10];
//    int[10] c;  //这种定义是错误的
    int b[] = {10,2,3}; //一旦创建，就会默认给数组开辟了三个长度
//    b[4] = 5;  //会出问题
}
