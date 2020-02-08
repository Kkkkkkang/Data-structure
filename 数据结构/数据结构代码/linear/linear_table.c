//
//  linear_table.c
//  linear
//
//  Created by 康志恒 on 2020/1/20.
//  Copyright © 2020年 kang. All rights reserved.
//

#include "linear_table.h"
Status Sq_List_Init (SqList* L){
    L->length = 0;
    printf("Sq_List_Init初始化成功\n");
    return OK;
}

Status Sq_List_Allocation (SqList* L){
    int i;
    for(i = 0;i < SQ_LIST_SIZE;i ++){
        (*L).data[i] = i;
        printf("Sq_List_AllocationL的第%d处的值是%d\n",i,(*L).data[i]);
    }
    (*L).length = SQ_LIST_SIZE;
    printf("分配完毕\n");
    return OK;
}

Status Sq_List_GetElem(SqList L,int i,ElemType*p){
    if(i < 0 || i >= SQ_LIST_SIZE){
        return ERROR;
    }
    (*p) = L.data[i-1];
    printf("Sq_List_GetElemL的第%d处的值是%d\n",i,L.data[i-1]);
    return OK;
}

Status Sq_List_LocateElem(SqList L,ElemType x,int*i){
    for(int j = 0;j < SQ_LIST_SIZE;j ++){
        if(L.data[j] == x){
            (*i) = j;
            printf("Sq_List_LocateElemd定位元素的位置是%d\n",(*i));
            return OK;
        }
    }
    return ERROR;
}

Status Sq_List_Insert(SqList* L,ElemType x,int i){
    if(i < 0 || i >= SQ_LIST_SIZE || (*L).length + 1 > SQ_LIST_SIZE){
        return ERROR;
    }
    return OK;
}

