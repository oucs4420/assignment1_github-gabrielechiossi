#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 0; arg < argc; ++arg){
        //std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
        string line;
        if (arg == 0){
            cout << "program: " << argv[arg] << endl;
        }else{
            int c = 0;
            ifstream in(argv[arg]);
            if(!in){
                cout << " " <<argv[arg] << ": -1" << endl;
            }else{
                while(getline(in, line)){
                    //getline(in, line);
                    c++;
                }
                in.close();
                cout << " " <<argv[arg] << ": " << c << endl;
            }
            
        }
        
    }
            

    exit(0); // this means that the program executed correctly!
}
