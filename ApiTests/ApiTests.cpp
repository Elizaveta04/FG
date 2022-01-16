#include "pch.h"
#include "CppUnitTest.h"
#include "../API/vector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ApiTests
{
	TEST_CLASS(ApiTests)
	{
	public:
		
		TEST_METHOD(TestClassCreation)
		{
			const auto result = new vector();
			Assert::IsNotNull(result);
		}
		TEST_METHOD(TestSize)
		{
			size_t expected = 0;
			vector result;
			Assert::AreEqual(expected, result.size());
			result.add_item(20);
			expected = 1;
			Assert::AreEqual(expected, result.size());
		}
		TEST_METHOD(TestMaxSize)
		{
			size_t expected = 1;
			vector result;
			Assert::AreEqual(expected, result.max_size());
			result.add_item(20);
			expected = 1;
			Assert::AreEqual(expected, result.max_size());
			result.add_item(30);
			expected = 2;
			Assert::AreEqual(expected, result.max_size());
			result.add_item(30);
			expected = 4;
			Assert::AreEqual(expected, result.max_size());
		}
		TEST_METHOD(TestClear)
		{
			size_t expected = 5;
			vector result;
			result.add_item(20);
			result.add_item(20);
			result.add_item(20);
			result.add_item(20);
			result.add_item(20);
			Assert::AreEqual(expected, result.size());
			result.clear();
			expected = 0;
			Assert::AreEqual(expected, result.size());
		}
		TEST_METHOD(TestAddMemory)
		{
			size_t expected = 0;
			vector result;
			Assert::AreEqual(expected, result.size());
			result.add_item(2);
			result.add_item(6);
			result.add_memory();
			expected = 2;
			Assert::AreEqual(expected, result.size());
			expected = 4;
			Assert::AreEqual(expected, result.max_size());
		}
		TEST_METHOD(TestAddItem)
		{
			size_t expected = 0;
			vector result;
			Assert::AreEqual(expected, result.size());
			result.add_item(2);
			expected = 1;
			int temp = result[0];
			Assert::AreEqual(expected, result.size());
			Assert::AreEqual(2, temp);
			result.add_item(3);
			result.add_item(4);
			result.add_item(5);
			expected = 4;
			temp = result[2];
			Assert::AreEqual(expected, result.size());
			Assert::AreEqual(4, temp);
		}
		TEST_METHOD(TestRemoveItem)
		{
			size_t expected = 1;
			vector result;
			result.add_item(2);
			Assert::AreEqual(expected, result.size());
			Assert::AreEqual(expected, result.max_size());
			result.remove_item(0);
			expected = 0;
			Assert::AreEqual(expected, result.size());
			expected = 1;
			Assert::AreEqual(expected, result.max_size());
			result.add_item(1);
			result.add_item(2);
			result.add_item(3);
			result.add_item(4);
			expected = 4;
			Assert::AreEqual(expected, result.size());
			Assert::AreEqual(expected, result.max_size());
			result.remove_item(2);
			result.remove_item(0);
			expected = 2;
			Assert::AreEqual(expected, result.size());
			expected = 4;
			Assert::AreEqual(expected, result.max_size());
		}
		TEST_METHOD(TestInsertItem)
		{
			size_t expected = 3;
			vector result;
			result.add_item(2);
			result.add_item(3);
			result.add_item(-20);
			Assert::AreEqual(expected, result.size());
			int temp = result[2];
			Assert::AreEqual(-20, temp);
			result.insert_item(2, 5);
			temp = result[2];
			expected = 4;
			Assert::AreEqual(5, temp);
			Assert::AreEqual(expected, result.size());
			result.insert_item(0, 7);
			temp = result[0];
			expected = 5;
			Assert::AreEqual(7, temp);
			Assert::AreEqual(expected, result.size());
		}
		TEST_METHOD(TestSwap)
		{
			vector result;
			result.add_item(2);
			result.add_item(3);
			result.add_item(-20);
			int temp = result[0];
			Assert::AreEqual(2, temp);
			temp = result[2];
			Assert::AreEqual(-20, temp);
			result.swap(2, 0);
			temp = result[0];
			Assert::AreEqual(-20, temp);
			temp = result[2];
			Assert::AreEqual(2, temp);

		}
		
	};
}
