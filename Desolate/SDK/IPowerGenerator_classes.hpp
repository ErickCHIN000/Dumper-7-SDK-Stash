#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IPowerGenerator.IPowerGenerator_C
class IIPowerGenerator_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIPowerGenerator_C* GetDefaultObj();

	void GetIsWorking(bool* IsWorking);
	void Discharge(float Amount);
	void GetEnergyLevel(float* Level);
	void GetPower(float* Power);
};

}


