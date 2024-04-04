#ifndef FISHTANK_H
#define FISHTANK_H

class FishTank {
public:
  FishTank();
  FishTank(float, float, float);
  void setTemperature(float);
  void setphLevel(float);
  void setVolume(float);
  float getTemperature();
  float getphLevel();
  float getVolume();

private:
  float temperature;
  float phLevel;
  float volume;
};

#endif