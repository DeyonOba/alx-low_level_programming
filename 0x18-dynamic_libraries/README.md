# C - Dynamic Libraries

First we need to understand the compilation stages in C programming Language.

1. **Preprocessing:**
In this stage, the preprocessor handles directives that start with the character "#", such as '# include' for header files, and '# define' for macros. Then this directives are expanded in the source code file.

2. **Compilation:**
The preprocessed code is then passed to a complier (e.g like **gcc**), which translates the code into assembly language or an intermediate representation. The output of this stage is usually a set of object file (i.e ".o" extension in UNIX system, or ".lib" in Windows).

3. **Assembly**:
The assembler (often 'as') takes the output of the compilation stage and translate it into machine code or an object file specific to the target architecture.

4. **Linking**:
The linker (such as 'ld') combines the object files generated by the complier along with any necessary system libraries to produce an executable binary.. It also resolves symbols (memory address) and addresses references between different parts of rhe program.

```
Source Code File (.c file) -> Preprocessing -> Compilation -> Assembly -> Linking -> Executable File
```
## Why Dynamic Libraries are so cool
A dynamic library, also known as a shared library, is a type of library that is loaded at runtime by an executable rather than being statically linked to an executable at compile time. This means that for static libraries an executable is added during compilation, while for dynamic it is added during executable runtime (i.e when the executable file is ran). This allows multiple programs to share a single copy of the library in memory, reducing the overall size of the programs and facilitating updates to the library without recompling every program that uses it.
