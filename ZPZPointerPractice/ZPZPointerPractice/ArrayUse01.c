//
//  ArrayUse01.c
//  ZPZPointerPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "ArrayUse01.h"

void receiveArray01(int a[], int size);
void receiveArray03(int *a);

void sendArrayToFunctionType01() {
    int size = 4;
//    int a[size] = {10,20,30,40};  //这样是有问题的
    int a[] = {10,20,30,40};
    //因为实际上传递的是指针，所以在方法内部修改元素，也会影响到原数据
    receiveArray01(a,size);  //需要前置申明
    for (int i = 0; i < size; i++) {
        printf("%d",a[i]);
    }
}
//void sendArrayToFunctionType02() {
//    int a[] = {10,20,30,40};
//    receiveArray02(a,);
//}
void sendArrayToFunctionType03(){
    int a[] = {10,20,30,40,50};
    printf("%p\n",a);
    receiveArray03(a);
}
//以下是三种接受数组的方法定义方式
//1、形参是一个未定义大小的数组
void receiveArrayDefine01(int a[]) { }
//2、形参是一个指定大小的数组，这个没什么实质用处
//void receiveArrayDefine02(int a[10]){ }
//3、形参是一个指针
void receiveArrayDefine03(int *a){ }

//实战
void receiveArray01(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    a[1] = 30;
    printf("sum:%d\n",sum);
}

void receiveArray03(int *a){
    printf("%p\n",a); //0x7ffeefbff570
    printf("%d\n",a[0]);
    printf("%d\n",*(a+1)); //a[1]
    printf("%d\n",*a+1); //a[0] + 1
    printf("%p\n",a+1); //0x7ffeefbff574
    printf("%p\n",&(*(a + 1))); //0x7ffeefbff574
//    printf("%p\n",&(a+1));  //因为a+1已经是个地址了，再取地址就会出问题
}
