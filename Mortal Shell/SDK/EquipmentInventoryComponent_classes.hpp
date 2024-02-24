#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xE0 - 0xC8)
// BlueprintGeneratedClass EquipmentInventoryComponent.EquipmentInventoryComponent_C
class UEquipmentInventoryComponent_C : public UInventoryComponent_C
{
public:
	class AEquipmentCharacter_C*                 EquipmentCharacterReference;                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInvModularWeapon_C*                   ModularWeaponInst;                                 // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                StaticMeshWeaponInst;                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEquipmentInventoryComponent_C* GetDefaultObj();

	void ConstructModularWeapon(const class FString& WeaponCode, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AInvModularWeapon_C* CallFunc_FinishSpawningActor_ReturnValue);
	void ItemIsValid(const struct FInventoryItem& Item, bool* IsValid_, bool CallFunc_IsValid_ReturnValue);
	void UpdateEquippedMeshes(int32 InventorySlot, const class FString& Local_WeaponCode, class UClass* Local_ItemClass, TSoftObjectPtr<class USkeletalMesh> Local_EquipmentMesh, TSoftObjectPtr<class UStaticMesh> Local_WorldMesh, const struct FInventoryItem& Local_Item, int32 Local_Slot, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetMainHandWeaponItemIndex_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AStaticMeshWeapon_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue);
	void LoadInventoryItems(int32 InventorySize, TArray<struct FInventoryItem>& InventoryItems, bool* Success, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LoadInventoryItems_Success);
	void ClearInventoryItem(int32 InventorySlot, bool* Success, bool CallFunc_ClearInventoryItem_Success);
	void SetInventoryItem(int32 InventorySlot, const struct FInventoryItem& InventoryItem, bool* Success, bool CallFunc_SetInventoryItem_Success);
	void GetEmptyInventorySpace(int32 IndexToStartSearch, bool* Success, int32* Index, bool LocalSuccess, int32 LocalIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_ItemIsValid_IsValid_, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void InitInventory(int32 InventorySize, bool* Success, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


