#ifndef _FORMATTER_H_
#define _FORMATTER_H_

#include <string>
#include <sstream>
#include <vector>
#include <functional>
#include <chrono>

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

    std::string FormatMessage(const std::string& msg)
    {
      std::stringstream ss;
      for (auto agent : formattingAgents)
      {
        ss << agent() << " ";
      }
      ss << '\n';
      return ss.str();
    }

    Formatter()
    {
      // load agents from configuration file?
    }

  private:
    using agent = std::function<std::string(void)>;
    std::vector<agent> formattingAgents;
  };

  class Timestamp
  {
    std::string operator () () const
    {
      auto now = std::chrono::system_clock::now();
    }
  };

}


#endif
