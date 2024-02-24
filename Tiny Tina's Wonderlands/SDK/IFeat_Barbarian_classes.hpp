#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IFeat_Barbarian.IFeat_Barbarian_C
class IIFeat_Barbarian_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIFeat_Barbarian_C* GetDefaultObj();

	void IsEnraged(bool* Res);
	void StartRage(bool* Res);
	void GetMaxRageTime(float* Res);
	void GetRageTime(float* Res);
	void EndRage(bool* Res);
	void RemoveRageTime(float Time, float* Res);
	void AddRageTime(float Time, float* Res);
};

}


