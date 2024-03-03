#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_DayCycle.BPI_DayCycle_C
class IBPI_DayCycle_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_DayCycle_C* GetDefaultObj();

	void FnGetHourDuration(float* Duration);
	void FnGetTime(float* Current_Hour);
};

}


