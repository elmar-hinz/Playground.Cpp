FILE(REMOVE_RECURSE
  "CMakeFiles/helloWorld.dir/src/helloWorld.c.o"
  "helloWorld.pdb"
  "helloWorld"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/helloWorld.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
