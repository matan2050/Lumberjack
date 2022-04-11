#pragma once
#include "Formatter.h"

#include <vector>
#include <string>
#include <thread>
#include <mutex>

namespace Lumberjack
{
  class Logger
  {
  public:
    void LogFatal(std::string msg);
    void LogError(std::string msg);
    void LogWarning(std::string msg);
    void LogInfo(std::string msg);
    void LogDebug(std::string msg);
    void LogTrace(std::string msg);
  private:
    std::vector<std::string> messageQueue;
    std::mutex messageQueueMutex;

    std::unique_ptr<Formatter> formatter = nullptr;
  };
}