#ifndef _FORMATTER_H_
#define _FORMATTER_H_

#include <string>
#include <sstream>
#include <vector>
#include <functional>

namespace Lumberjack
{
  class Formatter
  {
  public:
    // available formatting blocks
    //
    // timestamp - dd:mm:yyyy & hh:mm:ss:ms
    // 
    // class will be extended when necessary

    std::string FormatMessage(std::string msg)
    {
      std::stringstream ss;
      for (auto agent : formattingAgents)
      {
        ss << agent() << " ";
      }
    }

    Formatter()
    {

    }

  private:
    using agent = std::function<std::string(void)>;
    std::vector<agent> formattingAgents;
  };
}


#endif
