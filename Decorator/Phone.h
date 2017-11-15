#ifndef _PHONE_H_ 
#define _PHONE_H_

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Phone {
    public:
        Phone() {}
        virtual ~Phone() {}
        virtual void ShowDecorate() = 0;
};

class NokiaPhone : public Phone {
    public:
	NokiaPhone(const string name) : m_name(name) {}
        ~NokiaPhone(){}
        void ShowDecorate() { cout << "Nokiaphone_num " << m_name << " Decorate:" << endl; }
    
    private:
        string m_name;
};

class IPhone : public Phone {
    public:
    	IPhone(const string name) : m_name(name) {}
        ~IPhone() {};
       void ShowDecorate() { cout << "IPhone_num " << m_name << " Decorate:" << endl; }

    private:
	string m_name;
};

class DecoratePhone : public Phone {
    public:
	DecoratePhone(Phone *p_phone) : m_phone(p_phone) { }
        virtual void ShowDecorate() { m_phone->ShowDecorate();}
    
    private:
	Phone *m_phone;
};

class A_DecoratePhone : public DecoratePhone {
    public:
        A_DecoratePhone(Phone *p_phone) : DecoratePhone(p_phone) {}
        void ShowDecorate() { DecoratePhone::ShowDecorate(); AddDecorate(); }
    
    private:
        void AddDecorate() { cout << "\t\t add pendant" << endl; }
};

class B_DecoratePhone : public DecoratePhone {
    public:
        B_DecoratePhone(Phone *p_phone) : DecoratePhone(p_phone) {}
        void ShowDecorate() { DecoratePhone::ShowDecorate(); AddDecorate(); }	
    
   private:
       void AddDecorate () { cout << "\t\t add pad-pasting" << endl; }
};


#endif
