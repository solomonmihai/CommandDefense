#ifndef ENEMY_WAVE_H
#define ENEMY_WAVE_H

#include <string>

class EnemyWave {
private:
  std::string name;
  int enemiesNum;
  int startingHealth;
  float moneyPerEnemy;

public:
  void SetName(std::string newName);
  std::string GetName();
  void SetEnemiesNum(int num);
  int GetEnemiesNum();
  void SetStartingHealth(int health);
  int GetStartingHealth();
  void SetMoneyPerEnemy(float money);
  float GetMoneyPerEnemy();
};

#endif // ENEMY_WAVE_H
