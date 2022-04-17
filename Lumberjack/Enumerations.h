#pragma once
#ifndef _ENUMERATIONS_H_
#define _ENUMERATIONS_H_

#include <string_view>
#include <array>

enum class Level
{
  Trace,
  Debug,
  Info,
  Warning,
  Error,
  Fatal
};

static constexpr std::array<std::string_view, 6> LevelTranslator = { "Trace", "Debug", "Info", "Warning", "Error", "Fatal" };

enum class PipeType
{
  File,
  Console
  // TBD - FTP
};


#endif