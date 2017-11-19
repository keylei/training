#ifndef DATAGENERATION_H
#define DATAGENERATION_H

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//定义全局变量
//rime  数据规模不应该在这里定义
#define ARR_MAX_LEN  5000          //定义图片数据数组的最大长度为5000
#define ARR_MIN_LEN  2048          //定义图片数据数组的最小长度为2048
#define HEIGHT_MAX   500000        //定义图片数据的高度最大值为500000(单位:0.01um) //rime +1 这里把单位加上了, 别人还是能够理解的
#define PRECISION    0.01          //计算生成高度数据的精度(单位:um,精确到小数点后两位)

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//定义随机生成数据的宏函数
// 定义宏函数,随机获取数组的大小 (数组长度在2048 - 5000范围内)
#define RANDOM_ARR_LENGTH  (rand() % (ARR_MAX_LEN-ARR_MIN_LEN) + ARR_MIN_LEN)

// 定义宏函数,随机获取高度数据 (高度的范围在在0.00 - 5000.00范围内,单位:um)
#define RANDOM_HEIGHT_DATA ((float)( rand() % HEIGHT_MAX  * PRECISION ))

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 生成随机高度,范围(0.00-5000.00)
/*
*  @brief  根据数组的个数随机获取每个数组长度,   //rime 注释没有对齐
*          再生成高度数据(高度范围: 0.00-5000.00)赋值给不同长度的数组
*  @param  arrayLenArr: 要生成高度数据数组的长度
*          arrayCnt:    需要生成长度的数组的数量  //rime 同一个地方, 不要一会arr, 一会array的
*          pHeightDataArr: 生成高度数据数组的头指针
*  @return N/A
*/
void generateHeightData(int arrayLenArr[],int arrayCnt,float ** pHeightDataArr);//rime 如果不是数组的话, 就不要以arr结尾了

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#endif // DATAGENERATION_H