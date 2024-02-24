#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_HideOffhandItem.ANS_HideOffhandItem_C
class UANS_HideOffhandItem_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_HideOffhandItem_C* GetDefaultObj();

	bool SetOffhandHidden(class USkeletalMeshComponent* SkeletalMeshComp, bool Hidden, class ABP_Character_C* Character, class AEquippableItem* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_HMU_TP_Player_C* K2Node_DynamicCast_AsABP_HMU_TP_Player, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_4, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetOffhandHidden_ReturnValue);
	void Set1stPersonOffhandHidden(bool Hidden_, class ABP_EquippableItemBase_C* Item, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem);
	void Set3rdPersonOffhandHidden(bool Hidden_, class ABP_EquippableItemBase_C* Item);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetOffhandHidden_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetOffhandHidden_ReturnValue);
};

}


