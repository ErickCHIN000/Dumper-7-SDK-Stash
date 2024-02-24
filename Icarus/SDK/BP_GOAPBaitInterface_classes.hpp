#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_GOAPBaitInterface.BP_GOAPBaitInterface_C
class IBP_GOAPBaitInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_GOAPBaitInterface_C* GetDefaultObj();

	void GetModifierToApplyOnConsume(struct FModifierStatesRowHandle* Modifier, float* LifeTime);
};

}


