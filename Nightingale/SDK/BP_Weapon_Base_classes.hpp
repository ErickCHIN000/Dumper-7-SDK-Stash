#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x9F0 - 0x9C8)
// BlueprintGeneratedClass BP_Weapon_Base.BP_Weapon_Base_C
class ABP_Weapon_Base_C : public ABP_EquippableItemBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MeleeComponent_C*                  BP_MeleeComponent;                                 // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       IronsightsFOVReduction;                            // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  VFXSocket;                                         // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  SpawnedLight;                                      // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Weapon_Base_C* GetDefaultObj();

	void HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count, const struct FItemData_LightEmitter& MeleeSocketFlameWeaponLightSettings, const struct FItemData_LightEmitter& VFXSocketFlameWeaponLightSettings, TSubclassOf<class UActorComponent> LightClass, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasValidLightComponent_bHasLightComponent, bool CallFunc_HasValidLightComponent_bHasLightComponent_1, bool CallFunc_Not_PreBool_ReturnValue);
	void OnEquippableItemReady(bool Success);
	void InitializeEquippableData(const struct FItemData& ItemData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FItemData_WeaponMelee& CallFunc_TryGetItemDataWeaponMelee_OutData, enum class EGetResult CallFunc_TryGetItemDataWeaponMelee_Branches, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void ClientEndAimAnim(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, bool CallFunc_IsValid_ReturnValue);
	void ClientBeginAimAnim(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeFromItemTable(bool* Succeeded, bool ParentSucceeded, const struct FTransform& Temp_struct_Variable, class UBP_CreatureSocketTraceComponent_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_InitializeFromItemTable_Succeeded, bool CallFunc_IsValid_ReturnValue);
	void EndAim(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void BeginAim(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ClientBeginAim();
	void ClientEndAim();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Weapon_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
};

}


