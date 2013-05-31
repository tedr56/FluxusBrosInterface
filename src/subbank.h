#ifndef SUBBANK_H
#define SUBBANK_H

#include "bank.h"

class SubBank
{
public:
    SubBank(QBank parent);
public slots:
    void LoadBank();
    void UnloadBank();

private:

};

#endif // SUBBANK_H
