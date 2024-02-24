#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF8 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_TargetRange_Start.BP_Interactable_TargetRange_Start_C
class UBP_Interactable_TargetRange_Start_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                Current_Player;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_TargetRange_Start_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_TargetRange_Start(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ATargetRangeTrigger* K2Node_DynamicCast_AsTarget_Range_Trigger, bool K2Node_DynamicCast_bSuccess_1);
};

}


