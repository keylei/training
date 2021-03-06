#ifndef TRANSLATOR_HPP
#define TRANSLATOR_HPP

#include <vector>
#include <iostream>

#include <QTranslator>
#include <QQmlEngine>

#include "Text.hpp"

class Translator: public QTranslator
{
    //>>>--------------------------------------------------------------------------------------------------------------------
    //Q_OBJECT

    Q_OBJECT

    Q_ENUMS(LangType)
    Q_PROPERTY(LangType langType READ langType WRITE setLangType
               NOTIFY langTypeChanged)

    //<<<--------------------------------------------------------------------------------------------------------------------

public:

    //>>>--------------------------------------------------------------------------------------------------------------------
    //enum & struct

    enum class LangType
    {
        EN,
        CN,
    };

    //<<<--------------------------------------------------------------------------------------------------------------------

    //>>>--------------------------------------------------------------------------------------------------------------------
    //constructor & destructor

    Translator(QObject *parent = 0);

    //<<<--------------------------------------------------------------------------------------------------------------------

    //>>>--------------------------------------------------------------------------------------------------------------------
    //get & set function

     LangType langType() const ;
     void setLangType(LangType langType);

     QQmlEngine *pEngine() const;
     void setPEngine(QQmlEngine *pEngine);

    //<<<--------------------------------------------------------------------------------------------------------------------

    //>>>--------------------------------------------------------------------------------------------------------------------
    //static functions

    static Translator* instance();

    //<<<--------------------------------------------------------------------------------------------------------------------


    //>>>--------------------------------------------------------------------------------------------------------------------
    //signal & slot

signals:
    void langTypeChanged();

public   slots:
    void chageLangType( LangType langType );

    //<<<--------------------------------------------------------------------------------------------------------------------

    //>>>--------------------------------------------------------------------------------------------------------------------
    //member variant

private:
    LangType m_langType{ LangType::EN };
    //这里必须和LangType的严格一一对应
    std::vector<QString> m_qmFilePaths { "./tr_en.qm", "./tr_cn.qm" };
    QQmlEngine* m_pEngine {nullptr} ;

    //<<<--------------------------------------------------------------------------------------------------------------------
};

#endif // TRANSLATOR_HPP
