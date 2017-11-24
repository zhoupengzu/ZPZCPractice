//
//  PointerUse03.c
//  ZPZPointerPractice
//
//  Created by zhoupengzu on 2017/11/24.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "PointerUse03.h"

void changeValue(int *a) {
    *a = 20;
}

void sendPointerToChangeValue(){
    int a = 10;
    changeValue(&a);
    printf("%d\n",a); //20 
}
