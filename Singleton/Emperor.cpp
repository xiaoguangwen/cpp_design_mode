#include "Emperor.h"
#include <iostream>
#include <mutex>
#include <stdlib.h>
#include <stdio.h>

using std::cout;
using std::endl;
using std::string;

CEmperor* CEmperor::m_pEmperor = NULL;
std::mutex CEmperor::m_pMutex;
CEmperor::CGarbo CEmperor::m_Garbo;

CEmperor::CEmperor(void)
{
    cout << "Create CEmperor Instance" << endl;
}

CEmperor::~CEmperor(void)
{
    cout << "Destroy CEmperor Instance and release its resource" << endl;
}

void CEmperor::EmperorInfo(void)
{
    //char msgBuffer[50] = { 0 };
    //snprintf(msgBuffer, 50, "皇ê帝?某3某3某3... ...(%s).", m_EmperorTag.c_str());
    //string msg(msgBuffer);
    //cout << msg.c_str() << endl;
    cout << "CEmperor tag:" << m_EmperorTag << endl;
}

CEmperor* CEmperor::GetInstance()
{
    if (NULL == m_pEmperor)
    {
        m_pMutex.lock();
        if (NULL == m_pEmperor)
            m_pEmperor = new CEmperor();
        m_pMutex.unlock();
    }
    return m_pEmperor;
}
void CEmperor::ReleaseInstance()
{
    if (NULL != m_pEmperor)
    {
        m_pMutex.lock();
        if (NULL != m_pEmperor)
        {
            delete m_pEmperor;
            m_pEmperor = NULL;
        }
        m_pMutex.unlock();
    }
}
void CEmperor::SetEmperorTag( string tag )
{
    m_EmperorTag = tag;
}


