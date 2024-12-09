#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator""_inch(unsigned long long x);

    class tire
    {
    public:
        double d;
        tire(double x)
        {
            d = x;
        }
        double diameter();
    };

    class vehicle
    {
    public:
        int y;
        vehicle(int x)
        {
            y = x;
        }
        int year();
    };

    double operator"" _eur(unsigned long long x);

    class product
    {
    public:
        double p;
        product(double x)
        {
            p = x;
        }
        double price();
    };

    class car : public product, public vehicle
    {
    public:
        tire t;
        car(int y, double p, double d) : vehicle(y), product(p), t(d){};
        double tire_diameter();
    };
};