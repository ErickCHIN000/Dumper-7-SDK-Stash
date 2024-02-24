#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_ExplosiveNPCInterface.BP_ExplosiveNPCInterface_C
class IBP_ExplosiveNPCInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_ExplosiveNPCInterface_C* GetDefaultObj();

	void GetDetonationProgress(float* Percent);
	void BeginDetonation(float Duration);
};

}


