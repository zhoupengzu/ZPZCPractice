//
//  StructDefine01.h
//  ZPZStructPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#ifndef StructDefine01_h
#define StructDefine01_h

#include <stdio.h>

struct Person {
    char * name;
    int age;
};

typedef struct Book{
    char * name;
} book;

static struct Animatl {
    char * name;
    int age;
} dog = {"dog",10};  //要想这么写的话，必须要用static修饰

#endif /* StructDefine01_h */
