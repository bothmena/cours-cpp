#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "MemoryAllocation/OverloadedObject.h"

//MATOO = 'Memory Alocation Test OverloadedObject'

TEST_CASE( "MATOO, destroying object then replacing it", "[Normal_1]" ) {

    OverloadedObject* overloadedObject = new OverloadedObject;

    overloadedObject->setNumber(5);
    REQUIRE( overloadedObject->getNumber() == 5 );

    overloadedObject->~OverloadedObject();
    REQUIRE_FALSE( overloadedObject->getNumber() >= 0 ); // Failed
    REQUIRE_THROWS( overloadedObject->getNumber() ); // Failed

    /*new (overloadedObject) OverloadedObject();
    REQUIRE_NOTHROW( overloadedObject->getNumber() );
    REQUIRE( overloadedObject->getNumber() == 0 );*/
}
