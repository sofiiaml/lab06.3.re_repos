#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.3.re/PR6.3.re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63re
{
	TEST_CLASS(UnitTest63re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            // Очікуваний результат введення
			const int size = 10;
			double expected[size] = { 1, 2, 3,4,5,6,6,7,8,9 };  // Очікуваний масив після введення
            double test[size];
   
            // Перевірка, чи масив "a" став очікуваним після введення
            for (int i = 0; i < 10; i++) {
                Assert::AreEqual(test[i],expected[i]);
            }
		}
	};
}
