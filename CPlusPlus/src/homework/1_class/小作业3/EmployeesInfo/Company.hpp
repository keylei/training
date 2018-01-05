#ifndef  COMPANY_HPP
#define COMPANY_HPP

#include <list>

#include "Department.hpp"

/**
 *  @brief comment
 *
 *  @author author
 *  @version 1.00 2017-12-20 author
 *                note:create it
*/
class Company
{
public:
    //>>>-----------------------------------------------------------------------------------------------------------------
    //constructor & destructor

    Company();
    virtual ~Company();

    //<<<-----------------------------------------------------------------------------------------------------------------

    //>>>-----------------------------------------------------------------------------------------------------------------
    //get & set functions

    //<<<-----------------------------------------------------------------------------------------------------------------

private:

    //>>>-----------------------------------------------------------------------------------------------------------------
    //member variant
    std::list<Department> m_departmentList;

    //<<<-----------------------------------------------------------------------------------------------------------------
};
#endif // COMPANY_HPP
