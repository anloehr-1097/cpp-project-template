#include <string>
#include "lib_module.h"  // include header file to be tested
#include<gtest/gtest.h>  // include google test framework

TEST(CustFunc, Test1) {
    // test definition, see offiicial Docu
    std::string s = "Hello from test_cust_func!";
    ASSERT_EQ(cust_func2(s), s);
}
 
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);  // 
    return RUN_ALL_TESTS();
}
