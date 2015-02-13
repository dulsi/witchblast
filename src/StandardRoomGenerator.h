/**  This file is part of Witch Blast.
  *
  *  Witch Blast is free software: you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation, either version 3 of the License, or
  *  (at your option) any later version.
  *

  *  Witch Blast is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with Witch Blast.  If not, see <http://www.gnu.org/licenses/>.
  */

#ifndef STANDARDROOMGENERATOR_H_INCLUDED
#define STANDARDROOMGENERATOR_H_INCLUDED

const int LAST_LEVEL = 6;

void generateStandardRoom01()
{
  int random = rand() % 64;

  if (random < 16)
  {
    game().getCurrentMap()->generateRoomWithoutHoles(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRat, 2);
  }
  else if (random < 32)
  {
    game().getCurrentMap()->generateRoomWithoutHoles(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeBat, 2);
  }
  else if (random < 48)
  {
    game().getCurrentMap()->generateRoomWithoutHoles(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeEvilFlower, 2);
  }
  else
  {
    Vector2D v = game().getCurrentMap()->generateBonusRoom();
    new ChestEntity(v.x, v.y, ChestBasic, false);
    game().getCurrentMap()->setCleared(true);
  }
}

void generateStandardRoom02()
{
  int random = rand() % 95;

  if (random < 16)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRat, 3);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeSnake, 1);
    else game().findPlaceMonsters(EnemyTypeBat, 2);
  }
  else if (random < 32)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeBat, 3);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeSnake, 1);
  }
  else if (random < 48)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeEvilFlower, 4);
  }
  else if (random < 64)
  {
    Vector2D v = game().getCurrentMap()->generateBonusRoom();
    new ChestEntity(v.x, v.y, ChestBasic, false);
    game().getCurrentMap()->setCleared(true);
  }
  else if (random < 80)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeSnake, 4);
  }
  else
  {
    game().getCurrentMap()->generateRoomRandom(ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRatBlack, 6);
  }
}

void generateStandardRoom03()
{
  int random = rand() % 110;

  if (random < 16)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRat, 4);
    game().findPlaceMonsters(EnemyTypeRatHelmet, 2);
  }
  else if (random < 32)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeBat, 5);
    if (rand() % 3 == 0) game().findPlaceMonsters(EnemyTypeImpRed, 1);
  }
  else if (random < 48)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeEvilFlower, 4 + rand() % 2);
    if (rand() % 3 == 0) game().findPlaceMonsters(EnemyTypeImpBlue, 1);
    if (rand() % 3 == 0) game().findPlaceMonsters(EnemyTypePumpkin, 1);
    if (rand() % 3 == 0) game().findPlaceMonsters(EnemyTypeEvilFlowerIce, 1);
  }
  else if (random < 64)
  {
    Vector2D v = game().getCurrentMap()->generateBonusRoom();
    new ChestEntity(v.x, v.y, ChestBasic, false);
    game().getCurrentMap()->setCleared(true);
  }
  else if (random < 80)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    for (int i = rand() % 2; i < 6; i++)
      game().findPlaceMonsters(rand() % 2 == 0 ? EnemyTypeSnake : EnemyTypeSnakeBlood, 1);

    game().findPlaceMonsters(EnemyTypeRatHelmet, 1);
    if (rand() % 2 == 0)
    {
      if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeImpRed, 1);
      if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeImpBlue, 1);
    }
    else
      if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeSnake, 2);
  }
  else if (random < 95)
  {
    game().getCurrentMap()->generateRoomRandom(ROOM_TYPE_CHECKER);
    int r = rand() % 2;
    game().findPlaceMonsters(EnemyTypeRatBlack, 5 - r);
    game().findPlaceMonsters(EnemyTypeRatBlackHelmet, 1 + r);
  }
  else
  {
    game().getCurrentMap()->generateRoomWithoutHoles(rand() % ROOM_TYPE_CHECKER);
    game().getCurrentMap()->addRandomGrids(4);
    game().findPlaceMonsters(EnemyTypeSlime, 7 + rand() % 5);
    if (rand() % 4 == 0) game().findPlaceMonsters(EnemyTypeSlimeBlue, 1);
    if (rand() % 4 == 0) game().findPlaceMonsters(EnemyTypeSlimeRed, 1);
  }
}

void generateStandardRoom04()
{
  int random = rand() % 110;

  if (random < 16)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRat, 4);
    game().findPlaceMonsters(EnemyTypeRatHelmet, 3);
    if (rand() % 4 == 0) game().findPlaceMonsters(EnemyTypeWitch, 1);
    else game().findPlaceMonsters(EnemyTypeSnakeBlood, 1);
  }
  else if (random < 32)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeBat, 3);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeImpRed, 3);
    else game().findPlaceMonsters(EnemyTypeImpBlue, 3);
  }
  else if (random < 48)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeEvilFlower, 4);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypePumpkin, 2 + rand() % 2);
    else game().findPlaceMonsters(EnemyTypeImpBlue, 2);

    if (rand() % 2 == 0)
    {
      game().findPlaceMonsters(EnemyTypePumpkin, 2 + rand() % 2);
      game().findPlaceMonsters(EnemyTypeEvilFlowerIce, 1 + rand() % 2);
    }
    else
    {
      game().findPlaceMonsters(EnemyTypeImpBlue, 3);
      game().findPlaceMonsters(EnemyTypeEvilFlower, 1);
    }
  }
  else if (random < 64)
  {
    Vector2D v = game().getCurrentMap()->generateBonusRoom();
    new ChestEntity(v.x, v.y, ChestBasic, false);
    game().getCurrentMap()->setCleared(true);
  }
  else if (random < 80)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeImpRed, 3);
    game().findPlaceMonsters(EnemyTypeImpBlue, 3);
    if (rand() % 4 == 0) game().findPlaceMonsters(EnemyTypeWitchRed, 1);
  }
  else if (random < 90)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    for (int i = 0; i < 6; i++)
      game().findPlaceMonsters(rand() % 2 == 0 ? EnemyTypeSnake : EnemyTypeSnakeBlood, 1);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeWitchRed, 1);
    else game().findPlaceMonsters(EnemyTypeWitch, 1);
  }
  else if (random < 100)
  {
    game().getCurrentMap()->generateRoomRandom(ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRatBlack, 4);
    game().findPlaceMonsters(EnemyTypeRatBlackHelmet, 3);
  }
  else
  {
    game().getCurrentMap()->generateRoomWithoutHoles(rand() % ROOM_TYPE_CHECKER);
    game().getCurrentMap()->addRandomGrids(4);
    int r = 8 + rand() % 5;
    for (int i = 0; i < r; i++)
    {
      int rtype = rand() % 5;
      switch (rtype)
      {
        case 0: case 3: case 4: game().findPlaceMonsters(EnemyTypeSlime,1); break;
        case 1: game().findPlaceMonsters(EnemyTypeSlimeBlue,1); break;
        case 2: game().findPlaceMonsters(EnemyTypeSlimeRed,1); break;
      }
    }
  }
}

void generateStandardRoom05()
{
  int random = rand() % 110;

  if (random < 10)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRat, 3);
    game().findPlaceMonsters(EnemyTypeRatHelmet, 4);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeWitch, 1);
    else game().findPlaceMonsters(EnemyTypeWitchRed, 1);
  }
  else if (random < 20)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeBat, 4);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeImpRed, 4);
    else game().findPlaceMonsters(EnemyTypeImpBlue, 4);
  }
  else if (random < 32)
  {
    game().getCurrentMap()->generateRoomWithoutHoles(2 + rand() % 2);
    game().findPlaceMonsters(EnemyTypeWitch, 2 + rand() % 2);
    game().findPlaceMonsters(EnemyTypeWitchRed, 1 + rand() % 2);
    game().findPlaceMonsters(EnemyTypeCauldron, 1);
  }
  else if (random < 48)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeEvilFlower, 3);
    if (rand() % 2 == 0)
    {
      game().findPlaceMonsters(EnemyTypePumpkin, 2 + rand() % 4);
      game().findPlaceMonsters(EnemyTypeEvilFlowerIce, 1);
    }
    else
    {
      game().findPlaceMonsters(EnemyTypeImpBlue, 3);
      game().findPlaceMonsters(EnemyTypeEvilFlower, 1);
    }
  }
  else if (random < 64)
  {
    Vector2D v = game().getCurrentMap()->generateBonusRoom();
    new ChestEntity(v.x, v.y, ChestBasic, false);
    game().getCurrentMap()->setCleared(true);
  }
  else if (random < 80)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    int r = rand() % 3;
    if (r == 0)
    {
      game().findPlaceMonsters(EnemyTypeImpRed, 3 + rand() % 2);
      game().findPlaceMonsters(EnemyTypeImpBlue, 3 + rand() % 2);
    }
    else if (r == 1)
      game().findPlaceMonsters(EnemyTypeImpRed, 7);
    else
      game().findPlaceMonsters(EnemyTypeImpBlue, 7);

    if (rand() % 3 == 0) game().findPlaceMonsters(EnemyTypeWitchRed, 1);
  }
  else if (random < 90)
  {
    game().getCurrentMap()->generateRoomRandom(ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeRatBlack, 4);
    game().findPlaceMonsters(EnemyTypeRatBlackHelmet, 4);
  }
  else if (random < 100)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    for (int i = rand() % 2; i < 6; i++)
      game().findPlaceMonsters(rand() % 3 == 0 ? EnemyTypeSnake : EnemyTypeSnakeBlood, 1);
    for (int i = 0; i < 2; i++)
      if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeWitchRed, 1);
      else game().findPlaceMonsters(EnemyTypeWitch, 1);
  }
  else
  {
    game().getCurrentMap()->generateRoomWithoutHoles(rand() % ROOM_TYPE_CHECKER);
    game().getCurrentMap()->addRandomGrids(4);
    int r = 8 + rand() % 5;
    for (int i = 0; i < r; i++)
    {
      int rtype = rand() % 5;
      switch (rtype)
      {
        case 0: case 4: game().findPlaceMonsters(EnemyTypeSlime,1); break;
        case 1: game().findPlaceMonsters(EnemyTypeSlimeBlue,1); break;
        case 2: game().findPlaceMonsters(EnemyTypeSlimeRed,1); break;
        case 3: game().findPlaceMonsters(EnemyTypeSlimeViolet,1); break;
      }
    }
    if (rand() % 4 == 0) game().findPlaceMonsters(EnemyTypeWitch, 1);
  }
}

void generateStandardRoom06()
{
  int random = rand() % 100;

  if (random < 10)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeZombie, 6 + rand() % 2);
    game().findPlaceMonsters(EnemyTypeRatHelmet, 2);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeWitch, 1);
    else game().findPlaceMonsters(EnemyTypeZombie, 2);
  }
  else if (random < 20)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeBat, 2);
    game().findPlaceMonsters(EnemyTypeGhost, 5);
    if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeImpRed, 1);
    else game().findPlaceMonsters(EnemyTypeImpBlue, 1);
  }
  else if (random < 30)
  {
    game().getCurrentMap()->generateRoomWithoutHoles(2 + rand() % 2);
    game().findPlaceMonsters(EnemyTypeWitch, 2 +  + rand() % 2);
    game().findPlaceMonsters(EnemyTypeWitchRed, 2 +  + rand() % 2);
    game().findPlaceMonsters(EnemyTypeCauldron, 1);
  }
  else if (random < 40)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_ALL);
    game().findPlaceMonsters(EnemyTypeEvilFlower, 2);
    game().findPlaceMonsters(EnemyTypePumpkin, 3 + rand() % 4);
    game().findPlaceMonsters(EnemyTypeEvilFlowerIce, 2);
  }
  else if (random < 50)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    int r = rand() % 3;
    if (r == 0)
    {
      game().findPlaceMonsters(EnemyTypeImpRed, 4);
      game().findPlaceMonsters(EnemyTypeImpBlue, 4);
    }
    else if (r == 1)
      game().findPlaceMonsters(EnemyTypeImpRed, 8);
    else
      game().findPlaceMonsters(EnemyTypeImpBlue, 8);
    if (rand() % 3 == 0) game().findPlaceMonsters(EnemyTypeWitchRed, 1);
  }
  else if (random < 60)
  {
    game().getCurrentMap()->generateRoomRandom(ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeZombieDark, 5);
    game().findPlaceMonsters(EnemyTypeRatBlackHelmet, 4);
  }
  else if (random < 70)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    for (int i = rand() % 2; i < 6; i++)
      game().findPlaceMonsters(rand() % 3 == 0 ? EnemyTypeSnake : EnemyTypeSnakeBlood, 1);
    for (int i = 0; i < 2; i++)
      if (rand() % 2 == 0) game().findPlaceMonsters(EnemyTypeWitchRed, 1);
      else game().findPlaceMonsters(EnemyTypeWitch, 1);
  }
  else if (random < 80)
  {
    game().getCurrentMap()->generateRoomRandom(rand() % ROOM_TYPE_CHECKER);
    game().findPlaceMonsters(EnemyTypeSpiderLittle, 8);
    game().findPlaceMonsters(EnemyTypeSpiderEgg, 14);
  }
  else if (random < 90)
  {
    game().getCurrentMap()->generateRoomWithoutHoles(rand() % ROOM_TYPE_CHECKER);
    game().getCurrentMap()->addRandomGrids(4);
    int r = 8 + rand() % 5;
    for (int i = 0; i < r; i++)
    {
      int rtype = rand() % 5;
      switch (rtype)
      {
        case 0: case 4: game().findPlaceMonsters(EnemyTypeSlime,1); break;
        case 1: game().findPlaceMonsters(EnemyTypeSlimeBlue,1); break;
        case 2: game().findPlaceMonsters(EnemyTypeSlimeRed,1); break;
        case 3: game().findPlaceMonsters(EnemyTypeSlimeViolet,1); break;
      }
    }
    if (rand() % 3 == 0) game().findPlaceMonsters(EnemyTypeWitch, 1);
  }
  else
  {
    Vector2D v = game().getCurrentMap()->generateBonusRoom();
    new ChestEntity(v.x, v.y, ChestBasic, false);
    game().getCurrentMap()->setCleared(true);
  }
}

void generateStandardRoom(int level)
{
  switch (level)
  {
    case 1: generateStandardRoom01(); break;
    case 2: generateStandardRoom02(); break;
    case 3: generateStandardRoom03(); break;
    case 4: generateStandardRoom04(); break;
    case 5: generateStandardRoom05(); break;
    case 6: generateStandardRoom06(); break;

    default: generateStandardRoom06(); break;
  }
}

#endif // STANDARDROOMGENERATOR_H_INCLUDED
