#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    private:
	Base* left;
	Base* right;
    public:
        Div(Base* l, Base* r) : Base() { left = l; right = r; }
        virtual double evaluate() { return left->evaluate() / right->evaluate(); }
        virtual std::string stringify() { return '(' + left->stringify() + '/' + right->stringify() + ')'; }
};

#endif //__DIV_HPP__
