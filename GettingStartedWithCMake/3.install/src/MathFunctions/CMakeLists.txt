# Declare
add_library (MathFunctions mysqrt.cpp)

# Install
install (TARGETS MathFunctions DESTINATION lib)
install (FILES MathFunctions.h DESTINATION include)

