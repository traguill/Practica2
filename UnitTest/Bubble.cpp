#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Practica Quadtree/p2DynArray.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(Bubble)
	{
	public:
		
		TEST_METHOD(Method)
		{
			p2DynArray<int> array;

			for (int i = 0; i <= 10000; i++)
			{
				array.PushBack(rand());
			}
			
			

			int counter2 = array.Bubble2();

			Assert::AreEqual(array[0], counter2);
			
		}

	};
}