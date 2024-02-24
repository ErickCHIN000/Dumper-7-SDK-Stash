#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x131 - 0x120)
// BlueprintGeneratedClass BP_Interactable_RadialMenu_Deployable.BP_Interactable_RadialMenu_Deployable_C
class UBP_Interactable_RadialMenu_Deployable_C : public UBP_Interactable_RadialMenu_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DeployableBase_C*                  Deployable;                                        // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHandedness                       Handedness;                                        // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_RadialMenu_Deployable_C* GetDefaultObj();

	void PickupItem();
	void PickupDeployable(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Deployable_Pickup_PickedUp);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void MULTI_PlayPickupFX(class AIcarusPlayerCharacter* Target);
	void RadialMenuClosed(enum class ERadialOptions Option, class AIcarusPlayerCharacter* PlayerCharacter);
	void MenuItemSelected(class FName ItemActionId, int32 ItemPayload);
	void ExecuteUbergraph_BP_Interactable_RadialMenu_Deployable(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UAnimMontage* Temp_object_Variable, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* Temp_object_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, class UAnimMontage* Temp_object_Variable_2, enum class EHandedness Temp_byte_Variable, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusPlayerCharacter* K2Node_CustomEvent_Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EDataValidity CallFunc_GetFocusedItemData_Validity, const struct FItemData& CallFunc_GetFocusedItemData_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FItemAttachmentData& CallFunc_GetFocusableAttachmentData_AttachmentData, enum class EDataValid CallFunc_GetFocusableAttachmentData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, enum class EHandedness Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess_3, enum class ERadialOptions K2Node_Event_Option, class AIcarusPlayerCharacter* K2Node_Event_PlayerCharacter, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_2, class FName K2Node_Event_ItemActionId, int32 K2Node_Event_ItemPayload, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimMontage* K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, class UAnimMontage* K2Node_Select_Default_1);
};

}


