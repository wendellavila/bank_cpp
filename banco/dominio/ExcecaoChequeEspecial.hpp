#include <iostream>
#include <string>

#ifndef EXCECAOCHEQUEESPECIAL_H
#define EXCECAOCHEQUEESPECIAL_H

class ExcecaoChequeEspecial : public std::exception {
    public:
        ExcecaoChequeEspecial(const char* msg_, double deficit_) : msg(msg_), deficit(deficit_){}
        const char* what(){ return msg.c_str(); }
        double getDeficit(){ return deficit; };
    private:
        std::string msg;
        double deficit;
};

#endif // EXCECAOCHEQUEESPECIAL_H
