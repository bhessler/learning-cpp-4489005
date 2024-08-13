// Learning C++ 
// Challenge 01_03
// Console Interaction 

#include <iostream>
#include <string>

/*int main(){
    //created string
    std::string str;
    //string assigned by using cin and having cin point to the target string
    std::cin >> str;
    std::cout << str;
    //print result
    std::cout << std::endl << std::endl;
    return (0);
}*/

//challenge assignment
int main(){
    std::string user;
    //instead of endl below use flush
    //flush makes sure that the output is completely sent to the terminal before waiting for user input
    std::cout << "what is your username?" << std::endl;
    std::cin >> user;
    std::cout << "Hello " << user << std::endl;
    return (0);
}
