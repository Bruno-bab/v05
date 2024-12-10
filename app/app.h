#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator""_inch(unsigned long long x);

    class tire
    {
    private:
        double d;
    public:
        tire(double x) : d(x) {}
        double diameter();
    };

    class vehicle
    {
    private:
        int y;
    public:
        vehicle(int x) : y(x) {}
        int year();
    };

    double operator"" _eur(unsigned long long x);

    class product
    {
    private:
        double p;
    public:
        product(double x) : p(x) {}
        double price();
    };

    class car : public product, public vehicle
    {
    private:
        tire t;
    public:
        car(int y, double p, double d) : vehicle(y), product(p), t(d){}
        double tire_diameter();
    };
};