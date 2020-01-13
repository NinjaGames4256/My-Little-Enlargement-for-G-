#ifndef COMPILATION_H
#define COMPILATION_H

#include <iostream>
#include <fstream>

class CompilationClass {

public:

    void Receive();

    void Compilation();

private:

    std::string File[20];

    std::fstream AllUsingFiles;

};

#endif // COMPILATION_H
