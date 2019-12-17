//
//  main.cpp
//  Enlargemant for GCC
//
//  Created by Emil Panecki on 14/11/2019.
//  Copyright © 2019 Emil Panecki. All rights reserved.
//

#include <iostream>

#include "BuildClass.hpp"

BuildClass BC;

std::string WhatToDo;

int main(){
    
    for(;;){
        
        std::cout << "You want to CREATE or OPEN project?" << std::endl;
    
        while(WhatToDo.empty()){
            std::getline( std::cin, WhatToDo );
        }
    
        if( WhatToDo == "CREATE" ){
            BC.NewProject();
            WhatToDo.clear();
        }
        else if( WhatToDo == "OPEN" ){
            BC.OpenProject();
            WhatToDo.clear();
        }
        else if( WhatToDo == "END" ){
            std::cout << "You right now shutdown thsi program" << std::endl;
            return 0;
        } else {
            std::cout << " I don't recognise this command! " << std::endl;
        }
    
        system("clear");
    
        for(;;){
        
            std::cout << "Now you are in the project" << std::endl;
        
            while (WhatToDo.empty()) {
            std::getline( std::cin, WhatToDo );
            }
        
            if(WhatToDo == "BUILD"){
                BC.BuildProject();
                WhatToDo.clear();
                system("clear");
            }
        
            else if( WhatToDo == "CLOSE" ){
                std::cout << "Close the project" << std::endl;
                WhatToDo.clear();
                system("clear");
                break;
            }
        
        }
        
    }
    
    return 0;

}
