#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x778 - 0x770)
// BlueprintGeneratedClass BP_Swamp_Quadruped_Corpse.BP_Swamp_Quadruped_Corpse_C
class ABP_Swamp_Quadruped_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Swamp_Quadruped_Corpse_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Swamp_Quadruped_Corpse(int32 EntryPoint);
};

}


