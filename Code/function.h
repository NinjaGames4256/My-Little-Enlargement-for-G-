#ifndef FUNCTION_H
#define FUNCTION_H

//C++ includes
#include <fstream>
#include <iostream>

using namespace std;

class Function
{

public:

    void Build( std::string ProjectNameString );

    void Run( std::string ProjectNameString );

    void CreateNewProject( int choose, string ProjectNameString, string OptionalFlag = "default" );

    string OpenFile( string ProjectNameString, string name );

    void SaveFile( string ProjectNameString, string name, string content );

    void Install();

    void ColloringText();

    void SaveNewItems( string name, string ProjectNameString );

    string ReturnHome();

private:

    std::string home{ getenv("HOME") };

};

#endif // FUNCTION_H
