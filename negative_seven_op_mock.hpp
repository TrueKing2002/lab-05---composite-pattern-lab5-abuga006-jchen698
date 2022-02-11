class NegativeSevenOpMock: public Base {
    public:
        NegativeSevenOpMock() { }

        virtual double evaluate() { return -7.5; }
        virtual std::string stringify() { return "-7.5"; }
};
