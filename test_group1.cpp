#include "catch.hpp"


unsigned int TestFunction1( unsigned int number ) {
    return number <= 1 ? number : TestFunction1(number-1)*number;
}

TEST_CASE( "UniqueTestCase1", "[Tag1]" ) {
    REQUIRE( TestFunction1(1) == 1 );
    REQUIRE( TestFunction1(2) == 2 );
    REQUIRE( TestFunction1(3) == 6 );
    REQUIRE( TestFunction1(10) == 3628800 );
}


TEST_CASE( "UniqueTestCase2", "[Tag1]" ) {
    REQUIRE( TestFunction1(1) == 1 );
    REQUIRE( TestFunction1(2) == 2 );
    REQUIRE( TestFunction1(3) == 6 );
    REQUIRE( TestFunction1(10) == 3628800 );
}

TEST_CASE( "UniqueTestCase3", "[Tag1]" ) {
    REQUIRE( TestFunction1(1) == 1 );
    REQUIRE( TestFunction1(2) == 2 );
    REQUIRE( TestFunction1(3) == 6 );
    REQUIRE( TestFunction1(10) == 3628800 );
}

TEST_CASE( "UniqueTestCase4", "[Tag1]" ) {
    REQUIRE( TestFunction1(1) == 1 );
    REQUIRE( TestFunction1(2) == 2 );
    REQUIRE( TestFunction1(3) == 6 );
    REQUIRE( TestFunction1(10) == 3628800 );
}

TEST_CASE( "UniqueTestCase5", "[Tag1]" ) {
    REQUIRE( TestFunction1(1) == 1 );
    REQUIRE( TestFunction1(2) == 2 );
    REQUIRE( TestFunction1(3) == 6 );
    REQUIRE( TestFunction1(10) == 3628800 );
}
