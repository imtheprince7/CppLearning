#include<iostream>
using namespace std;

class GameSetting{
    static GameSetting *instance;
    int brightness, fontSize;

    GameSetting(): brightness(80), fontSize(14) { }

    public:
    static GameSetting *getInstance(){
        if(instance == nullptr){
            instance = new GameSetting();
            return instance; 
        }
    }

    void setBrightness(int b){ brightness = b; }
    void setFontSize(int f){ fontSize = f; }

    int getBrightness(){ return brightness; }
    int getFontSize()  { return fontSize; }

    void gameDisplay(){
        cout<<"Brightness:   "<<brightness<<endl;
        cout<<"FontSize:   "<<fontSize<<endl;
    }
};
GameSetting * GameSetting :: instance = nullptr;

 void createNewObject(){
    GameSetting *setting = GameSetting :: getInstance();
    setting->gameDisplay();

}

int main(){
    GameSetting *setting = GameSetting :: getInstance();
    setting->gameDisplay();

    setting->setBrightness(100);
    setting->gameDisplay();

    return 0;
}