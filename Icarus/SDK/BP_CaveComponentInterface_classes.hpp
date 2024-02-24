#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_CaveComponentInterface.BP_CaveComponentInterface_C
class IBP_CaveComponentInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_CaveComponentInterface_C* GetDefaultObj();

	void SetCaveState(bool IsInCave, class AActor* CaveActor);
};

}


