#include <iostream>
#include <stdlib.h>
#include <string>
#include<algorithm>
#include "Direction.hpp"
#include "Notebook.hpp"
#include "doctest.h"
using namespace ariel;
using namespace std;


//  void write(int page, int row, int column, Direction dir, string wr);
//     string read(int page, int row, int column, Direction dir, int num_of_chars);
//     void erase(int page, int row, int column, Direction dir, int num_of_chars);
//     void show(int page);



TEST_CASE("Good input") {
    Notebook note;
    note.write(0,0,0,Direction::Vertical,"hello");
	CHECK(note.read(0,0,0,Direction::Vertical, 5) == "hello");
    note.erase(0,0,0,Direction::Vertical, 5);
    CHECK(note.read(0,0,0,Direction::Vertical, 5) == "~~~~~");
    note.write(0,1,0,Direction::Vertical,"hello world");
	CHECK(note.read(0,1,0,Direction::Vertical, 11) == "hello world");
    note.erase(1,0,0,Direction::Vertical, 5);
	CHECK(note.read(0,1,0,Direction::Vertical, 11) == "hello world");
    note.write(0,2,0,Direction::Vertical,"hi!");
	CHECK(note.read(0,2,0,Direction::Vertical, 3) == "hi!");
    note.erase(0,2,0,Direction::Vertical, 3);
	CHECK(note.read(0,2,0,Direction::Vertical, 3) == "~~~");

}






TEST_CASE("Bad input") {
    Notebook note;
	CHECK_THROWS(note.write(-1,0,0,Direction::Vertical, "hello world"));
    CHECK_THROWS(note.write(1,-1,1,Direction::Vertical, "hello world"));
    CHECK_THROWS(note.write(0,1,-1,Direction::Vertical, "hello world"));
    CHECK_THROWS(note.read(0,1,-1,Direction::Vertical, 11));

}