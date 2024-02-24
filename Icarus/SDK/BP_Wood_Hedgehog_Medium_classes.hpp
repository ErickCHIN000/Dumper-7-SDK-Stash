#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7F0 - 0x7E8)
// BlueprintGeneratedClass BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C
class ABP_Wood_Hedgehog_Medium_C : public ABP_Spike_Trap_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Wood_Hedgehog_Medium_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Wood_Hedgehog_Medium(int32 EntryPoint);
};

}


