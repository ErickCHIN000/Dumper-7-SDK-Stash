#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x259 - 0x1F8)
// BlueprintGeneratedClass bc_UpgradeSystem_New_02.bc_UpgradeSystem_New_02_C
class Ubc_UpgradeSystem_New_02_C : public USceneComponent
{
public:
	uint8                                        Pad_1D84[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_Upgrades_Main_C*                  UI;                                                // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ACGActiveItem*                         SpawnedItem;                                       // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Item_ID;                                           // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawned;                                           // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemId;                                            // 0x23C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OldUniqueID;                                       // 0x244(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunChoice                        GunChoice;                                         // 0x24C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOnField;                                         // 0x24D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendInDuration;                                   // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendOutDuration;                                  // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemShouldShow;                                    // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubc_UpgradeSystem_New_02_C* GetDefaultObj();

	void GetWeaponType(class UClass* Weapon, enum class EGunChoice* WeaponType, bool Temp_bool_Variable, TSubclassOf<class Aba_aa_ak47_00_C> K2Node_ClassDynamicCast_AsBa_Aa_Ak_47_00, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_aa_mp133_00_C> K2Node_ClassDynamicCast_AsBa_Aa_Mp_133_00, bool K2Node_ClassDynamicCast_bSuccess_1, TSubclassOf<class Aba_aa_nagant_00_C> K2Node_ClassDynamicCast_AsBa_Aa_Nagant_00, bool K2Node_ClassDynamicCast_bSuccess_2, enum class EGunChoice Temp_byte_Variable, enum class EGunChoice Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EGunChoice K2Node_Select_Default, enum class EGunChoice Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class EGunChoice K2Node_Select_Default_1, enum class EGunChoice Temp_byte_Variable_3, enum class EGunChoice K2Node_Select_Default_2);
	void InitWidget(enum class EGunChoice NewParam, class UWid_Upgrades_Main_C* CallFunc_Create_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class Aba_UpgradeSystem_Base_00_C* K2Node_DynamicCast_AsBa_Upgrade_System_Base_00, bool K2Node_DynamicCast_bSuccess);
	void Start(enum class EGunChoice GunType, bool IsOnField);
	void Initialize(class UStaticMeshComponent* Mesh);
	void End();
	void NextTab();
	void PreviousTab();
	void LeftItem();
	void RightItem();
	void Craft();
	void NewSelectionUI(class FName ItemId, const struct FInventoryEntry& Item, class FName ItemUniqueID);
	void Back();
	void GoBackUI();
	void DestroySpawnedItem();
	void ExecuteUbergraph_bc_UpgradeSystem_New_02(int32 EntryPoint, bool CallFunc_HasEnoughMaterials_Result, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, enum class EGunChoice K2Node_CustomEvent_GunType, bool K2Node_CustomEvent_IsOnField, class UStaticMeshComponent* K2Node_CustomEvent_Mesh, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName K2Node_CustomEvent_ItemID, const struct FInventoryEntry& K2Node_CustomEvent_Item, class FName K2Node_CustomEvent_ItemUniqueID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class ACGWeapon> K2Node_ClassDynamicCast_AsCGWeapon, bool K2Node_ClassDynamicCast_bSuccess_1, enum class EGunChoice CallFunc_GetWeaponType_WeaponType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_SetStaticMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IInteractable> K2Node_DynamicCast_AsInteractable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsObjectVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryItemByName_NewParam, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, int32 Temp_int_Loop_Counter_Variable_2, TArray<class FName>& CallFunc_GetUpgrades_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class FName CallFunc_GetItemUnderIndex_ID, class FName CallFunc_GetItemUnderIndex_UniqueID, const struct FVector2D& CallFunc_GetItemUnderIndex_InventoryPosition, class FName CallFunc_GetItemUnderIndex_SocketName, const struct FVector& CallFunc_GetItemUnderIndex_SocketOffset, const struct FRotator& CallFunc_GetItemUnderIndex_SocketRotationOffset, enum class EUpgradeType CallFunc_GetItemUnderIndex_UpgradeType, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class FName>& CallFunc_GetUpgrades_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_GetItemInfo_IsValid_1, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon_1, bool K2Node_DynamicCast_bSuccess_2, TArray<class UActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class USceneComponent* K2Node_DynamicCast_AsScene_Component, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, TArray<class FName>& CallFunc_GetCraftedUpgrades_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Array_Contains_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_2, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IInteractable> K2Node_DynamicCast_AsInteractable_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_NameName_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_HideShowActiveItem_OutActionSuccessful, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void GoBack__DelegateSignature();
};

}


