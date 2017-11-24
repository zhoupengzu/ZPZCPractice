//
//  main.c
//  ZPZStringPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void copyString(){
    char * str = "Hello,World!";
    char dst[20];
    strcpy(dst, str);
    printf("%s\n",dst);
}

void catString(){
    char s1[20] = "cat,";
    char * s2 = "string!";
    strcat(s1, s2);
    printf("%s\n",s1);
}

void stringCompare(){
    char * s1 = "hello";
    char * s2 = "hello";
    int result = strcmp(s1, s2);
    printf("%d\n",result);
}

void stringLength(){
    char * s1 = "hello,world\0";
    printf("len:%ld\n",strlen(s1)); //11
}

int main(int argc, const char * argv[]) {
    char str[] = "Hello,World";
    printf("%s\n",str);
    copyString();
    catString();
    stringCompare();
    stringLength();
    return 0;
}
