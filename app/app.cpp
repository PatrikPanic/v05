#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
        double operator"" _inch(unsigned long long v)
        {
            return v * 2.54;
        }

        double operator"" _eur(unsigned long long v)
        {
            return v * 7.5345;
        }

        tire::tire(double diameter) : d(diameter) {}

        double tire::diameter() const
        {
            return d;
        }


        vehicle::vehicle(int year) : y(year) {}

        int vehicle::year() const
        {
            return y;
        }

       
        product::product(double price) : p(price) {}

        double product::price() const
        {
            return p;
        }

        
        car::car(int year, double price, double tire_diam)
            : vehicle(year), product(price), t(tire_diam)
        {
        }

        double car::tire_diameter() const
        {
            return t.diameter();
        }
    }