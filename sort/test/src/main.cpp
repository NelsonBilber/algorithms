#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "sortingmagic.h"

int main(int argc, char* argv[])
{
    using namespace AlgorithmsSort;

    //AlgorithmsSort::LogLevel;

    auto result = Catch::Session().run(argc, argv);

    return (result < 0xff ? result : 0xff);
}
