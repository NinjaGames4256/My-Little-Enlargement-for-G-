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
#include <fstream>

class BuildClass{
    
public:
    
    void NewProject();
    
    void OpenProject();
    
    void SaveProject();
    
    void BuildProject();
    
private:
    
    std::string ProjectName;
    
    std::string For;
    
};

#endif /* BuildClass_hpp */
