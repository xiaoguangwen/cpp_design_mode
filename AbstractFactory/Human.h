#ifndef _HUMAN_H_
#define _HUMAN_H_

#include <iostream>
using std::cout;
using std::endl;

class Human {
    public:
        Human() {};
        virtual ~Human() {};
        virtual void dining(void) = 0;
        virtual void bathing(void) = 0;
};

class EastHuman : public Human {
    public:
        EastHuman() { cout << "Create EastHuman" << endl; }
        ~EastHuman() { cout << "Destory EastHuman" << endl; }
        void dining () { cout << "EastHuman eat with chopsticks" << endl; }
        void bathing () { cout << "EastHuman Bathing at night" << endl; }
        virtual void nationality() = 0;
};

class WestHuman : public Human {
    public:
        WestHuman() { cout << "Create WestHuman" << endl; }
        ~WestHuman() { cout << "Destory WestHuman" << endl; }
        void dining () { cout << "WestHuman eat with fork" << endl; }
        void bathing () { cout << "WestHuman Bathing in the morning" << endl; }
        virtual void nationality() = 0;
};

class ChineseEastHuman : public EastHuman {
    public:
	void nationality(void) { cout << "I am Chinese" <<endl; }
};

class JapaneseEastHuman : public EastHuman {
    public:
        void nationality(void) { cout << "I am Janpanese" <<endl; }
};

class AmericanWestHuman : public WestHuman {
    public:
        void nationality(void) { cout << "I am American" <<endl; }
};

class EnglishmanWestHuman : public WestHuman {
    public:
        void nationality(void) { cout << "I am Englishman" <<endl; }
};

#endif
