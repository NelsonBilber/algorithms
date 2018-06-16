#include "sortingmagic.h"
#include <catch.hpp>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

namespace AlgorithmsSort {

namespace Test {

TEST_CASE("sort an array using QuickSort +", "[Sorting]")
{
    auto SortMagic = SortingMagic();

    vector<int> testUnordered = { 7, -13, 1};
    vector<int> testOrdered = { -13, 1, 7};

    testUnordered = SortMagic.QuickSort(testUnordered, 0, (testOrdered.size()-1));

    for(auto i = testUnordered.begin(); i != testUnordered.end(); ++i )
    {
        cout << *i  << " " ;
    }

    cout << endl;

    REQUIRE( testUnordered == testOrdered );

}


}  // namespace Test

}  // namespace AlgorithmSort
