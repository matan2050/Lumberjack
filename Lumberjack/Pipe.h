#ifndef _PIPE_H_
#define _PIPE_H_

#include "logger.h"
#include <string>
#include <vector>

namespace Lumberjack
{
  class Pipe
  {
  public:
    virtual void Write(std::vector<std::string>) = 0;
  };
}


#endif
