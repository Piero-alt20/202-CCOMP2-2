#ifndef MYSTRING_H
#define MYSTRING_H


class MyString
{
    public:
        MyString(char *data, int size);
        virtual ~MyString();

    protected:

    private:
        int size;
        int *data;
};

#endif // MYSTRING_H
