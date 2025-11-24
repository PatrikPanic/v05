#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
        double operator"" _inch(unsigned long long v);
        double operator"" _eur(unsigned long long v);

        class tire {
            double d;
        public:
            explicit tire(double diameter);
            double diameter() const;
        };

        class vehicle {
            int y;
        public:
            explicit vehicle(int year);
            int year() const;
        };

        class product {
            double p;
        public:
            explicit product(double price);
            double price() const;
        };

        class car : public vehicle, public product
        {
            tire t;
        public:
            car(int year, double price, double tire_diam);

            double tire_diameter() const;
        };
}