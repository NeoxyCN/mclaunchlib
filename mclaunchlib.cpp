#include "mclaunchlib.h"

#include <iostream>

#include "jvm.h"
#include "utils.h"

void test() {
    JVM jvm;

    /*
    jvm.SetClasspath()
    .SetClasspath()
    .SetClasspath()
    .SetHeapDumpPath();
     */

    if (utils::FindJava() == "none") {

    } else {

    }
    std::cout << "Hello, World!" << std::endl;
}
