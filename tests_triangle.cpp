#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "triangles.h"

TEST_CASE("Testing Triangle"){
  std::string s = triangles(4);
  CHECK(s=="*\n**\n***\n****\n");
}
