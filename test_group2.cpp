#include "catch.hpp"


unsigned int TestFunction2( unsigned int number ) {
    return number <= 1 ? number : TestFunction2(number-1)*number;
}

TEST_CASE( "UniqueTestCase6", "[Tag2]" ) {
    REQUIRE( TestFunction2(1) == 1 );
    REQUIRE( TestFunction2(2) == 2 );
    REQUIRE( TestFunction2(3) == 6 );
    REQUIRE( TestFunction2(10) == 3628800 );
}



TEST_CASE( "UniqueTestCase7", "[Tag2]" ) {
    REQUIRE( TestFunction2(1) == 1 );
    REQUIRE( TestFunction2(2) == 2 );
    REQUIRE( TestFunction2(3) == 6 );
    REQUIRE( TestFunction2(10) == 3628800 );
}

TEST_CASE( "UniqueTestCase8", "[Tag2]" ) {
    REQUIRE( TestFunction2(1) == 2 );
    REQUIRE( TestFunction2(2) == 2 );
    REQUIRE( TestFunction2(3) == 6 );
    REQUIRE( TestFunction2(10) == 3628800 );
}

TEST_CASE( "UniqueTestCase9", "[Tag2]" ) {
    REQUIRE( TestFunction2(1) == 1 );
    REQUIRE( TestFunction2(2) == 2 );
    REQUIRE( TestFunction2(3) == 6 );
    REQUIRE( TestFunction2(10) == 3628800 );
}

TEST_CASE( "UniqueTestCase10", "[Tag2]" ) {
    REQUIRE( TestFunction2(1) == 1 );
    REQUIRE( TestFunction2(2) == 2 );
    REQUIRE( TestFunction2(3) == 6 );
    REQUIRE( TestFunction2(10) == 3628800 );
}

