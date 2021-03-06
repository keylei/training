#ifndef CAPTURESETTING_HPP
#define CAPTURESETTING_HPP

#include <QSettings>
#include <QFile>

#include "../sdk/customexception.hpp"
#include "../sdk/formatconvertion.hpp"

namespace App
{
    //图像的位数,目前支持8位和16位
    enum class ImgBit
    {
        BIT8,
        BIT16
    };

    /**
     *  @brief  CaptureSetting
     *          相机参数配置文件的设置:
     *          具体参数如:相机宽方向,高方向的像素数,相机图像的位数等
     *  @author bob
     *  @version 1.00 2017-11-21 bob
     *                note:create it
     */
    class CaptureSetting
    {
    public:
        //>>>----------------------------------------------------------------------------------------------------------------------------
        //constructor & deconstructor
        //初始化成员变量
        CaptureSetting();

        ~CaptureSetting();
        //>>>----------------------------------------------------------------------------------------------------------------------------

        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //读写目录下的文件
        /*
        *  @brief  readCaptureSetting
        *          读取指定目录下的文件,判断文件目录是否存在,如果不存在则抛出异常
        *          如果文件数据不正确,则抛出异常
        *  @param  path:读取文件的路径,如(../config/CaptureSetting.ini)
        *  @return  N/A
        */
        void readCaptureSetting(const QString& path);

        /*
        *  @brief  writeCaptureSetting
        *          将根据数据格式将数据写入指定目录下的文件
        *  @param  path:写入数据文件的路径,如(../config/CaptureSetting.ini)
        *  @return  N/A
        */
        void writeCaptureSetting(const QString& path);

        int imgWidth() {return this->m_imgWidth;}

        int imgHeight() {return this->m_imgHeight;}

        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    private:
        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //定义图片的宽度,高度及图像的位数(相机为12M相机,图像位数分别为8位和16位)
        int m_imgWidth;
        int m_imgHeight;
        ImgBit m_imgBit;
        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    };
} //End of namespace App

#endif // CAPTURESETTING_HPP
