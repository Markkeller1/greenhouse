# greenhouse

step 1. 
git clone https://github.com/kdhansen/greenhouse-sim.git --recurse-submodules

step 2.

add the headers folder to the libs folder

step 3. 

add mini-project.cpp to src 

step 4.

add this these to youre cmake list:

add_executable(mini-project src/mini-project.cpp)
add_dependencies(mini-project sfml-graphics ImGui-SFML)
target_include_directories(mini-project PUBLIC libs/SFML/include libs/imgui libs/imgui-sfml libs/headers)
target_link_libraries(mini-project sfml-graphics ImGui-SFML)

step 5.

cmake build
