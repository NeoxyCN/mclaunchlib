//
// Created by Neoxy on 2023/6/23.
//

#ifndef MCLAUNCHLIB_JVM_H
#define MCLAUNCHLIB_JVM_H

class JVM{
public:
    void SetLibraryPath();
    void SetLauncherName();
    void SetLauncherVersion();
    void SetClasspath();
    void SetOSName();
    void SetHeapDumpPath();
    void SetStackSize();
#ifdef __APPLE__
    void StartOnFirstThread();
#endif
};

#endif
