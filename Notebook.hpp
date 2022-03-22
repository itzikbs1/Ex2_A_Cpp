#include <iostream>
#include <stdlib.h>
#include <string>
#include "Direction.hpp"

using namespace std;
namespace ariel{

class Notebook{

    // Notebook();
    public:
    void write(unsigned int page,unsigned int row,unsigned int column, Direction dir, string const &wr);
    string static read(unsigned int page,unsigned int row,unsigned int column, Direction dir,unsigned int num_of_chars);
    void erase(unsigned int page,unsigned int row,unsigned int column, Direction dir,unsigned int num_of_chars);
    void show(unsigned int page);
};
}