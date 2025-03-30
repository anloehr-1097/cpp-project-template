# A project template for a CMake based C++ project
This repo serves as a template for a CMake based C++ project.
The project is built using CMake and the build system is Make. 
It follows a simple diretory structure depcited below:

*Note:* This is a template repository and as such, designed to be used via the 'Use this template' button on the GitHub page.

```
root
├── CMakeLists.txt
├── Makefile
├── README.md
├── build
├── compile_commands.json -> build/compile_commands.json
├── src
│   ├── CMakeLists.txt
│   ├── MyLib
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   │   └── interface.h
│   │   ├── lib_module.cpp
│   │   └── lib_module.h
│   ├── main.cpp
│   └── project-nameConfig.h.in
└── tests
    ├── CMakeLists.txt
    └── test_cust_func.cpp
```

## How To
### Clean build directory
```bash
make clean-buid
```

### Clean artifacts
```bash
make clean-artifacts
```

### Create CMake build files
```bash
make prep
```

### Build the project
```bash
make build_project
```

### Run the project
```bash
make run
```

### Run tests
```bash
make test
```

### Run Google Tests
```bash
make test_gtest
```

### Install the project
```bash
make install
```

# TODO
[ ] set env variables like build type
[ ] -DCMAKE_BUILD_TYPE=Debug or -DCMAKE_BUILD_TYPE=Release




