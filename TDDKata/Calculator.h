#pragma once
#include <string>
/// <summary>
/// Class Under test
/// </summary>
class Calculator
{
	
public:

	/// <summary>
	/// Sum of elements expression
	/// </summary>
	/// <param name="expression">Input expression</param>
	/// <returns>Value of sum expression of expression</returns>
	int Add(std::string expression);
	/// <summary>
	/// Sum of elements expression
	/// </summary>
	/// <param name="expression">Input expression</param>
	/// <returns>Value of sum expression of expression</returns>
	int Add(const char* expression);
};

