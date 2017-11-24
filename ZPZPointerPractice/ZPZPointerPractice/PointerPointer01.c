//
//  PointerPointer01.c
//  ZPZPointerPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "PointerPointer01.h"
//指向指针的指针
void definePointerPointer(){
    int var = 3000;
    int * ptr = &var;
    int **ppter = &ptr;
}
