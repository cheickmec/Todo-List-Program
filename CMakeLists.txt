project(todo)

add_executable(todo main.cpp Prog.cpp Prog.h c_Arglist.cpp c_Arglist.h c_command.cpp c_command.h)

add_executable(test_todo prog_test.cpp Prog.cpp Prog.h c_Arglist.cpp c_Arglist.h c_command.cpp c_command.h)

enable_testing()

add_test(myTest COMMAND test_todo)
