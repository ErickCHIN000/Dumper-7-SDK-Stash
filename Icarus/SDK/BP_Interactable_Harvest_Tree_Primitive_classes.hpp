#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x101 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C
class UBP_Interactable_Harvest_Tree_Primitive_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_IcarusPlayerCharacterSurvival_C*   CurrentPlayer;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_StaticItem_TreePrimitive_C*        StaticItemTreePrimitive;                           // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHandedness                       Handedness;                                        // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Harvest_Tree_Primitive_C* GetDefaultObj();

	void Interact_Harvest(const struct FHitResult& Hit, const struct FItemData& GainedResource, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetBPIcarusPlayerController_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTreeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void MULTI_PlayPickupFX(class AIcarusPlayerCharacter* Target);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Harvest_Tree_Primitive(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, enum class EHandedness Temp_byte_Variable, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* Temp_object_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* Temp_object_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, class UAnimMontage* Temp_object_Variable_2, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AIcarusPlayerCharacter* K2Node_CustomEvent_Target, enum class EDataValidity CallFunc_GetFocusedItemData_Validity, const struct FItemData& CallFunc_GetFocusedItemData_ReturnValue, const struct FItemAttachmentData& CallFunc_GetFocusableAttachmentData_AttachmentData, enum class EDataValid CallFunc_GetFocusableAttachmentData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* Temp_object_Variable_3, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UAnimMontage* Temp_object_Variable_4, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_StaticItem_TreePrimitive_C* K2Node_DynamicCast_AsBP_Static_Item_Tree_Primitive, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class UAnimMontage* Temp_object_Variable_5, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_4, enum class EHandedness Temp_byte_Variable_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_3, class UAnimMontage* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
};

}


