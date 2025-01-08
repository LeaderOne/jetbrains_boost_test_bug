//
// Created by markelba on 1/8/25.
//

#include "TestAThing.h"

namespace tester {

int TestAThing::GetAThing() const {
  return m_thing;
}

void TestAThing::SetAThing(int thing) {
  m_thing = thing;
}
} // tester