#ifndef INTEGERARRA_H
#define INTEGERARRA_H


class Integerarra
{
    public:
        Integerarra(int size);
        void setData(int idx, int val);
        int getData(int idx) const;
        void print()const;
        int getSize() const;
        virtual ~Integerarra();

    protected:

    private:
        int size;
        int *data;
};

#endif // INTEGERARRA_H
