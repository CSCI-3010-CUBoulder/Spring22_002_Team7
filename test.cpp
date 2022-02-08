#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Sign is correct", "[Sign]"){
    REQUIRE(Sign(0.0)==1.0);
    REQUIRE(Sign(-1.0)==-1.0);
}