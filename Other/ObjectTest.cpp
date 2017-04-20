#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "MemoryAllocation/Object.h"

//MAT = 'Memory Alocation Test'

TEST_CASE( "MAT, destroying object then replacing it", "[Normal]" ) {

    SomeObject* object = new SomeObject();

    object->setNumber(5);
    REQUIRE( object->getNumber() == 5 );

    object->~SomeObject();
    REQUIRE_FALSE( object->getNumber() >= 0 ); // Failed
    REQUIRE_THROWS( object->getNumber() ); // Failed

    new (object) SomeObject();
    REQUIRE_NOTHROW( object->getNumber() );
    REQUIRE( object->getNumber() == 0 );
}

TEST_CASE( "MAT, deleting object then replacing it", "[Normal]" ) {

    SomeObject* object = new SomeObject();

    object->setNumber(5);
    REQUIRE( object->getNumber() == 5 );

    delete object;
    REQUIRE_FALSE( object->getNumber() >= 0 ); // Failed
    REQUIRE_THROWS( object->getNumber() ); // Failed

    new (object) SomeObject();
    REQUIRE_NOTHROW( object->getNumber() );
    REQUIRE( object->getNumber() == 0 );
}

TEST_CASE( "MAT, Allocation with malloc, not using free", "[Manually_1]" ) {

    void* temp = malloc(sizeof(SomeObject));
    SomeObject* object = new(temp) SomeObject();

    object->setNumber(10);
    REQUIRE( object->getNumber() == 10 );

    object->~SomeObject();
    operator delete(static_cast<void *>(object));

//    REQUIRE_FALSE( object->getNumber() >= 0 ); // Failed
    REQUIRE_THROWS( object->getNumber() ); // Failed
}

TEST_CASE( "MAT, Allocation with operator new, not using free", "[Manually_1]" ) {

    void *temp = operator new(sizeof(SomeObject));
    SomeObject* object = new(temp) SomeObject();

    object->setNumber(10);
    REQUIRE( object->getNumber() == 10 );

    object->~SomeObject();
    operator delete(static_cast<void *>(object));

    REQUIRE_FALSE( object->getNumber() >= 0 );
    REQUIRE_THROWS( object->getNumber() );
}

TEST_CASE( "MAT, Allocation with malloc, using free", "[Manually_2]" ) {

    void* temp = malloc(sizeof(SomeObject));
    SomeObject* object = new(temp) SomeObject();

    object->setNumber(10);
    REQUIRE( object->getNumber() == 10 );

    try {
        object->~SomeObject();
        operator delete(static_cast<void *>(object));
        free(temp);

        REQUIRE( object == NULL );
    } catch (...) {
        std::cout << "... catch block." << std::endl;
    }
}

TEST_CASE( "MAT, Allocation with operator new, using free", "[Manually_2]" ) {

    void *temp = operator new(sizeof(SomeObject));
    SomeObject* object = new(temp) SomeObject();

    object->setNumber(10);
    REQUIRE( object->getNumber() == 10 );

    object->~SomeObject();
    operator delete(static_cast<void *>(object));
    free(temp);

    REQUIRE_FALSE( object->getNumber() >= 0 );
    REQUIRE_THROWS( object->getNumber() );
}
