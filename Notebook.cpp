#include <iostream>
#include <stdlib.h>
#include <string>
#include "Direction.hpp"
#include "Notebook.hpp"


using namespace std;
namespace ariel{

    // Notebook note;
    void Notebook::write(unsigned int page,unsigned int row,unsigned int column, Direction dir, string const &wr){
    }
    string Notebook::read(unsigned int page,unsigned int row,unsigned int column, Direction dir,unsigned int num_of_chars){
        return "";
    }
    void Notebook::erase(unsigned int page,unsigned int row,unsigned int column, Direction dir,unsigned int num_of_chars){
    }
    void Notebook::show(unsigned int page){
    }
}