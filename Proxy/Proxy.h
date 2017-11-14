#include <iostream>
using std::cout;
using std::endl;

class ProxyBase {
    public :
        ProxyBase() {};
        virtual ~ProxyBase() {};
        virtual void ProxyOperate1(void) = 0;//{ cout << "ProxyOperate1" << endl; }
        virtual void ProxyOperate2(void) = 0;//{ cout << "ProxyOperate1" << endl; }
};

class ProxyInterface : public  ProxyBase {
    public:
        ProxyInterface(ProxyBase *p_proxy) { _p_ProxyBase = p_proxy; };
        ~ProxyInterface() {
            if(NULL != _p_ProxyBase) { delete _p_ProxyBase; }
        }

        void ProxyOperate1(){
	    if (NULL != _p_ProxyBase) { _p_ProxyBase->ProxyOperate1(); }
        }
     
        void ProxyOperate2(){
            if (NULL != _p_ProxyBase) { _p_ProxyBase->ProxyOperate2(); }
        }

    private:
        ProxyBase *_p_ProxyBase;
};

class BeProxyed_1 : public ProxyBase {
    public:
        BeProxyed_1()  { cout << "Create BeProxyed 1"<< endl; }
        ~BeProxyed_1() { cout << "Destory Beroxyed 1" << endl; }
        void ProxyOperate1 () { cout << "Beroxyed 1 ProxyOperate1" << endl;}
        void ProxyOperate2 () { cout << "Beroxyed 1 ProxyOperate2" << endl;} 
};

class BeProxyed_2 : public  ProxyBase {
    public:
        BeProxyed_2()  { cout << "Create BeProxyed 2"<< endl; }
        ~BeProxyed_2() { cout << "Destory Beroxyed 2" << endl; }
        void ProxyOperate1 () { cout << "Beroxyed 2 ProxyOperate1" << endl;}
        void ProxyOperate2 () { cout << "Beroxyed 2 ProxyOperate2" << endl;} 
};

