//
//  main.cpp
//  Enlargemant for GCC
//
//  Created by Emil Panecki on 14/11/2019.
//  Copyright © 2019 Emil Panecki. All rights reserved.
//

#include <iostream>

#include <cstdlib>
#include <iostream>
#include <curses.h>

#include "BuildClass.hpp"

std::string nameoffiletocompile;

std::string pathtofile;

std::string nameofdotapp;

std::string type;

std::string pathtoinclude; // This will by used soon

std::string pathtolibs; // This too

BuildClass BC;

int main(){

    std::cout << " Przedłużenie G++ " << std::endl; // Information what is it ( my enlargement for G++ )

    system("clear");

    std::cout << "Wybierz szablon ( Choose template ) " << std::endl; // Request for name of file e.g main.cpp

    std::cin >> type;

    if(type == "Custom"){
        
        system("clear");
        std::cout << "Podaj ścieżkę dostępu do include " << std::endl; // Request for name of file e.g main.cpp
        std::cin >> pathtoinclude;
        
    }
    
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

    std::string x = "cd ~/Desktop/ && mkdir TermIDE && cd TermIDE";
    std::string z = "cd ~/Desktop/TermIDE/ && mkdir " + nameofdotapp + " && cd " + nameofdotapp;
    
    system(x.c_str());
    system(z.c_str());
    
    BC.Build(nameoffiletocompile, pathtofile, nameofdotapp, type, pathtoinclude, pathtolibs);

    return 0;

}
