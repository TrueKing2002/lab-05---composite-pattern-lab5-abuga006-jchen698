#include "base.hpp"

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};
