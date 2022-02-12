#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>

class Pow : public Base {
    private:
	Base* left;
	Base* right;
    public:
        Pow(Base* l, Base* r) : Base() { left = l; right = r; }
        virtual double evaluate() { return pow(left->evaluate(), right->evaluate()); }
        virtual std::string stringify() { return '(' + left->stringify() + "**" + right->stringify() + ')'; }
};

#endif //__POW_HPP__
