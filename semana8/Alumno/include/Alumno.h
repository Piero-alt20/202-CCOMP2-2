#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
    public:
        Alumno();
        Alumno(char* _nombre, int _edad);
        ~Alumno();


    private:
        int edad;
        char* nombre;
};

#endif // ALUMNO_H
