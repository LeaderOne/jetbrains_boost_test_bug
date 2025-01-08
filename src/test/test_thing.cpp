//
// Created by markelba on 1/8/25.
//
#include <boost/test/unit_test.hpp>
#include "../main/TestAThing.h"

using namespace tester;

BOOST_AUTO_TEST_SUITE(TesterTestSuite)

BOOST_AUTO_TEST_CASE(TesterTestCase)
{
  TestAThing thing(10);
  BOOST_CHECK_EQUAL(thing.GetAThing(), 10);

  thing.SetAThing(15);
  BOOST_CHECK_EQUAL(thing.GetAThing(), 15);
}

BOOST_AUTO_TEST_SUITE_END()
