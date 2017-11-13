#include <iostream>
#include <mutex>

using std::cout;
using std::endl;
using std::string;

class Emperor {
public:
    static Emperor *GetInstance();
    static void ReleaseInstance();
    void EmperorInfo(void);
    void SetEmperorTag(const string &);
    string GetEmperorTag(void);
private:
    string _tag;
    static Emperor *_pEmperor;
    static std::mutex _mutex;

protected:
     Emperor(void);
     virtual ~Emperor(void);
     Emperor(const Emperor &);
     Emperor& operator=(const Emperor &);
};

