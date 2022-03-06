#include "EnemyController.h"
#include "Enemy.h" // to actualy use the field Enemy declared in the header by forward declaration, we use the field here

void EnemyController::Init(int maximumEnemies, int step,
                           Point initialLocation) {
  maxEnemies = maximumEnemies;
  stepSize = step;
  startingLocation = initialLocation;
  alive = 0;

  enemies = new Enemy[maxEnemies];
  for (int i = 0; i < maxEnemies; i++) {
    enemies[i].Init(startingLocation, ENEMY_HEALTH);
  }
}

void EnemyController::Uninit() {
  delete enemies;
  maxEnemies = 0;
  stepSize = 0;
}

void EnemyController::Move() {
  for (int i = 0; i < maxEnemies; i++) {
    // TODO: calc direction
    EnemyDirection dir = EnemyDirection::RightDirection;
    enemies[i].Move(dir, stepSize);
  }
}

void EnemyController::DamageAll() {
  for (int i = 0; i < maxEnemies; i++) {
    enemies[i].Shoot(i + 1);
  }
}

int EnemyController::CountKilledEnemies() {
  int dead = 0;
  for (int i = 0; i < maxEnemies; i++) {
    dead += enemies[i].IsDead();
  }
  return dead;
}

bool EnemyController::SpawnEnemy() {
  if (alive < maxEnemies) {
    alive++;
    return true;
  }

  return false;
}

