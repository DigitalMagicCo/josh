#include <iostream>

#include "BuiltinHandler.hpp"
#include "REPL.hpp"

int main(int argc, char *argv[])
{
  std::cout << "Wassup World!" << std::endl;

  BuiltinHandler::getInstance()->init();

  REPL::getInstance()->startREPL();

  return 0;
}
