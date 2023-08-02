#include <iostream>

int main() {
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    double narrowing_conversion_assignment = 2.9; // Corrigido para double, pois 2.9 é um número de ponto flutuante.

    std::cout << "Bike_count: " << bike_count << std::endl;
    std::cout << "Truck_count: " << truck_count << std::endl;
    std::cout << "Vehicle_count: " << vehicle_count << std::endl;
    std::cout << "Narrowing_conversion: " << narrowing_conversion_assignment << std::endl;

// check the size with sizeof

std::cout <<"sizeof int : " << sizeof(int) << std::endl;
std :: cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;
std :: cout << "sizeof narrowing_conversion_assignment: " << sizeof(narrowing_conversion_assignment)<< std::endl;
    return 0;
}

