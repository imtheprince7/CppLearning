#include<bits/stdc++.h>
using namespace std;

class MusicPlayer{
    int volume;
public:
    MusicPlayer(): volume{0}{ }  // Default constructor
    void setVolume(int value){
        if(value <0 || value >100){
            cout<<"Cannot set the value: ( please provide range between [0-100])"<<endl;
        }
        else
            volume = value;
    }

    int getVolume()const { return volume; }
};

int main(){
    MusicPlayer musicPlayer;
    cout<<"Music Player Volume"<<" "<<musicPlayer.getVolume()<<endl;
    
    musicPlayer.setVolume(77);
    cout<<"Music Player Volume"<<" "<<musicPlayer.getVolume()<<endl;
    
    musicPlayer.setVolume(110);
    
    return 0;
}