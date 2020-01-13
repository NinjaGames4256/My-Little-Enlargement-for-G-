#include "compilation.h"
#include <QLineEdit>

void CompilationClass::Compilation(){

    lineEdit

    AllUsingFiles.open( "UsingFiles.txt", std::fstream::in | std::fstream::out | std::fstream::app );
    if(AllUsingFiles.is_open()){
    for(int x = 0; x > 20; x++ ){
        AllUsingFiles >> File[x];

        std::string string1 = "cd ~/Desktop && mkdir `TermIDE`";
        std::string string2 = "cd ~/Desktop/TermIDE/ && mkdir " + AppName + " && g++ -c " + File[x] + ".cpp -I/usr/local/include";
        std::string string3 = "cd ~/Desktop/TermIDE/ && g++ " + File[x] + ".o -o -I/usr/local/include";

        system(string1.c_str());
        system(string2.c_str());
        system(string3.c_str());

        }

    } else {
        std::cout << " Error opening file " << std::endl;
    }

}
