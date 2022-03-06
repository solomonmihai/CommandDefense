#include "EnemyWave.h"

void EnemyWave::SetName(std::string newName) { name = newName; }
std::string EnemyWave::GetName() { return name; }

void EnemyWave::SetEnemiesNum(int num) {
  if (num > 0) {
    enemiesNum = num;
  } else {
    throw "enemiesNum must be greater than 0";
  }
}

int EnemyWave::GetEnemiesNum() { return enemiesNum; }

void EnemyWave::SetStartingHealth(int health) {
  if (health > 0) {
    enemiesNum = health;
  } else {
    throw "Starting health must be greater than 0";
  }
}

int EnemyWave::GetStartingHealth() { return startingHealth; }

void EnemyWave::SetMoneyPerEnemy(float money) { moneyPerEnemy = money; }
float EnemyWave::GetMoneyPerEnemy() { return moneyPerEnemy; }
