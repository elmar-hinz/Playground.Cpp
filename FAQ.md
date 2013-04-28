What is the difference between static and shared libraries?
===========================================================

Shared libraries are .so (or in Windows .dll, or in OS X .dylib) files. All the code relating to the library is in this file, and it is referenced by programs using it at run-time. A program using a shared library only makes reference to the code that it uses in the shared library.

Static libraries are .a (or in Windows .lib) files. All the code relating to the library is in this file, and it is directly linked into the program at compile time. A program using a static library takes copies of the code that it uses from the static library and makes it part of the program. [Windows also has .lib files which are used to reference .dll files, but they act the same way as the first one].

Source: Pete Shanahan, http://stackoverflow.com/users/17833/petesh


What is a Framework on Mac OS X?
================================

Frameworks are shared libraries, that are packaged with associated resources, such as graphics files, developer documentation, and programming interfaces like header files into one directory structure. The directory structure may contain multiple versions of the library. 


What is the difference between -dynamic, -dynamiclib, -dylib for GCC?
=====================================================================

-dynamic is a flag that both gcc and ld accept. gcc just passes it straight on to ld. It tells ld to build a dyanmically linked executable, as opposed to a statically linked one. It's turned on by default -- in fact, I don't think there's any official support for static executables on Darwin.

-dynamiclib is a gcc flag.  It tells gcc to pass -dylib to ld.


-dylib is an ld flag.  It tells ld to build a Mach-O dynamic shared library.


In other words, you should never have to use -dynamic. If you're building a dylib and using gcc to link (i.e. you're passing '-o lib<my_library>.dylib' to gcc), you'll use -dynamiclib. If you're building a dylib and using ld to link, you'll use -dylib.

Source: Eric Albert, http://lists.apple.com/archives/xcode-users/2003/Dec/msg00395.html



