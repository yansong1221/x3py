#include <module/plugininc.h>
#include "plsimple.h"

DSimple::DSimple()
{
}

DSimple::~DSimple()
{
}

int DSimple::add(int a, int b) const
{
    return a + b;
}

int DSimple::subtract(int a, int b) const
{
    return a - b;
}

int DSimple::add(const std::vector<int>& nums) const
{
    int ret = 0;

    for (std::vector<int>::const_iterator it = nums.begin();
        it != nums.end(); ++it)
    {
        ret += *it;
    }

    return ret;
}

x3::AnyObject DSimple::createSimple()
{
    return x3::Object<ISimple>(clsidSimple);
}