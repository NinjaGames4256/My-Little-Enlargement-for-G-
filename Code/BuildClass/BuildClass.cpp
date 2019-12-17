//
//  BuildClass.cpp
//  Enlargemant for GCC
//
//  Created by Emil Panecki on 14/11/2019.
//  Copyright © 2019 Emil Panecki. All rights reserved.
//

#include "BuildClass.hpp"

void BuildClass::NewProject(){
    
    std::cout << "Please, type project name" << std::endl;
    
    while (ProjectName.empty()) {
        std::getline( std::cin, ProjectName );
    }
    
    std::cout << "Please, choose type of your project" << std::endl;
    
    while(For.empty()){
        std::getline( std::cin, For );
    }
    
    std::string ComandLineOne = "cd ~/Desktop/TermIDE && mkdir " + ProjectName;
    
    system("cd ~/Desktop/ && mkdir TermIDE");
    system(ComandLineOne.c_str());
    
    if(For == "Deafult"){
        std::string ComandLineTwo = "cd ~/Desktop/TermIDE/" + ProjectName + " && touch main.cpp && echo '#include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
        system(ComandLineTwo.c_str());
    }
    
    else if(For == "SFML"){
        std::string ComandLineTwo = "cd ~/Desktop/TermIDE/" + ProjectName + " && touch main.cpp && echo '#include <SFML/Graphics.hpp> \n #include <SFML/Network.hpp> \n #include <SFML/Audio.hpp> \n #include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
        system(ComandLineTwo.c_str());
    }
    
    else if(For == "OpenCV"){
        std::string ComandLineTwo = "cd ~/Desktop/TermIDE/" + ProjectName + " && touch main.cpp && echo '#include <opencv2/opencv.hpp> \n #include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
        system(ComandLineTwo.c_str());
    }
    
    else if(For == "Boost"){
        std::string ComandLineTwo = "cd ~/Desktop/TermIDE/" + ProjectName + " && touch main.cpp && echo '#include <boost/multiprecision/cpp_int.hpp> \n #include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
        system(ComandLineTwo.c_str());
    }
    
}

void BuildClass::OpenProject(){
    
    for(;;){
        while (ProjectName.empty()) {
            std::getline( std::cin, ProjectName );
        }
    
        std::string ComandLineOne = "cd ~/Desktop/TermIDE/" + ProjectName;
    
        if(ProjectName.empty() != true){
            if(system(ComandLineOne.c_str()) != true){
                std::cout << "I can't find this project, maybey this project not exist" << std::endl;
            } break;
        }
    }
    
}

void BuildClass::SaveProject(){
    
}

void BuildClass::BuildProject(){
    
    if(For == "Deafult"){
        std::string x = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ *.o -o" + ProjectName;
    
        system(x.c_str());
        system(y.c_str());
    }
    
    else if(For == "SFML"){
        std::string x = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ *.o -o" + ProjectName + " -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network";
    
        system(x.c_str());
        system(y.c_str());
    }
    
    else if(For == "OpenCV"){
        std::string x = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ *.o -o" + ProjectName + " `pkg-config --cflags --libs opencv`";
    
        system(x.c_str());
        system(y.c_str());
    }
    
    else if(For == "Boost"){
        std::string x = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd ~/Desktop/TermIDE/" + ProjectName + " && g++ *.o -o" + ProjectName + " -lboost_system -lboost_date_time -lboost_thread";
    
        system(x.c_str());
        system(y.c_str());
    }
    
}
