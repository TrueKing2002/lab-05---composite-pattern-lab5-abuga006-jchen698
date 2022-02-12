#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base {
    private:
	Base* left;
	Base* right;
    public:
        Add(Base* l, Base* r) : Base() { left = l; right = r; }
        virtual double evaluate() { return left->evaluate() + right->evaluate(); }
        virtual std::string stringify() { return '(' + left->stringify() + '+' + right->stringify() + ')'; }
};

#endif //__ADD_HPP__
