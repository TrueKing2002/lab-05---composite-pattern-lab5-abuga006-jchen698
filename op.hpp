#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <sstream>

class Op : public Base {
    private:
	double value;
	std::ostringstream strs;
    public:
        Op(double val) : Base() { value = val; }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { strs << value; return strs.str(); }
};

#endif //__OP_HPP__
