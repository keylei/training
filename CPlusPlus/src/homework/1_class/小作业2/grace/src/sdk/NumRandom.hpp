#ifndef RANDOMNUM_HPP
#define RANDOMNUM_HPP


#include <cstdlib>

#include "sdk/CustomException.hpp"


namespace SSDK
{
/**
 *  @brief RandomNum
 *         随机生成数据
 *
 *  @author grace
 *  @version 1.00 2017-12-01 grace
 *                note:create it
 */
class NumRandom
{
public:
    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //constructor & destructor

    NumRandom();
    virtual ~NumRandom();

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //member function

    /**
    *  @brief  randomDouble
    *          随机生成区间(min,max)区间的浮点数
    *  @param  max:随机数的最大值
    *          min:随机数的最小值
    *  @return 随机生成的double形浮点数
    */
    static double randomDouble(double max , double min);

    /**
    *  @brief randomByte
    *         随机生成一个最大值为max,最小值为min，
    *         长度为len的一维数组
    *  @param  max:最大值 min:最小值
    *          len:外层长度
    *  @return 一维数组的头地址
    */
    static unsigned char randomByte(int max,int min);

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};
}//End of namespace SSDK


#endif // RANDOMNUM_HPP
