//
//  PointerUse01.c
//  ZPZPointerPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "PointerUse01.h"

void pointerUse01(void){
    int var = 20;
    int * ip;    //这是一个整型指针,ip是指针变量名，它储存的是地址
    ip = &var;   //取地址，并赋值给ip
    printf("Address of var variable:%p\n",&var);  //0x7ffeefbff58c
    printf("Address stored in ip variable:%p\n",ip); //0x7ffeefbff58c
    printf("Value of *ip variable:%d\n",*ip);  //用*来获取指针中所储存的地址里存放的值，打印为20
}
