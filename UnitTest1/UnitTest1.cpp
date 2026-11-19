
#include "pch.h"
#include "CppUnitTest.h"

#include "C:\Users\aizen\Documents\lab c++\Lab_9.1\var.h"
#include "C:\Users\aizen\Documents\lab c++\Lab_9.1\dod.h"
#include "C:\Users\aizen\Documents\lab c++\Lab_9.1\sum.h"

#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

namespace UnitTest9_1
{
    TEST_CLASS(UnitTest9_1)
    {
    public:

        TEST_METHOD(Test_Zero)
        {
            x = 0.0;
            e = 0.000001;

            sum();

            Assert::AreEqual(0.0, s, 0.000001);
        }

        TEST_METHOD(Test_Positive)
        {
            x = 0.5;
            e = 0.000001;

            sum();

            Assert::AreEqual(
                std::log(1.0 - x), s, 0.000001);
        }

        TEST_METHOD(Test_Negative)
        {
            x = -0.5;
            e = 0.000001;

            sum();

            Assert::AreEqual(
                std::log(1.0 - x), s, 0.000001);
        }

        TEST_METHOD(Test_SmallValue)
        {
            x = 0.1;
            e = 0.000001;

            sum();

            Assert::AreEqual(
                std::log(1.0 - x), s, 0.000001);
        }

        TEST_METHOD(Test_TermsCount)
        {
            x = 0.5;
            e = 0.000001;

            sum();

            Assert::IsTrue(n > 0);
        }
    };
}
