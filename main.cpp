#include <cstdlib> 
#include <iostream>
#include <curses.h>

std::string nameoffiletocompile;

std::string pathtofile;

std::string nameofdotapp;

//std::string pathtoinclude; This will by used soon

//std::string pathtolibs; This too

int main(){

    std::cout << " Przedłuenie G++ " << std::endl; // Information what is it ( my enlargement for GCC )

    system("clear");

    std::cout << "Podaj nazwę pliku .cpp ( without .cpp, minus, plus, floor, e.t.c ) " << std::endl; // Request for name of file e.g main.cpp

    std::cin >> nameoffiletocompile;

    system("clear");

    std::cout << "Podaj ścieżkę do pliku ( /././ ) " << std::endl; // Request for path to file e.g main.cpp

    std::cin >> pathtofile;

    system("clear");

    std::cout << "Nazwę aplikacji .app ( file.app ) " << std::endl; // Request for name of file.app with you want create

    std::cin >> nameofdotapp;

    system("clear");

    std::string x = "g++ -c " + pathtofile + nameoffiletocompile + ".cpp -I/usr/local/include";
    std::string y = "g++ " + nameoffiletocompile + ".o -o" + nameofdotapp;

    system(x.c_str()); // Build filename.o 
    system(y.c_str()); // Create file .app with your name

    return 0;

}