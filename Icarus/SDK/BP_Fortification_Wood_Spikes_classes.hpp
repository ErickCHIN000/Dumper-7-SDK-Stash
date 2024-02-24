#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7F8 - 0x7E8)
// BlueprintGeneratedClass BP_Fortification_Wood_Spikes.BP_Fortification_Wood_Spikes_C
class ABP_Fortification_Wood_Spikes_C : public ABP_Spike_Trap_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box02;                                             // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fortification_Wood_Spikes_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Fortification_Wood_Spikes(int32 EntryPoint);
};

}


