#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    private:
	double val;
	std::ostringstream strs;
    public:
        Op(double value) : Base() { val = value; }
        virtual double evaluate() { return val; }
        virtual std::string stringify() { strs << val; return strs.str(); }
};

#endif //__OP_HPP__
