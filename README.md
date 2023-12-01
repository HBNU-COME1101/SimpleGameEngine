# SimpleGameEngine
당신은 아주 간단한 게임엔진에서 동작하는 에이전트를 만들려고 합니다. 
게임 내 에이전트는 목표 위치로 이동하는 에이전트로 다음과 같은 제약을 가지고 있습니다. 
 * 단위 시간 당 0 ~ 1만큼 이동할 수 있다. 
 * 최종적으로 1000000 회 안에 목표 위치로 이동해야 한다. 

이상과 같은 제약사항에서 최적으로 목표 위치에 도달할 수 있는 에이전트의 동작을 구현해야 합니다. 이를 위해서 다음과 기본 코드를 제공합니다. 
```C++
#pragma once

#include <iostream>

#include "agent.hpp"
#include "utils.hpp"

class MyAgent:public Agent
{
public:
  MyAgent(double x, double y):Agent(x, y)
  {

  }

public:
  virtual bool move(const Position& dest_loc)
  {
    double d_x = dest_loc.get_x() - cur_loc.get_x();
    double d_y = dest_loc.get_y() - cur_loc.get_y();

    if(d_x > 0)
      cur_loc.set_x(cur_loc.get_x() + 1);
    else
    {
      if(d_y > 0)
        cur_loc.set_y(cur_loc.get_y() + 1);
    }
        
    return true;
  }
};
```
이상의 코드에서 move 함수는 반드시 구현해야 합니다. 
또한, MyAgent 클래스 내에 학생이 만든 코드를 추가해도 무방합니다. 
MyAgent 코드 외에는 어떤 코드도 수정해서는 안됩니다. 

## 수행해야 하는 Task
### 1. Task1
#### Task1-1: 현재 구현된 에이전트는 오른쪽과 위쪽으로만 이동하는 에이전트입니다. 이를 왼쪽과 아래 방향으로도 이동하는 에이전트를 구현하세요. 
#### Task1-2: 현재 구현된 에이전트는 소수점으로 구성된 목적지는 동작하지 않습니다. 소수점으로 구성된 위치에도 도착할 수 있도록 에이전트를 구현하세요.0
### 2. Task2
#### baseline으로 제공된 알고리즘을 사용한 것보다 더 좋은 성능(더 적게 움직이는)을 가지는 에이전트를 구현하세요.
### 3. Task3
#### 수업시간에 배운 자료구조를 활용하여 다수의 경로점을 따라 움직이는 에이전트를 구현하세요. 

## 주의
* my_agent.hpp 파일만을 복사하여 채점할 것이기 때문에 다른 파일을 수정하여 컴파일 오류가 발생한 경우 0점 처리됩니다. 
* 무한루프에 빠지거나 런타임 오류가 나면 0점 처리됩니다. 
* good는 x 축 방향 또는 y 축 방향으로만 움직이는 기본적인 모델로 good와 동일한 동작을 보이는 에이전트는 추가로 점수를 받습니다. 
* good 보다 성능이 더 잘나오는 경우는 추가로 10점을 더 받습니다. 
* 문의 사항은 교수에게 오픈톡 방이나 이메일로 문의하길 바랍니다. 
* 그 외에 다른 학생들과의 논의 및 협력을 금합니다.
