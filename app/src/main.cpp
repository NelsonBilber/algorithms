/*
 *  Distributed under the MIT License (See accompanying file /LICENSE )
 */
//#include "calc.h"
#include "logger.h"

//@todo
// pass log to a generic lib or util libs
// Also add test folder to main app

int main(int argc, char *argv[]) {
  using namespace ModernCppCI;
  Logger::level(LogLevel::info);

  Logger log{__func__};

  log.info("Sorting Algorithms");

  return 0;
}
