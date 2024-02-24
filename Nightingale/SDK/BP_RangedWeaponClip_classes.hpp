#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x220 - 0xA0)
// BlueprintGeneratedClass BP_RangedWeaponClip.BP_RangedWeaponClip_C
class UBP_RangedWeaponClip_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ClipSize;                                          // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6975[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReloadFinished;                                  // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInventoryComponentBase*               InventoryComponent;                                // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAmmoChanged;                                     // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGuid                                 OwningInstanceID;                                  // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemDataReference>            AllowedAmmoTypes;                                  // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_698A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstanceData_AmmoClip                CurrentLoadedAmmoData;                             // 0x100(0x90)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FInstanceData_AmmoClip                PreviousLoadedAmmoData;                            // 0x190(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_RangedWeaponClip_C* GetDefaultObj();

	void OnInventoryEntryUpdated(struct FInventoryEntry& UpdatedEntry, const struct FInstanceData_AmmoClip& CallFunc_TryGetItemAmmoClip_AmmoClip, enum class EGetResult CallFunc_TryGetItemAmmoClip_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_AreAmmoClipsDifferent_bAreDifferent, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void FillAmmoClip(int32 Amount, int32* AmountReloaded, int32 AmountToAdd, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, int32 CallFunc_GetAmmoMissing_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, bool CallFunc_IsValid_ReturnValue);
	void GetLoadedAmmoType(struct FItemDataReference* LoadedAmmoType);
	void AreAmmoClipsDifferent(const struct FInstanceData_AmmoClip& A, const struct FInstanceData_AmmoClip& B, bool* bAreDifferent, bool CallFunc_NotEqual_FItemDataReference_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void InitializeClipFromRangedWeaponData(const struct FItemData_WeaponRanged& RangedWeaponData, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateClipStateFromInventory(const struct FInstanceData_AmmoClip& PreviousAmmoData, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue);
	void Cache_Owner_Variables(bool* Succeeded, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_Guid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void WriteAuthoritativeInstanceData(TScriptInterface<class IItemContainer> Backpack, const struct FInventoryEntry& InventoryEntry, const struct FJsonStruct& Struct, const struct FDynamicTypedStructs& DynamicStructs, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FInstanceData_AmmoClip& CallFunc_TryGetItemAmmoClip_AmmoClip, enum class EGetResult CallFunc_TryGetItemAmmoClip_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_UpdateItem_ReturnValue, bool CallFunc_AreAmmoClipsDifferent_bAreDifferent, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, bool CallFunc_Cache_Owner_Variables_Succeeded, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue);
	void GetClipSize(int32* ClipSize);
	bool CanFire(int32 AmmoNeeded, class AActor* CallFunc_GetOwner_ReturnValue, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckForValidItem_ItemValid, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue);
	int32 GetAmmoMissing(int32 CallFunc_GetClipSize_ClipSize, int32 CallFunc_GetAmmoRemaining_Count, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void UseAmmo(int32 Amount, bool* DidConsumeBullet, double CallFunc_Get_Supply_Lines_Perk_Chance_Chance, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_RandomFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetAmmoRemaining(int32* Count);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RangedWeaponClip(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Cache_Owner_Variables_Succeeded, bool CallFunc_IsValid_ReturnValue);
	void OnAmmoChanged__DelegateSignature();
	void OnReloadFinished__DelegateSignature();
};

}


