#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

int a=41;

void setUp(){}
void tearDown(){}
char confirm;
void check(void)
{
    TEST_ASSERT_EQUAL('y',confirm);
}
/**
 * @brief Check Whether any key is pressed or not
 * @brief Using unit Test case
 * 
 */
int main(){

    printf("add: 36 + 5 = ");
    
    int a;
    scanf("%d",&a);
     if(a == 41)
    {
        confirm='n';
    }else{
        confirm='y';
    }
    UNITY_BEGIN();
   // RUN_TEST(control);
    return UNITY_END();
}
