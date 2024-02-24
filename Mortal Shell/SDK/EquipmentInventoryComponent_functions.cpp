#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EquipmentInventoryComponent.EquipmentInventoryComponent_C
// (None)

class UClass* UEquipmentInventoryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipmentInventoryComponent_C");

	return Clss;
}


// EquipmentInventoryComponent_C EquipmentInventoryComponent.Default__EquipmentInventoryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipmentInventoryComponent_C* UEquipmentInventoryComponent_C::GetDefaultObj()
{
	static class UEquipmentInventoryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipmentInventoryComponent_C*>(UEquipmentInventoryComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.ConstructModularWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInvModularWeapon_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentInventoryComponent_C::ConstructModularWeapon(const class FString& WeaponCode, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AInvModularWeapon_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "ConstructModularWeapon");

	Params::UEquipmentInventoryComponent_C_ConstructModularWeapon_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.ItemIsValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryItem              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsValid_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentInventoryComponent_C::ItemIsValid(const struct FInventoryItem& Item, bool* IsValid_, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "ItemIsValid");

	Params::UEquipmentInventoryComponent_C_ItemIsValid_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid_ != nullptr)
		*IsValid_ = Parms.IsValid_;

}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.UpdateEquippedMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_WeaponCode                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      Local_ItemClass                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>Local_EquipmentMesh                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UStaticMesh>  Local_WorldMesh                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_Slot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMainHandWeaponItemIndex_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshWeapon_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentInventoryComponent_C::UpdateEquippedMeshes(int32 InventorySlot, const class FString& Local_WeaponCode, class UClass* Local_ItemClass, TSoftObjectPtr<class USkeletalMesh> Local_EquipmentMesh, TSoftObjectPtr<class UStaticMesh> Local_WorldMesh, const struct FInventoryItem& Local_Item, int32 Local_Slot, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetMainHandWeaponItemIndex_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AStaticMeshWeapon_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "UpdateEquippedMeshes");

	Params::UEquipmentInventoryComponent_C_UpdateEquippedMeshes_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.Local_WeaponCode = Local_WeaponCode;
	Parms.Local_ItemClass = Local_ItemClass;
	Parms.Local_EquipmentMesh = Local_EquipmentMesh;
	Parms.Local_WorldMesh = Local_WorldMesh;
	Parms.Local_Item = Local_Item;
	Parms.Local_Slot = Local_Slot;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_1 = K2Node_DynamicCast_AsSkeletal_Mesh_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetMainHandWeaponItemIndex_Index = CallFunc_GetMainHandWeaponItemIndex_Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.LoadInventoryItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      InventoryItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadInventoryItems_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentInventoryComponent_C::LoadInventoryItems(int32 InventorySize, TArray<struct FInventoryItem>& InventoryItems, bool* Success, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LoadInventoryItems_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "LoadInventoryItems");

	Params::UEquipmentInventoryComponent_C_LoadInventoryItems_Params Parms{};

	Parms.InventorySize = InventorySize;
	Parms.InventoryItems = InventoryItems;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadInventoryItems_Success = CallFunc_LoadInventoryItems_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.ClearInventoryItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClearInventoryItem_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentInventoryComponent_C::ClearInventoryItem(int32 InventorySlot, bool* Success, bool CallFunc_ClearInventoryItem_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "ClearInventoryItem");

	Params::UEquipmentInventoryComponent_C_ClearInventoryItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.CallFunc_ClearInventoryItem_Success = CallFunc_ClearInventoryItem_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.SetInventoryItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentInventoryComponent_C::SetInventoryItem(int32 InventorySlot, const struct FInventoryItem& InventoryItem, bool* Success, bool CallFunc_SetInventoryItem_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "SetInventoryItem");

	Params::UEquipmentInventoryComponent_C_SetInventoryItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.GetEmptyInventorySpace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexToStartSearch                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalSuccess                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LocalIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_ItemIsValid_IsValid_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UEquipmentInventoryComponent_C::GetEmptyInventorySpace(int32 IndexToStartSearch, bool* Success, int32* Index, bool LocalSuccess, int32 LocalIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_ItemIsValid_IsValid_, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "GetEmptyInventorySpace");

	Params::UEquipmentInventoryComponent_C_GetEmptyInventorySpace_Params Parms{};

	Parms.IndexToStartSearch = IndexToStartSearch;
	Parms.LocalSuccess = LocalSuccess;
	Parms.LocalIndex = LocalIndex;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ItemIsValid_IsValid_ = CallFunc_ItemIsValid_IsValid_;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function EquipmentInventoryComponent.EquipmentInventoryComponent_C.InitInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentInventoryComponent_C::InitInventory(int32 InventorySize, bool* Success, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentInventoryComponent_C", "InitInventory");

	Params::UEquipmentInventoryComponent_C_InitInventory_Params Parms{};

	Parms.InventorySize = InventorySize;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


