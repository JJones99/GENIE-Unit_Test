# GENIE-Unit_Test
This is the beginning of the creation of a unit_test setup for GENIE. This is a design for the infrastructure of the
BOOST unit-testing framework for GENIE.
Within src/ is a combination of files.
The file base_tester.cpp is designed to be a design for a base class that can be inherited by other class files
such as proc_info.cpp. The base_tester file contains three functions: setup, run test, and tear down. While no code
has been given to these functions yet, these are functions that can be inherited by the other class files and then used to Build the BOOST unit test
run it, then tear it down after testing. Inside proc_info.cpp is an example of a BOOST unit test that does not need the functions from base_tester.
Master_tester.cpp is also another file that inherits from base_Tester.
