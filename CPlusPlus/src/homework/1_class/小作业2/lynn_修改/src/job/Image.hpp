#ifndef IMAGE_H
#define IMAGE_H

#include <cstring>

#include "../sdk/CustomException.hpp"

namespace Job
{

    /**
     *  @brief  表示一幅图像，存有图像的长、宽和所有像素的灰度值。
     *
     *  @author lynn
     *  @version 1.00 2017-12-14 lynn
     *                note:create it
     */
    class Image
    {
    public:
        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //constructor & destructor

        /**
        *  @brief   默认构造函数
        *  @param   N/A
        *  @return  N/A
        */
        Image();

        /**
        *  @brief 双参数构造函数，该构造函数将会：
        *         1.保存图像的长宽数据到成员变量
        *         2.在堆上开辟一片长×宽Byte大小的空间
        *  @param   height  :图像的高度(单位：像素)
        *           width   :图像的宽度(单元：像素)
        *  @return  N/A
        */
        Image(int height,int width);

        /**
        *  @brief   复制构造函数，此处的复制为深复制
        *           ps:运算符"="会调用该函数
        *  @param   img:图像复制源
        *  @return  N/A
        */
        explicit Image(Image& img);

        /**
        *  @brief   析构函数，释放用于存放图像每个像素点灰度值的空间
        *  @param   N/A
        *  @return  N/A
        */
        virtual ~Image();

        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //set & get function

        int& height() { return this->m_height; }
        int& width() { return this->m_width; }
        unsigned char*& pBody() { return this->m_pGrayPerPixel; }

        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    private:

        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //member function

        int m_height{0};
        int m_width{0};
        unsigned char *m_pGrayPerPixel{nullptr};   //指向图像各个像素的灰度值

        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    };

}//End of namespace Job

#endif // IMAGE_H
