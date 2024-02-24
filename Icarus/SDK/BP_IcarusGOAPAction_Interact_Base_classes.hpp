#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA0 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C
class UBP_IcarusGOAPAction_Interact_Base_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	struct FVector                               ProjectionExtent;                                  // 0x80(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_303F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABP_GOAPInteractable_Base_C> InteractableClass;                                 // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_GOAPInteractable_Base_C*           SpawnedNode;                                       // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_Interact_Base_C* GetDefaultObj();

	bool ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_GOAPInteractableComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Abort_ReturnValue);
	void SpawnDummyNode(class AIcarusNPCGOAPController* ForController, const struct FVector& Spawn_Transform_Location, class ABP_GOAPInteractable_Base_C** SpawnedNode, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_GOAPInteractable_Base_C* CallFunc_SpawnActorOfClass_OutActor, bool CallFunc_IsValidClass_ReturnValue);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, const struct FVector& CallFunc_GetInteractLocation_OutLocation, bool CallFunc_GetInteractLocation_Success, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class ABP_GOAPInteractable_Base_C* CallFunc_SpawnDummyNode_SpawnedNode, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void GetInteractLocation(class AIcarusNPCGOAPController* ForController, struct FVector* OutLocation, bool* Success);
	bool Execute(class AIcarusNPCGOAPController* Controller, float Delta, bool CallFunc_Execute_ReturnValue, class UBP_GOAPInteractableComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Interact_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue);
};

}


