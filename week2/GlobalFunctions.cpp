#include "GlobalFunctions.h"

int CompareWavesEnemyNum(EnemyWave wave1, EnemyWave wave2) {
  int EnemyNumberA = wave1.GetEnemiesNum();
  int EnemyNumberB = wave2.GetEnemiesNum();

  if (EnemyNumberA > EnemyNumberB) {
    return 1;
  }
  if (EnemyNumberA < EnemyNumberB) {
    return -1;
  }

  return 0;
}

int CompareWavesMoneyPerEnemy(EnemyWave A, EnemyWave B) {
  int EnemyMoneyA = A.GetMoneyPerEnemy();
  int EnemyMoneyB = B.GetMoneyPerEnemy();

  if (EnemyMoneyA > EnemyMoneyB) {
    return 1;
  }
  if (EnemyMoneyA < EnemyMoneyB) {
    return -1;
  }

  return 0;
}
