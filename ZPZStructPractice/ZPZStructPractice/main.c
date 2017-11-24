//
//  main.c
//  ZPZStructPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include <stdio.h>
#include "StructDefine01.h"

void useStructAsParam(struct Person person);

void defineStruct(){
    struct Person person;
    person.name = "zhoupengzu";
    person.age = 20;
    useStructAsParam(person);
}

void defineStruct02(){
    book books;
    books.name = "struct";
}

void useStructAsParam(struct Person person) {
    printf("name:%s,age:%d\n",person.name,person.age);
}
void useStructPointerAsParam(struct Person * per);
void defineStructPointer(){
    struct Person person;
    person.name = "huangyan";
    person.age = 20;
    struct Person * personPtr = &person;
    useStructPointerAsParam(personPtr);
}

void useStructPointerAsParam(struct Person * per) {
    printf("name:%s,age:%d\n",per->name,per->age);
    printf("name:%s,age:%d\n",per->name,(*per).age);
}

int main(int argc, const char * argv[]) {
    defineStruct();
    defineStructPointer();
    
    return 0;
}
