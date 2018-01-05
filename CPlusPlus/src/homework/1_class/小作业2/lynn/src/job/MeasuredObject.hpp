#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <iostream>

#include "../sdk/Shape.hpp"

#include "sdk/CustomException.hpp"
#include "sdk/Rectangle.hpp"
#include "sdk/Circle.hpp"

namespace Job
{

/**
 *  @brief 表示一个检测目标
 *
 *  @author lynn
 *  @version 1.00 2017-12-18 lynn
 *                note:create it
 */
class MeasuredObject
{
public:

    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //constructor and destructor

    /**
    *  @brief   默认构造函数
    *  @param   N/A
    *  @return  默认析构函数
    */
    MeasuredObject();

    /**
    *  @brief   将传入的形状设置为元件的形状
    *  @param   pShape:指向要设置的形状
    *  @return  N/A
    */
    explicit MeasuredObject(SSDK::IShape* pShape);

    /*
    *  @brief   析构函数
    *  @param   N/A
    *  @return  N/A
    */
    virtual ~MeasuredObject();

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //set & get function

    std::string& name() {return this->m_name;}

    SSDK::IShape*& pBody() {return this->m_pBody;}

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //member function

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

protected:

    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //member variant

    std::string m_name;             //检测目标的名字
    SSDK::IShape *m_pBody{nullptr}; //指向检测目标实体

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

};

}//End of namespace Job

#endif // OBJECT_HPP
