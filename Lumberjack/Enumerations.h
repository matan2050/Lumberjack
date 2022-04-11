#pragma once
#ifndef _ENUMERATIONS_H_
#define _ENUMERATIONS_H_

enum class Level
{
  Trace,
  Debug,
  Info,
  Warning,
  Error,
  Fatal
};

enum class PipeType
{
  File,
  Console
  // TBD - FTP
};


#endif