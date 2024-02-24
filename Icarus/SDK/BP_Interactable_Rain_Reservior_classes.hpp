#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF8 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C
class UBP_Interactable_Rain_Reservior_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODEvent*                            InteractSound;                                     // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Rain_Reservior_C* GetDefaultObj();

	void PlayInteractSound(class AActor* Instigator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsFull_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ContainerCurrentlyAcceptsType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void MULTI_PlayInteractFX(class AActor* Instigator);
	void ExecuteUbergraph_BP_Interactable_Rain_Reservior(int32 EntryPoint, class AActor* K2Node_CustomEvent_Instigator, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStoredUnits_ReturnValue, int32 CallFunc_AddContainerActorCapacity_ReturnValue);
};

}


