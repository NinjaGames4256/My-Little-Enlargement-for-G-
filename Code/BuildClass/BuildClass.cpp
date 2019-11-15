//
//  BuildClass.cpp
//  Enlargemant for GCC
//
//  Created by Emil Panecki on 14/11/2019.
//  Copyright © 2019 Emil Panecki. All rights reserved.
//

#include "BuildClass.hpp"

void BuildClass::Build( std::string nameoffiletocompile, std::string pathtofile, std::string nameofdotapp, std::string type, std::string pathtoinclude, std::string pathtolibs ){
    
    if(type == "SFML"){
        std::string x = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ -c " + pathtofile + nameoffiletocompile + ".cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ " + nameoffiletocompile + ".o -o" + nameofdotapp + " -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio";

        system(x.c_str()); // Build filename.o
        system(y.c_str()); // Create file .app with your name

    }

    if(type == "OpenCV"){
        std::string x = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ -c " + pathtofile + nameoffiletocompile + ".cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ " + nameoffiletocompile + ".o -o" + nameofdotapp + " `pkg-config --cflags --libs opencv`";

        system(x.c_str()); // Build filename.o
        system(y.c_str()); // Create file .app with your name

    }

    if(type == "Default"){
        std::string x = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ -c " + pathtofile + nameoffiletocompile + ".cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ " + nameoffiletocompile + ".o -o" + nameofdotapp;

        system(x.c_str()); // Build filename.o
        system(y.c_str()); // Create file .app with your name

    }
    
    if(type == "Boost"){
        std::string x = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ -c " + pathtofile + nameoffiletocompile + ".cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ " + nameoffiletocompile + ".o -o" + nameofdotapp + " -lboost_system -lboost_filesystem";

        system(x.c_str()); // Build filename.o
        system(y.c_str()); // Create file .app with your name

    }
    
    if(type == "Custom"){
        std::string x = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ -c " + pathtofile + nameoffiletocompile + ".cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + nameofdotapp + " && g++ " + nameoffiletocompile + ".o -o" + nameofdotapp + " -lboost_system -lboost_filesystem";

        system(x.c_str()); // Build filename.o
        system(y.c_str()); // Create file .app with your name

    }
    
}
