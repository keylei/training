#ifndef CUSTOMEXCEPTION_HPP
#define CUSTOMEXCEPTION_HPP

#include <iostream>
#include <exception>
#include <string>
#include <sstream>

using namespace std;

namespace SDK
{
    //宏函数,抛出异常信息
    //根据异常参数,抛出调用该函数的文件名,行号,函数名,及异常参数
    #define THROW_EXCEPTION(exMsg)\
    {\
        std::ostringstream message;\
        message << "File:"<<__FILE__<<"\n"\
                << "Line:"<<__LINE__<<"\n"\
                << "Func:"<<__FUNCTION__<<"\n"\
                << "Detail:"<<exMsg<<"\n""\n";\
        std::string msg = message.str();\
        throw SDK::CustomException(msg);\
    }

    #define CATCH_AND_RETHROW_EXCEPTION(appendedMsg)\
    catch (SDK::CustomException& ex )\
    {\
        std::ostringstream message;\
        message << "File:"<<__FILE__<<"\n"\
                << "Line:"<<__LINE__<<"\n"\
                << "Func:"<<__FUNCTION__<<"\n"\
                << "Detail:"<<appendedMsg<<"\n""\n"\
                << ex.what() <<"\n";\
        std::string msg = message.str();\
        throw SDK::CustomException(msg);\
    }

    #define PRINT_EXCEEPTION()\
    {\
        std::cout << ex.what() << std::endl;\
    }

    /**
     *  @brief CustomException
     *         自定义异常继承C++系统标准异常
     *         构造函数,根据参数地址将成员变量赋值
     *         将C++标准虚构函数what重定义,输出自定义异常信息
     *  @author bob
     *  @version 1.00 2017-11-20 bob
     *                note:create it
     */
    class CustomException : public std::exception
    {
    public:
        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //constructor & destructor

        //初始化成员变量
        CustomException();

        /*
        *  @brief   CustomException
        *           根据异常参数,将其转换为字符串并赋值给成员变量m_originalMsg
        *  @param   message: 记录抛出异常记录的信息
        *  @return  N/A
        */
        CustomException(std::string & message);

        ~CustomException();
        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //virtual functions

        /*
        *  @brief  what
        *          重写标准异常库中的虚构函数what,将指向成员变量的指针返回
        *  @param  N/A
        *  @return 指向成员变量的指针
        */
        virtual const char * what() const _GLIBCXX_USE_NOEXCEPT override
        {
            return m_originalMsg.data();
        }
        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


    private:
        //>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //member variants

        std::string m_originalMsg;   //成员变量,记录函数抛出的异常信息

        //<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    };
}   //End of namespace SSDK
#endif // CUSTOMEXCEPTION_HPP
