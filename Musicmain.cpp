
#include <iostream>
#include "MyQueuemusic.h"
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

int main()
{
	vector<string>music;
	music.push_back("Single Ladies");
	music.push_back("Umbrella");
	music.push_back("Shake it Off");
	music.push_back("Toxic");
	music.push_back("Rolling in the Deep");
	music.push_back("Firework");
	music.push_back("Blinding Lights");

	myQueue::Queue<string>player;
	player.push_back(music[1]);
	player.push_back(music[rand()%music.size()]);
	player.push_back(music[rand()%music.size()]);
	cout << "Playing: " << endl;
	while (!player.isEmpty())
	{
		cout << player.first() << endl;
		player.pop_front();
		Sleep(500);
	}
}
