#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_WeakPoint.BPI_WeakPoint_C
class IBPI_WeakPoint_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_WeakPoint_C* GetDefaultObj();

	void GetWeakpointTriggerDamage();
	void GetWeakpointHitDamage(double Damage, double* ModifiedDamage);
};

}


