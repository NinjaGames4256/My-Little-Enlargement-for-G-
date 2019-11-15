//
//  BuildClass.hpp
//  Enlargemant for GCC
//
//  Created by Emil Panecki on 14/11/2019.
//  Copyright © 2019 Emil Panecki. All rights reserved.
//

#ifndef BuildClass_hpp
#define BuildClass_hpp

#include <stdio.h>
#include <iostream>

class BuildClass{
    
public:
    
    void Build( std::string nameoffiletocompile, std::string pathtofile, std::string nameofdotapp, std::string type, std::string pathtoinclude, std::string pathtolibs );
    
private:
    
    
    
};

#endif /* BuildClass_hpp */
