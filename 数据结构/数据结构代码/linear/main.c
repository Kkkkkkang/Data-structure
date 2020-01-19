//
//  main.c
//  linear
//
//  Created by 康志恒 on 2020/1/20.
//  Copyright © 2020年 kang. All rights reserved.
//

#include <stdio.h>
#include "linear_table.h"
int main(int argc, const char * argv[]) {
    SqList mySqList;
//getelem用来接收返回值
    
/*
 *  初始化顺序表
 */
    Sq_List_Init(&mySqList);
    
    
    Sq_List_Allocation(&mySqList);
    
    ElemType getElem;
    Sq_List_GetElem(mySqList,1,&getElem);
    
    int LocationElem;
    Sq_List_LocateElem(mySqList,7,&LocationElem);
    return 0;
}

