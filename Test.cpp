

/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <stdexcept>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    //_===_
    //(.,.)
    //( : )
    //( : )
    CHECK(nospaces(snowman(11114411)) =="_===_\n(.,.)\n( : )\n( : )");

    //_===_
    //(O.O)
    //( : )
    //(   )
     CHECK(nospaces(snowman(12334414)) =="_===_\n(O.O)\n( : )\n(   )");
    // ___ 
    //.....
    //(.,.)
    //( : )
    //(   )

     CHECK(nospaces(snowman(21114414)) == " ___\n.....\n(.,.)\n( : )\n(   )");
    //    _
    //   /_\
    //  (- -)
    // /(> <)\
    //  (___)
     CHECK(nospaces(snowman(34443333)) =="   _\n  /_\\\n (- -)\n/(> <)\\\n (___)");
    //    _
    //   /_\
    //  (- -)/
    // <(> <)
    //  (___)
     CHECK(nospaces(snowman(34441233)) == "   _\n  /_\\\n (- -)/\n<(> <)\n (___)");
    // ___ 
    //.....
    //(.,.)/
    //(] [)
    //( : )
    CHECK(nospaces(snowman(21114221)) == " ___\n.....\n(.,.)/\n(] [)\n( : )");
    // ___ 
    //(_*_)
    //(.,.)
    //(] [)
    //( : )
    CHECK(nospaces(snowman(41114421)) == " ___\n(_*_)\n(.,.)\n(] [)\n( : )");
    //  ___ 
    // (_*_)
    //\(o,o)/
    // (] [)
    // (" ")
    CHECK(nospaces(snowman(41222222)) == "  ___\n (_*_)\n\\(o,o)/\n (] [)\n (" ")");
    //_===_
    //(-.O)
    //( : )
    //(   )
     CHECK(nospaces(snowman(12434414)) == "_===_\n(-.O)\n( : )\n(   )");
    //_===_
    //(O.O)
    //( : )
    //(" ")
     CHECK(nospaces(snowman(12334412)) == "_===_\n(O.O)\n( : )\n(" ")");
    
    //_===_
    //(...)
    //( : )
    //(" ")
     CHECK(nospaces(snowman(12114412)) == "_===_\n(...)\n( : )\n(" ")");
    //  ___ 
    // (_*_)
    //\(o,o)/
    // (] [)
    // (   )
    CHECK(nospaces(snowman(41222224)) == "  ___\n (_*_)\n\\(o,o)/\n (] [)\n (   )");
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));//less then 8 numbers
    CHECK_THROWS(snowman(87876767));//all num above 4 
    CHECK_THROWS(snowman(1234321234));//more then 8 numbers
    CHECK_THROWS(snowman(89889));
    CHECK_THROWS(snowman(89));
    CHECK_THROWS(snowman(8));
    CHECK_THROWS(snowman(11234598));//with num above 4
    CHECK_THROWS(snowman(123123));
}
