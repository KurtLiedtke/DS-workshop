#include <string>
#include <iostream>
#include <list>

int main(int argc, char *argv[]) {
    std::list<int> list;
    for(int i = 1; i<argc; i++) {
        list.push_back(std::stoi(argv[i]));
    }
    for(std::list<int>::reverse_iterator itr = list.rbegin(); itr != list.rend(); ++itr) {
        std::cout<< (*itr) * (*itr) << std::endl;
    }
    return 0;
}
