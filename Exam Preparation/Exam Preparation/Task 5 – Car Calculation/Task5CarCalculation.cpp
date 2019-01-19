#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <vector>
#include <functional>
#include <list>
#include <map>
#include <cctype>
#include <algorithm>
#include <sstream>

class GasStation
{
private:
	std::string fuel;
	double pricePerLiter;

public:
	GasStation()
	{
	};

	GasStation(std::string fuel, double pricePerLiter)
	{
		SetFuel(fuel);
		SetPricePerLiter(pricePerLiter);
	};

	~GasStation()
	{
	};

	std::string GetFuel()
	{
		return fuel;
	}

	double GetPricePerLiter()
	{
		return pricePerLiter;
	}

	void SetFuel(std::string fuel)
	{
		this->fuel = fuel;
	}

	void SetPricePerLiter(double pricePerLiter)
	{
		this->pricePerLiter = pricePerLiter;
	}

	void Print()
	{
		std::cout << "Fuel on gas station -> " << fuel << std::endl;
		std::cout << "Price per liter -> " << pricePerLiter << std::endl;
	}
};

class Car
{
private:
	std::string make;
	std::string model;
	std::string fuelType;
	double fuelConsumption;
	GasStation gasStation;

public:
	Car()
	{
	};

	Car(std::string make, std::string model, std::string fuelType, double fuelConsumption, GasStation gasStation)
	{
		SetMake(make);
		SetModel(model);
		SetFuelType(fuelType);
		SetFuelConsumption(fuelConsumption);
		SetGasStation(gasStation);
	};

	~Car()
	{
	};

	std::string GetMake()
	{
		return make;
	}

	std::string GetModel()
	{
		return model;
	}

	std::string GetFuelType()
	{
		return fuelType;
	}

	GasStation GetGasStation()
	{
		return gasStation;
	}

	double GetFuelConsumption()
	{
		return fuelConsumption;
	}

	void SetMake(std::string make)
	{
		this->make = make;
	}

	void SetModel(std::string model)
	{
		this->model = model;
	}

	void SetGasStation(GasStation gasStation)
	{
		this->gasStation = gasStation;
	}

	void SetFuelType(std::string fuelType)
	{
		if (fuelType == "diesel" || fuelType != "gasoline" || fuelType != "gpl")
		{
			this->fuelType = fuelType;
		}
		else if (fuelType != "diesel" && fuelType != "gasoline" && fuelType != "gpl")
		{
			this->fuelType = "diesel";
			std::cout << "Fuel type that you entered is not valid, fuel type is set to diesel!" << std::endl;
		}
	}

	void SetFuelConsumption(double fuelConsumption)
	{
		if (fuelConsumption > 0)
		{
			this->fuelConsumption = fuelConsumption;
		}
		else if (fuelConsumption <= 0)
		{
			this->fuelConsumption = fuelConsumption;
			std::cout << "Fuel consumption can not be zero or negative, fuel consumption set to 5 (l/100 km)!" << std::endl;
		}
	}

	void Print()
	{
		std::cout << std::endl;
		std::cout << "Make -> " << make << std::endl;
		std::cout << "Model -> " << model << std::endl;
		std::cout << "Fuel type -> " << fuelType << std::endl;
		std::cout << "Fuel consumption (l/100 km) -> " << fuelConsumption << std::endl;
		this->gasStation.Print();
	}

	void CalculateCarExpenses(int travelledKM)
	{
		double totalConsumption = (travelledKM / 100.0) * this->fuelConsumption;
		double neededMoney = totalConsumption * this->gasStation.GetPricePerLiter();

		std::cout << "Travelled KM -> " << travelledKM << std::endl;
		std::cout << "Consumption of liters per travelled kilometers -> " << totalConsumption << std::endl;
		std::cout << "Needed money -> " << neededMoney << " BGN" << std::endl;
	}
};

int main()
{
	std::vector<Car> cars;

	int numberOfCarsToCheck;
	std::cout << "How many cars you want to check: ";
	std::cin >> numberOfCarsToCheck;

	int travelledKM = 0;

	for (int i = 0; i < numberOfCarsToCheck; i++)
	{
		std::cout << std::endl;
		std::cout << "Enter make: ";
		std::string make;
		std::cin >> make;

		std::cout << "Enter model: ";
		std::string model;
		std::cin >> model;

		std::cout << "Enter fuel type: ";
		std::string fuelType;
		std::cin >> fuelType;

		std::cout << "Enter consumption (l/100 km): ";
		double fuelConsumption;
		std::cin >> fuelConsumption;

		std::cout << std::endl;

		std::cout << "Enter fuel on gas station: ";
		std::string fuel;
		std::cin >> fuel;

		std::cout << "Enter price per liter: ";
		double pricePerLiter;
		std::cin >> pricePerLiter;

		GasStation gasStation(fuel, pricePerLiter);
		Car car(make, model, fuelType, fuelConsumption, gasStation);

		std::cout << "Enter traveled KM: ";
		std::cin >> travelledKM;

		cars.push_back(car);
	}

	for (std::vector<Car>::iterator i = cars.begin(); i != cars.end(); i++)
	{
		i->Print();
		i->CalculateCarExpenses(travelledKM);
	}

	return 0;
}