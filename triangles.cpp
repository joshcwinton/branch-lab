#include <iostream>
#include "doctest.h"
#include "triangles.h"


using std::string;

string triangles(int height){
  string s = "";
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < height; j++) {
      s=s+"*";
    }
    s=s+"\n";
  }
  return s;
}

TEST_CASE("Testing Triangle"){
  string s = triangles(4);
  CHECK(s=="*\n**\n***\n****\n");
}
