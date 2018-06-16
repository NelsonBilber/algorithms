#ifndef SORT_HPP
#define SORT_HPP

// MS compatible compilers support #pragma once
#if defined(_MSC_VER)
#pragma once
#endif

#include <spdlog/fmt/ostr.h>
#include <spdlog/spdlog.h>
#include <string>
#include <vector>

using namespace std;

namespace AlgorithmsSort {

enum class LogLevel {
  info = spdlog::level::level_enum::info,
  trace = spdlog::level::level_enum::trace,
  debug = spdlog::level::level_enum::debug,
  error = spdlog::level::level_enum::err
};

class SortingMagic{
public:
    SortingMagic() = default;
    vector<int> QuickSort(vector<int>& Set, int First, int Last);

private:
    int Pivot(vector<int>& Set, int First, int Last);
    void Swap(int& ElemA, int& ElemB);

};

}  // namespace Log

#endif  // LOG_HPP
