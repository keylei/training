#ifndef SETTING_HPP
#define SETTING_HPP

#include "appsetting.hpp"
#include "capturesetting.hpp"

namespace App
{
    /**
     *  @brief Config
     *         读取软件启动时的配置文件:
     *         例如:"appsetting"和"capturesetting"等配置文件
     *  @author bob
     *  @version 1.00 2017-12-06 bob
     *                note:create it
     */
    class Config
    {
    public:
        //>>>----------------------------------------------------------------------------------------------------------------------------
        //constructor & deconstructor
        Config();

        ~Config();
        //>>>----------------------------------------------------------------------------------------------------------------------------

        //>>>----------------------------------------------------------------------------------------------------------------------------
        // get & set functions
        //设置 & 获取软件应用程序的参数(例如,主题,语言等)
        void setAppSetting(App::AppSetting appsetting)
        {
            this->m_appSetting = appsetting;
        }
        App::AppSetting appSetting(){return this->m_appSetting;}

        //设置 & 获取相机配置文件参数
        void setCaptureSetting(App::CaptureSetting captureSetting)
        {
            this->m_captureSetting = captureSetting;
        }
        App::CaptureSetting captureSetting(){return this->m_captureSetting;}
        //>>>----------------------------------------------------------------------------------------------------------------------------

        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //成员函数
        //读取配置文件数据
        /*
        *  @brief  读取所有的配置文件,(如"AppSetting.ini","CaptureSetting.ini"等)
        *  @param  N/A
        *  @return N/A
        */
        void readConfigFiles();
        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    private:
        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //成员变量
        App::AppSetting m_appSetting;             //实例化一个AppSetting类的对象
        App::CaptureSetting m_captureSetting;     //实例化一个CaptureSetting类的对象
        //存放配置文件路径的文件
        QString m_appConfig{"../config/AppConfig"};
        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    };
}  //End of namespace App

#endif // SETTING_HPP
