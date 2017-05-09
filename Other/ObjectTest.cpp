#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "MemoryAllocation/Object.h"

//MATO = 'Memory Alocation Test Object'

TEST_CASE( "MATO, destroying object then trying to use it!", "[Normal]" ) {

    Object* object = new Object();

    object->setNumber(5);
    REQUIRE( object->getNumber() == 5 );

    delete object;
    REQUIRE_THROWS( object->getNumber() ); // Failed

    new (object) Object();
    REQUIRE_NOTHROW( object->getNumber() );
    REQUIRE( object->getNumber() == 0 );
}

/*
TEST_CASE( "MATO, destroying object then replacing it", "[Normal_1]" ) {

    Object* object = new Object();

    object->setNumber(5);
    REQUIRE( object->getNumber() == 5 );

    delete object;
    REQUIRE_FALSE( object->getNumber() >= 0 ); // Failed
    REQUIRE_THROWS( object->getNumber() ); // Failed

    new (object) Object();
    REQUIRE_NOTHROW( object->getNumber() );
    REQUIRE( object->getNumber() == 0 );
}

TEST_CASE( "MATO, deleting object then replacing it", "[Normal_2]" ) {

    Object* object = new Object();

    object->setNumber(5);
    REQUIRE( object->getNumber() == 5 );

    delete object;
    REQUIRE_FALSE( object->getNumber() >= 0 ); // Failed
    REQUIRE_THROWS( object->getNumber() ); // Failed

    new (object) Object();
    REQUIRE_NOTHROW( object->getNumber() );
    REQUIRE( object->getNumber() == 0 );
}

TEST_CASE( "MATO, Allocation with malloc, not using free", "[Manually_1]" ) {

    void* temp = malloc(sizeof(Object));
    Object* object = new(temp) Object();

    object->setNumber(10);
    REQUIRE( object->getNumber() == 10 );

    object->~Object();
    operator delete(static_cast<void *>(object));

//    REQUIRE_FALSE( object->getNumber() >= 0 ); // Failed
    REQUIRE_THROWS( object->getNumber() ); // Failed
}

TEST_CASE( "MATO, Allocation with malloc, using free", "[Manually_2]" ) {

    void* temp = malloc(sizeof(Object));
    Object* object = new(temp) Object();

    object->setNumber(10);
    REQUIRE( object->getNumber() == 10 );

    try {
        object->~Object();
        operator delete(static_cast<void *>(object));
        free(temp);

        REQUIRE( object == NULL );
    } catch (...) {
        std::cout << "... catch block." << std::endl;
    }
}
*/
