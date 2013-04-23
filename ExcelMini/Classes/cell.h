#ifndef CELL_H
#define CELL_H

#include <QString>

class CELL
{
public:
    CELL(QString);

    virtual float evaluate();

private:
    QString expression;

    float value;
};

#endif // CELL_H
