#include <iostream>

// Enum wenn endliche Anzahl von Attributen

enum class Lane //Enums in CAPS, da es ja Konstanten sind
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane; //Enumtyp Lane hier verwenden, da int unnötig wäre.
};

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Velocity [kph]: " << vehicle.velocity << std::endl;

    switch (vehicle.lane)
    {
    case Lane::CENTER_LANE:
    {
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    }
    case Lane::RIGHT_LANE:
    {
        std::cout << "Vehicle Lane Association: RIGHT_LANE" << std::endl;
        break;
    }
    case Lane::LEFT_LANE:
    {
        std::cout << "Vehicle Lane Association: LEFT_LANE" << std::endl;
        break;
    }
    default:
    {
        break;
    }
    }
}

void print_vehicle_data_pointer(
    Vehicle *vehicle) // hier wird ein pointer einer structur übergeben. siehe funktions eingabe muss eine adresse sein!
{                     // daraus folgt das hier anstatt dem '.' Operator der Pfeil '->' genutzt werden muss
    std::cout << "Vehicle ID: " << vehicle->id << std::endl;
    std::cout << "Vehicle Velocity [kph]: " << vehicle->velocity << std::endl;

    switch (vehicle->lane)
    {
    case Lane::CENTER_LANE:
    {
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    }
    case Lane::RIGHT_LANE:
    {
        std::cout << "Vehicle Lane Association: RIGHT_LANE" << std::endl;
        break;
    }
    case Lane::LEFT_LANE:
    {
        std::cout << "Vehicle Lane Association: LEFT_LANE" << std::endl;
        break;
    }
    default:
    {
        break;
    }
    }
}

int main()
{
    Vehicle v1 = {.id = 1,
                  .velocity = 100.0f,
                  .lane = Lane::CENTER_LANE}; //zuweisung geht ab c++20,  .id = 1; -> umstellen in makefile datei
    print_vehicle_data(v1);

    print_vehicle_data_pointer(
        &v1); //wenn die Function einen Pointer übergibt, muss hier die Adresse eingegeben werden mit '&' !

    return 0;
}
