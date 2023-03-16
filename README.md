A simple C++ project to practice building and to understand the whole process from compiling each file separately from command line and linking, through using a build system such as `make`, to using a build system generator such as `CMake`.  This project includes an executable which dynamically loads a library built within the project, and this library loads a pre-built external dynamic library.

Note: The makefile does not build the external\_lib, because it's assumed that it should be built separately. E.g, you can build it with command line tools directly.
