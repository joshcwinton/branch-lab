#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "triangles.h"
using namespace std;

TEST_CASE("Testing Triangle"){
  string s = triangles(4);
  CHECK(s=="*\n**\n***\n****\n");
}
