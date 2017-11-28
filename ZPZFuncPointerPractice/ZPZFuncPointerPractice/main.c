//
//  main.c
//  ZPZFuncPointerPractice
//
//  Created by zhoupengzu on 2017/11/28.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include <stdio.h>
/**
 * 函数指针和指针函数
 * 指针函数：返回值是指针类型的函数
 * 函数指针：是一个指针，前面是类型，后面是变量名
 */
int * pointFunc(){
    printf("I am a pointer func");
    int a = 5;
    return &a;
}

void funcPoint1(){
    printf("funcPoint1\n");
}

int main(int argc, const char * argv[]) {
    
    void (*func1)(void) = funcPoint1;
    func1();
    return 0;
}
