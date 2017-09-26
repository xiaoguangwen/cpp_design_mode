#include <mutex>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;

class CEmperor
{
public:
    static CEmperor * GetInstance();
    static void ReleaseInstance();
    void EmperorInfo(void);
    void SetEmperorTag(string tag);
private:
    CEmperor(void);
    virtual ~CEmperor(void);
    CEmperor(const CEmperor&);
    CEmperor& operator=(const CEmperor&);
    static CEmperor *m_pEmperor;
    static std::mutex  m_pMutex;
    string m_EmperorTag;
    class CGarbo
    {
    public:
        CGarbo()
        {
            cout << "Create Garbo" << endl;
        }
        ~CGarbo()
        {
            cout << "Destroy Garbo" << endl;
            if (NULL != m_pEmperor)
            {
                m_pMutex.lock();
                if (NULL != m_pEmperor)
                {
                    cout << "Remove instance" << endl;
                    delete m_pEmperor;
                    m_pEmperor = NULL;
                }
                m_pMutex.unlock();
            }
        }
    };
    static CGarbo m_Garbo;
};
