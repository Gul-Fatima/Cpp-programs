//Create a Playlist class that contains a collection of Song objects.Each Song object should  have a title, artist, and duration.Implement methods to add songs and display the playlist.
#include <iostream>
#include<vector>
using namespace std;
class Songs {
	string title, artist;
	int duration; //in sec
public:
	Songs(string t, string a, int sec) : title(t), artist(a), duration(sec) {};
	string gettitle() {
		return title;
	}
};
class Playlist {
	vector<Songs> song;
public:
	
	void addSong(Songs s) {
		song.push_back(s);
	}
	void display() {
		for (int i = 0; i < song.size(); i++)
		{
			cout << song[i].gettitle() << endl;
		}
	}

};
int main() {
	Songs s1("s1", "a1", 30);
	Songs s2("s2", "a2", 50);
	Songs s3("s3", "a1", 40);
	Playlist p;
	p.addSong(s1);
	p.addSong(s2);
	p.addSong(s3);
	p.display();
}
