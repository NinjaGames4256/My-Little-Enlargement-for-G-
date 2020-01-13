#include "function.h"

void Function::Build( std::string ProjectNameString ){

    cout << "BuildButton" << endl;

    std::string For;
    fstream file;

    string PATH = home + "/Desktop/TermIDE/" + ProjectNameString + "/project.info";

    file.open( PATH, ios::in | ios::out | ios::binary );
    if(!file.is_open()){
        std::cout << "Error" << std::endl;
    } else{

        std::getline(file, For, ';');

    }

    if(For == "default"){
        std::string x = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "/' && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "/' && g++ *.o -o" + ProjectNameString;

        system(x.c_str());
        system(y.c_str());

        cout << "default" << endl;

    }

    else if(For == "sfml"){
        std::string x = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ *.o -o" + ProjectNameString + " -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network";

        system(x.c_str());
        system(y.c_str());

        cout << "sfml" << endl;

    }

    else if(For == "opencv"){
        std::string x = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ *.o -o" + ProjectNameString + " `pkg-config --cflags --libs opencv`";

        system(x.c_str());
        system(y.c_str());

        cout << "opencv" << endl;

    }

    else if(For == "boost"){
        std::string x = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ *.o -o" + ProjectNameString + " -lboost_system -lboost_date_time -lboost_thread";

        system(x.c_str());
        system(y.c_str());

        cout << "boost" << endl;

    } else{

        std::string x = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ -c *.cpp -I/usr/local/include";
        std::string y = "cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && g++ *.o -o" + ProjectNameString + For;

        system(x.c_str());
        system(y.c_str());

    }

}

void Function::Run( std::string ProjectNameString ){
    system(string("cd " + home + "'/Desktop/TermIDE/" + ProjectNameString + "' && ./" + ProjectNameString).c_str());
}

void Function::CreateNewProject(int choose, string ProjectNameString, string OptionalFlag){

        std::cout << choose << std::endl;

        std::string ComandLineZero = "cd " + home + "/Desktop/TermIDE && mkdir '" + ProjectNameString + "'";

        system("cd ~/Desktop/ && mkdir TermIDE");
        system(ComandLineZero.c_str());

        system(string( "cd '/" + home + "/Desktop/TermIDE/" + ProjectNameString + "/' && touch files.info && echo 'main.cpp' >> files.info").c_str());

        if(choose == 0){
            std::string ComandLineOne = "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch main.cpp && echo '#include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
            system(ComandLineOne.c_str());

            system(string( "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch project.info && echo 'default;' >> project.info " ).c_str());

        }

        else if(choose == 1){
            std::string ComandLineTwo = "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch main.cpp && echo '#include <SFML/Graphics.hpp> \n #include <SFML/Network.hpp> \n #include <SFML/Audio.hpp> \n #include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
            system(ComandLineTwo.c_str());

            system(string( "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch project.info && echo 'sfml;' >> project.info " ).c_str());

        }

        else if(choose == 2){
            std::string ComandLineThree = "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch main.cpp && echo '#include <opencv2/opencv.hpp> \n #include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
            system(ComandLineThree.c_str());

            system(string( "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch project.info && echo 'opencv;' >> project.info " ).c_str());

        }

        else if(choose == 3){
            std::string ComandLineFour = "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch main.cpp && echo '#include <boost/multiprecision/cpp_int.hpp> \n #include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
            system(ComandLineFour.c_str());

            system(string( "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch project.info && echo 'boost;' >> project.info " ).c_str());

        }

        else if(choose == 4){
            std::string ComandLineFour = "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch main.cpp && echo '#include <iostream> \n \n using namespace std; \n \n int main(){ \n \n return 0; \n }' >> main.cpp ";
            system(ComandLineFour.c_str());

            choose = 4;

            system(string( "cd " + home + "/Desktop/TermIDE/ && cd '" + ProjectNameString + "' && touch project.info && echo '" + OptionalFlag + ";' >> project.info " ).c_str());
        }

}

string Function::OpenFile(string ProjectNameString, string name){

    std::string content;
    fstream file;

    string PATH = home + "/Desktop/TermIDE/" + ProjectNameString + "/" +name;

    cout << PATH << endl;

    string code;

    file.open( PATH, ios::in | ios::out | ios::binary );
    if(!file.is_open()){
        std::cout << "Error" << std::endl;
    } else{
        while( getline( file, content ) ){
            code += content + "\n";
        }
    }

    return code;

}

void Function::SaveFile(string ProjectNameString, string name, string content){

    fstream file;

    string PATH = home + "/Desktop/TermIDE/" + ProjectNameString + "/" + name;

    file.open( PATH, ios::in | ios::out | ios::binary );
    if(!file.is_open()){
        std::cout << "Error" << std::endl;
    } else{

        file << content;

    }

}

void Function::Install(){

    #ifdef __APPLE__
        system("sudo brew install sfml && sudo brew install opencv brew install boost && sudo brew install opencv && sudo brew install g++ && sudo brew install gcc");
    #else
        system("sudo apt-get install sfml && sudo apt-get install boost && sudo apt-get install opencv && sudo apt-get install g++ && sudo apt-get install gcc");
    #endif

}

void Function::SaveNewItems(string name, string ProjectNameString){

    std::string For;
    fstream file;

    string PATH = home + "/Desktop/TermIDE/" + ProjectNameString + "/files.info";

    cout << PATH << endl;

    file.open( PATH, ios::in | ios::out | ios::binary );
    if(!file.is_open()){
        std::cout << "Error" << std::endl;
    } else{

        std::getline(file, For);

        file.clear();

        cout << For << endl;

        file << name + "\n";

    }

    file.clear();

}

string Function::ReturnHome(){
    return home;
}
