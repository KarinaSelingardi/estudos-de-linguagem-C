#include <iostream>



int main(){
	// braced initializers
 //variable may contain garbage value,WARNING
 int elephant_count;//initializes to zero
 
 int dog_count{10};//initializes to 10
 
 int cat_count{15};//initializes to 15
 int lion_count{};
 //can use expression as initializer
 int domesticated_animals{dog_count + cat_count};
 
 //
 //int new_number{doesnt_exist};
 
 //int narrowing_conversion{2.9};
 
 std::cout << "Elephant count : " << elephant_count << std::endl;
 std::cout << " Lion count : " << lion_count << std::endl;
 std::cout << "Dog count : " << dog_count << std::endl;
std::cout << " Cat count: " << cat_count << std::endl;
std::cout << "Domesticated animal count : " << domesticated_animals << std::endl;


return 0;

}
