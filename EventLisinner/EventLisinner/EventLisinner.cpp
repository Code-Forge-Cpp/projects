// EventLisinner.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <string>

#include <iostream>

#include "EventLisininer.h"

using namespace std;
EventLisinner events;

int main()
{
	int counter = 0;
	
	while (true)
	{

		
		if (events.KeyLissinerVK(VK_RETURN) && events.KeyLissinerVK(VK_UP))
		{
			cout << "Up Enter" << endl;
		}
		
		
		if (events.KeyLissinerVK(VK_DOWN)) {

			cout << "writen 1" << endl;
		}
		

		
	}
	return 0;
}

