#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x3C8 - 0x2A8)
// BlueprintGeneratedClass BP_LightweightAttachedItem.BP_LightweightAttachedItem_C
class ABP_LightweightAttachedItem_C : public ALightweightAttachedItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    ScopedAk_weapon;                                   // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AsyncAssetLoader_C*                AsyncAssetLoader;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FItemDataReference                    ItemId;                                            // 0x2C0(0x80)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bEquipped;                                         // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EquippableItemBase_C*              EquippedItem;                                      // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAsyncLoadComplete;                               // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsAsyncDataInitialized;                            // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CharacterCustomization_Component_C* ParentCustomizationComponent;                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         ItemMesh1P;                                        // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bFullBodyVersion;                                  // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_7ABC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VFXSocket;                                         // 0x37C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemLightComponent*                   CachedLightComponent;                              // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FItemData_LightEmitterLights          ItemLightData;                                     // 0x390(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bShouldLightNeverCastShadows;                      // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLightweightLightsSpawned;                        // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_LightweightAttachedItem_C* GetDefaultObj();

	void SpawnLightsForLightComponent(class USkinnedAsset* CallFunc_GetSkinnedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void HandleLightVisibility(bool bShowLight, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldShowLight_bShowLight, bool CallFunc_IsValid_ReturnValue);
	void ShouldShowLight(bool* bShowLight, bool CallFunc_GetDurability_HasDurability, const struct FItemInstanceDurabilityData& CallFunc_GetDurability_DurabilityData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void CacheLightComponent(class UItemLightComponent* NewLightComponent, const struct FItemData_LightEmitterLights& LightData, bool bShouldNeverCastShadows, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void HandleVisibility(bool bIsEquipped, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void InitializeAnimData(const struct FItemData& ItemData, const struct FItemData_Animation& CallFunc_TryGetItemDataAnimation_OutData, enum class EGetResult CallFunc_TryGetItemDataAnimation_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue);
	void InitializeMeshData(const struct FItemData& ItemData, const struct FItemData_MeshInfo& CallFunc_TryGetItemDataMeshInfo_OutData, enum class EGetResult CallFunc_TryGetItemDataMeshInfo_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void StopMontage(class UAnimMontage* Montage, class UAnimInstance* LAnimInstance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetDefaultBlendOutTime_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void JumpToMontageSection(class FName SectionName, class UAnimMontage* Montage, class UAnimInstance* LAnimInstance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnEquippedInternal();
	void GetItemID(struct FItemDataReference* RowHandle);
	void AttachAkToMuzzle(bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetIsAsyncDataInitialized(bool* IsAsyncDataInitialized);
	TArray<TSoftObjectPtr<class UObject>> GetAsyncAssets(TSoftObjectPtr<class USkeletalMesh> CallFunc_GetItemMeshes_Mesh3P, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetItemMeshes_Mesh1P, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array);
	void InitializeFromEquippable(class ABP_EquippableItemBase_C* Equippable);
	void ExitItemMontage(class UAnimInstance* LAnimInstance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue);
	void InitializeFromItemTable(bool* Succeeded, const struct FItemData& ItemData, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	void OnNotifyEnd_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName);
	void OnNotifyBegin_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName);
	void OnInterrupted_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName);
	void OnBlendOut_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName);
	void OnCompleted_20555F9243FF292A6F5E319684E7EF76(class FName NotifyName);
	void PlayItemMontage(class UAnimMontage* Montage, double PlayRate);
	void ReceiveBeginPlay();
	void AsyncLoadComplete();
	void ExecuteUbergraph_BP_LightweightAttachedItem(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_InitializeFromItemTable_Succeeded, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Montage, double K2Node_CustomEvent_PlayRate, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<TSoftObjectPtr<class UObject>>& CallFunc_GetAsyncAssets_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast);
	void OnLightweightLightsSpawned__DelegateSignature();
	void OnAsyncLoadComplete__DelegateSignature();
};

}


