//
//  linear_table.h
//  linear
//
//  Created by 康志恒 on 2020/1/20.
//  Copyright © 2020年 kang. All rights reserved.
//

#ifndef linear_table_h
#define linear_table_h

#include <stdio.h>
#include "status.h"
#include <stdlib.h>
/*
 * 定义宏
 */
#define SQ_LIST_SIZE 10
typedef int ElemType;
/*
 * 顺序表结构
 */
typedef struct {
    ElemType data[SQ_LIST_SIZE];
    int length;
}SqList;

/*
 *  初始化 成功返回OK 失败返回 ERROR
 */
Status Sq_List_Init (SqList* L);
/*
 *  求顺序表中制定位置元素值
 *  传入顺序表L 制定位置i 需要对i进行风险控制
 */
Status Sq_List_Allocation (SqList* L);
/*
 *  测试用 生成一个value等于index的s顺序表
 */
ElemType Sq_List_GetElem(SqList L,int i,ElemType*p);
/*
 *  按照元素值来查找第一个匹配的index
 */
Status Sq_List_LocateElem(SqList L,ElemType x,int *i);
/*
 * 插入元素算法
 */
Status Sq_List_Insert(SqList* L,ElemType x,int i);
#endif /* linear_table_h */

