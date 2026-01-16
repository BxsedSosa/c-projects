add_executable(test_app test_app.cpp)
target_link_libraries(test_app PRIVATE myproj)
add_test(NAME test_app COMMAND test_app)
