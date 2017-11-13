#include <iostream>
#include "Emperor.h"

Emperor* Emperor::_pEmperor = NULL;
std::mutex Emperor::_mutex;

Emperor::Emperor()
{
    _tag = "";
    cout << "Start Create Emperor" << endl;
}

Emperor::Emperor(const Emperor& input)
{
    Emperor *temp = NULL;
    if (&input != this) 
    {
       temp = const_cast<Emperor *> (&input);
	_tag = temp->GetEmperorTag();
        cout << "Emperor copy  constructor tag:" << _tag << endl;
    }
}

Emperor::~Emperor()
{
    cout << "Start Destory Emperor" << endl;
    //Emperor::_mutex.lock();
    //if (NULL != Emperor::_pEmperor) {
    //   delete Emperor::_pEmperor;
    //}
    //Emperor::_pEmperor = NULL;
    //Emperor::_mutex.unlock();
}

Emperor&  Emperor::operator=(const Emperor& input)
{
    Emperor *temp = NULL;
    if (this != &input)
    {
       temp = const_cast<Emperor *> (&input);
       _tag = temp->GetEmperorTag();
       cout << "Emperor assign  constructor tag:" << _tag << endl;
    }
}

Emperor* Emperor::GetInstance()
{
    if (NULL == _pEmperor)
    {
        Emperor::_mutex.lock();
        
   	Emperor::_pEmperor = new Emperor;
        
	Emperor::_mutex.unlock();
    }
    
    return Emperor::_pEmperor;
}

void Emperor::ReleaseInstance()
{
    Emperor::_mutex.lock();
    if (NULL != Emperor::_pEmperor) {
	delete Emperor::_pEmperor;
    }
    Emperor::_pEmperor = NULL;
    Emperor::_mutex.unlock();
}

string Emperor::GetEmperorTag()
{
    return _tag;
}

void Emperor::SetEmperorTag(const string &input)
{
    _tag = input;
}

void Emperor::EmperorInfo()
{
    cout << "print Emperor tag:" << _tag << endl;
}


