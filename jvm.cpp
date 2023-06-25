//
// Created by Neoxy on 2023/6/23.
//

#include <string>

#include "jvm.h"

JVM &JVM::SetLibraryPath(std::string path) {
    //TODO 直接把AddSpace加入到append里，即自己实现一个append
    args.append("-Djava.library.path=");
    args.append(path);
    AddSpace();
    return *this;
}

JVM &JVM::SetLauncherName(const std::string name) {
    args.append("-Dminecraft.launcher.brand=");
    args.append(name);
    AddSpace();
    return *this;
}

JVM &JVM::SetLauncherVersion(std::string version) {
    args.append("-Dminecraft.launcher.version=");
    args.append(version);
    AddSpace();
    return *this;
}

JVM &JVM::SetClasspath(std::string classpath) {
    args.append("-cp ");
    args.append(classpath);
    AddSpace();
    return *this;
}

JVM &JVM::SetOSName(std::string name, std::string version) {
    args.append("-Dos.name=");
    args.append(name);
    AddSpace();
    args.append("-Dos.version=");
    args.append(version);
    AddSpace();
    return *this;
}

JVM &JVM::SetHeapDumpPath() {
    args.append("-XX:HeapDumpPath=MojangTricksIntelDriversForPerformance_javaw.exe_minecraft.exe.heapdump");
    AddSpace();
    return *this;
}

JVM &JVM::SetStackSize(int size) {
    args.append("-Xss");
    args.append(std::to_string(size));
    args.append("M");
    return *this;
}

JVM &JVM::SetConfigurationFile(std::string path){

}

JVM &JVM::UseG1GC(bool enable){
    if (enable){
        args.append("-XX:+UseG1GC");
        return *this;
    }else {
        return *this;
    }
}

JVM &JVM::SetMaxMemory(int size){
    args.append("-Xmx");
    args.append(std::to_string(size));
    args.append("M");
    return *this;
}
JVM::JVM(void) {
    args = " ";
}


#ifdef __APPLE__
JVM& JVM::StartOnFirstThread(){
    args.append("-XstartOnFirstThread");
    AddSpace();
    return *this;
}
#endif

std::string JVM::GetArgs() {
    return args;
}

void JVM::AddSpace() {
    args.append(" ");
}

