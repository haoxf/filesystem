//
// Created by jefding on 2019/3/10 0010.
//

#ifndef ANDROIDPHOTFIX_FS_H
#define ANDROIDPHOTFIX_FS_H

#if defined(__cplusplus) && __cplusplus >= 201703L && defined(__has_include) && __has_include(<filesystem>)
#include <filesystem>
namespace fs = std::filesystem;
#else
#include "filesystem.h"
namespace fs = ghc::filesystem;
#endif

#endif //ANDROIDPHOTFIX_FS_H
