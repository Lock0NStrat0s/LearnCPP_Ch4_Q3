#include <iostream>

double GetHeight();
void DisplayHeight(double height, int time);

int main()
{
	double height{ GetHeight() };

	DisplayHeight(height, 0);
	DisplayHeight(height, 1);
	DisplayHeight(height, 2);
	DisplayHeight(height, 3);
	DisplayHeight(height, 4);
	DisplayHeight(height, 5);

	return 0;
}

double GetHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double h{};
	std::cin >> h;

	return h;
}

void DisplayHeight(double height, int time)
{
	double calcHeight{};
	double gravity{ 9.8 };

	calcHeight = gravity * time * time / 2;
	if (height - calcHeight > 0)
		std::cout << "\nAt " << time << " seconds, the ball is at height: " << height - calcHeight << " meters.";
	else
		std::cout << "\nAt " << time << " seconds, the ball is on the ground.";
}