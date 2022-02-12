class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { }

        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.0"; }
};
