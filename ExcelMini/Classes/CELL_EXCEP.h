#ifndef CELL_EXCEP_H
#define CELL_EXCEP_H

//Para lanzar excepciones relacionadas a las celdas y las expresiones

#include <QString>

namespace exceptions {
enum error {
    BAD_EXPRESS = 0
};

class cell_excep;
}

using namespace exceptions;

class cell_excep {
public:
    cell_excep::cell_excep(error);

    QString show_descr();

private:
    QString descrp;
};

#endif // CELL_EXCEP_H
