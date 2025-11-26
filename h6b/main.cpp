#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass esmerk;
    esmerk.startToWait();

    //return a.exec();
    //a.quit();
    // Rivit kommentoitu, että sovellus pyörii vain kerran.
}
