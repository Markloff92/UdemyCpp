#include <iostream>

//Namespace für bessere zugehörigkeit


namespace ad // Man kann alles hier auslagern als namespace ad
{            // Muss aber dann alle namen mit 'ad:: ' (SCOPE) versehen siehe MAIN()
constexpr int DEFAULT_VEHICLE_ID = -1;
constexpr int NUM_VEHICLES = 3;

enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

int min(int array[]);

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Velocity [kph]: " << vehicle.velocity << std::endl;

    switch (vehicle.lane)
    {
    case Lane::CENTER_LANE: //SCOPE alles was '::'
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
} // namespace ad


int main()
{
    ad::Vehicle v1 = {1, 100.0f, ad::Lane::CENTER_LANE};
    ad::Vehicle v2 = {2, 90.0f, ad::Lane::RIGHT_LANE};
    ad::Vehicle v3 = {3, 130.0f, ad::Lane::LEFT_LANE};

    ad::Vehicle vehicles_in_scene[ad::NUM_VEHICLES] = {v1, v2, v3};


    for (int i = 0; i < ad::NUM_VEHICLES; i++)
    {
        ad::print_vehicle_data(vehicles_in_scene[i]);
    }

    return 0;
}
