#include <iostream>
#include <string>

class Animal
{
protected:
	std::string sound;
	std::string spcie;
	std::string name;
	std::string type_of_food;
	std::string gender;
	std::string movement_type;
	std::string respiratory_system;
	std::string breathing_system;
	int age;
	int speed;
	int lifespan;
	int weight;
	int feet;
	int teeth;
public:
	Animal()
	{
		std::cout << __func__ << std::endl;
	}


};

class Aquatic_animals:public Animal
{
protected:
	int fins_count;
	int depth_of_living;
	int gills_count;
	std::string habitat; //type of water
public:
	Aquatic_animals()
	{
		std::cout << __func__ << std::endl;
	}
	
};
class Terrestrial_animals :public Animal
{

protected:
	int ears;
	std::string cattle_type;
	std::string thermoregulation_behavior;
public:
	Terrestrial_animals()
	{
		std::cout << __func__ << std::endl;
	}

};
class Birds :public Animal
{
protected:
	std::string feathers_type;
	int beak_length;
	int visual_distance;
	int wing_flapping_speed;
	int flight_distance; //per day
public:
	Birds()
	{
		std::cout << __func__ << std::endl;
	}
	

};
class Seahorse :public Aquatic_animals
{
	int tail_durability;
	double persentage_of_medicine_use;
	std::string colour;
public:
	Seahorse()
	{
		std::cout << __func__ << std::endl;
	}
	
};
class Shark :public Aquatic_animals
{
	int count_of_victims;
	int speed_of_tail_flapping;
public:
	Shark()
	{
		std::cout << __func__ << std::endl;
	}

};

class Cow :public Terrestrial_animals
{
	int sourse_of_meat;
	int supply_of_milk;
public:
	Cow()
	{
		std::cout << __func__ << std::endl;
	}
	
};
class Dog :public Terrestrial_animals
{
public:
	bool is_vactinated()
	{
		return true;
	}
	bool is_human_friendly()
	{
		return true;
	}
public:
	Dog()
	{
		std::cout << __func__ << std::endl;
	}
	
};

class Parrot :public Birds
{
public:
	bool can_talk()
	{
		return true;
	}
public:
	Parrot()
	{
		std::cout << __func__ << std::endl;
	}
	
};

class Pigeon :public Birds
{
	std::string colour;

public:
	Pigeon()
	{
		std::cout << __func__ << std::endl;
	}

};

int main(int argc, char** argv)
{
	std::cout << "For the first obj  constractors are called with this priority \n";
	Seahorse anm;
	std::cout << "For the second obj  constractors are called with this priority \n";
	Shark anm1;
	std::cout << "For the third obj  constractors are called with this priority \n";
	Cow anm2;
	std::cout << "For the fourth obj  constractors are called with this priority \n";
	Dog anm3;
	std::cout << "For the fifth obj  constractors are called with this priority \n";
	Parrot anm4;
	std::cout << "For the sixth obj  constractors are called with this priority \n";
	Pigeon anm5;


	return 0;
}