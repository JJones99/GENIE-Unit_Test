#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Genie
#include <boost/test/unit_test.hpp>
#include <iostream>
#include <iterator>
#include "LlewellynSmith/LwlynSmithQELCCPXSec.h"
#include "Interaction/Interaction.h"
#include "Interaction/KPhaseSpace.h"
#include "Interaction/XclsTag.h"
#include "Interaction/Kinematics.h"
#include "PDG/PDGUtils.h"

using namespace std; 
class base{
public:
	virtual void setup();
	virtual void teardown();
	virtual void run_test();
};
