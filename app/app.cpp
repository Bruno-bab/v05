#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator""_inch(unsigned long long x)
	{
		return x * 2.54;
	}

    double tire::diameter()
    {
        return d;
    }

    int vehicle::year()
    {
        return y;
    }

    double operator"" _eur(unsigned long long x)
    {
        return x * 7.5345;
    }

    double product::price()
    {
        return p;
    }

    double car::tire_diameter()
    {
        return t.diameter();
    }
}