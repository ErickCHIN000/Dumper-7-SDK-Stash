#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Employee.BPI_Employee_C
class IBPI_Employee_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Employee_C* GetDefaultObj();

	void GetEmployer(class AActor** Employer);
};

}


