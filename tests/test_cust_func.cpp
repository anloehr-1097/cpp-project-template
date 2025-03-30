#include <string>
#include "lib_module.h"
#include<gtest/gtest.h>

TEST(CustFunc, Test1) {
    std::string s = "Hello from test_cust_func!";
    
    ASSERT_EQ(cust_func2(s), s);
}
 
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
