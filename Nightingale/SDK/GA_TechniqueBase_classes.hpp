#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x678 - 0x420)
// BlueprintGeneratedClass GA_TechniqueBase.GA_TechniqueBase_C
class UGA_TechniqueBase_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UTechniqueDataAsset>    TechniqueRow;                                      // 0x428(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTag                          RightHandItemSlot;                                 // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6049[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemId;                                            // 0x460(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                PhysicalImpactEffect;                              // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTechnique                            TechniqueStruct;                                   // 0x4E8(0x168)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AutoRemoveDurability;                              // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6058[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EquippableItemBase_C*              EquippedItem;                                      // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerCharacter*                   OwningCharacter;                                   // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          OppositeHandTag;                                   // 0x668(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                LoadoutComponent;                                  // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_TechniqueBase_C* GetDefaultObj();

	void GetTechniqueActivationTag(bool* Success, struct FGameplayTag* Tag, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void PlayPhysicalResponse(class AActor* Striker, struct FHitResult& HitResult, class AActor* AbilityOwner, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess);
	void ApplyDamageToTargets(class AActor* DamageCauser, const struct FGameplayTagContainer& EffectTags, TMap<class AActor*, struct FHitResult> Targets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ApplyDamageToTarget(class AActor* DamageCauser, class AActor* HitActor, const struct FHitResult& HitResult, const struct FGameplayTagContainer& EffectTags, const struct FGameplayAbilityPayloadHandle& PayloadData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, const struct FGameplayTag& CallFunc_GetDamageActivationTagForTechnique_Damage_Activation_Tag, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void OnActivateAbility(const struct FGameplayEventData& EventData, class ANWXPlayerState* OwningPlayerState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsTwoHanded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AEquippableItem* Temp_object_Variable, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTechniqueDataAsset* K2Node_DynamicCast_AsTechnique_Data_Asset, bool K2Node_DynamicCast_bSuccess_4, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void ParseEventData(const struct FGameplayEventData& EventData, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, const struct FSoftObjectPath& CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue, TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTechniqueDataAsset* K2Node_DynamicCast_AsTechnique_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AbilityPayloadHasSoftObjectPath_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_TechniqueBase(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bWasCancelled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


