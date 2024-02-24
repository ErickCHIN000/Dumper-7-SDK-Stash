#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x590 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_FireExtinguisher.BP_SkeletalItem_FireExtinguisher_C
class ABP_SkeletalItem_FireExtinguisher_C : public ASkeletalItem
{
public:
	uint8                                        Pad_5C9E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_fireExtinguisher;                               // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_FireExtinguisher_C* GetDefaultObj();

	void ToggleParticle(bool Play);
	void ExecuteUbergraph_BP_SkeletalItem_FireExtinguisher(int32 EntryPoint, bool K2Node_CustomEvent_Play);
};

}


