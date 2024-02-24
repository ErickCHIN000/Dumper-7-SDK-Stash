#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x590 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_FlameThrower_Small.BP_SkeletalItem_FlameThrower_Small_C
class ABP_SkeletalItem_FlameThrower_Small_C : public ASkeletalItem
{
public:
	uint8                                        Pad_5E2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Flamethrower_FX;                                // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_FlameThrower_Small_C* GetDefaultObj();

	void ToggleParticle(bool Play);
	void ExecuteUbergraph_BP_SkeletalItem_FlameThrower_Small(int32 EntryPoint, bool K2Node_CustomEvent_Play);
};

}


