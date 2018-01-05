#ifndef SHAPE_HPP
#define SHAPE_HPP


#include "Point.hpp"


namespace SSDK
{
enum class ShapeType //形状类型
{
    RECTANGLE, //矩形
    CIRCLE     //圆形
};

/**
 *  @brief Shape
 *         包含所有需要的几何形状类型
 *
 *  @author grace
 *  @version 1.00 2017-12-18 grace
 *                note:create it
 */
class Shape
{
public:
    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //constructor & destrucotr

    Shape();
    virtual ~Shape();

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //member function

    /**
     * @brief calcArea 纯虚函数，计算面积
     * @return 面积
     */
    virtual double calcArea() const = 0;

    /**
     * @brief contains 判断外面的形状是否包含参数里的形状
     * @param pShape 被包含的形状
     * @return 有两种返回状态
     *         true:包含
     *         false:不包含
     */
    virtual bool contains(Shape *pShape) const = 0;

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //get & set function

    ShapeType shapeType() const {return m_shapeType;}

    Point pt() const {return m_pt;}
    void setPt(const Point &pt) {m_pt = pt;}

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


protected:
    //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //member variant

    Point m_pt;  //形状中心点
    ShapeType m_shapeType; //形状类型

    //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};
}


#endif // SHAPE_HPP
