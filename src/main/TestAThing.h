//
// Created by markelba on 1/8/25.
//

#ifndef BOOST_TEST_DMO_SRC_MAIN_TESTATHING_H_
#define BOOST_TEST_DMO_SRC_MAIN_TESTATHING_H_

namespace tester {

class TestAThing {
 private:
  int m_thing;

 public:
  explicit TestAThing(int thing) : m_thing(0) {}
  int GetAThing() const;
  void SetAThing(int thing);
};

} // tester

#endif //BOOST_TEST_DMO_SRC_MAIN_TESTATHING_H_
