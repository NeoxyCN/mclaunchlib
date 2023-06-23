//
// Created by Neoxy on 2023/6/23.
//

#ifndef MCLAUNCHLIB_JVM_H
#define MCLAUNCHLIB_JVM_H

#include <string>

class JVM {
public:
    std::string args;

    JVM &SetLibraryPath(std::string path);

    JVM &SetLauncherName(std::string name);

    JVM &SetLauncherVersion(std::string version);

    JVM &SetClasspath(std::string classpath);

    JVM &SetOSName(std::string name, std::string version);

    JVM &SetHeapDumpPath();

    JVM &SetStackSize(int size);

    std::string GetArgs();

private:
    void AddSpace();

#ifdef __APPLE__
    JVM& StartOnFirstThread();
#endif

    JVM();
};

#endif
