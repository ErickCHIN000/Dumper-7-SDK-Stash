#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RangedWeaponClip.BP_RangedWeaponClip_C
// (None)

class UClass* UBP_RangedWeaponClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RangedWeaponClip_C");

	return Clss;
}


// BP_RangedWeaponClip_C BP_RangedWeaponClip.Default__BP_RangedWeaponClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RangedWeaponClip_C* UBP_RangedWeaponClip_C::GetDefaultObj()
{
	static class UBP_RangedWeaponClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RangedWeaponClip_C*>(UBP_RangedWeaponClip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.OnInventoryEntryUpdated
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             UpdatedEntry                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInstanceData_AmmoClip      CallFunc_TryGetItemAmmoClip_AmmoClip                             (None)
// enum class EGetResult              CallFunc_TryGetItemAmmoClip_Branches                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAmmoClipsDifferent_bAreDifferent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::OnInventoryEntryUpdated(struct FInventoryEntry& UpdatedEntry, const struct FInstanceData_AmmoClip& CallFunc_TryGetItemAmmoClip_AmmoClip, enum class EGetResult CallFunc_TryGetItemAmmoClip_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_AreAmmoClipsDifferent_bAreDifferent, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "OnInventoryEntryUpdated");

	Params::UBP_RangedWeaponClip_C_OnInventoryEntryUpdated_Params Parms{};

	Parms.UpdatedEntry = UpdatedEntry;
	Parms.CallFunc_TryGetItemAmmoClip_AmmoClip = CallFunc_TryGetItemAmmoClip_AmmoClip;
	Parms.CallFunc_TryGetItemAmmoClip_Branches = CallFunc_TryGetItemAmmoClip_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AreAmmoClipsDifferent_bAreDifferent = CallFunc_AreAmmoClipsDifferent_bAreDifferent;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.FillAmmoClip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountReloaded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToAdd                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoMissing_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::FillAmmoClip(int32 Amount, int32* AmountReloaded, int32 AmountToAdd, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, int32 CallFunc_GetAmmoMissing_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "FillAmmoClip");

	Params::UBP_RangedWeaponClip_C_FillAmmoClip_Params Parms{};

	Parms.Amount = Amount;
	Parms.AmountToAdd = AmountToAdd;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_GetAmmoMissing_ReturnValue = CallFunc_GetAmmoMissing_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmountReloaded != nullptr)
		*AmountReloaded = Parms.AmountReloaded;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.GetLoadedAmmoType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDataReference          LoadedAmmoType                                                   (Parm, OutParm, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::GetLoadedAmmoType(struct FItemDataReference* LoadedAmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "GetLoadedAmmoType");

	Params::UBP_RangedWeaponClip_C_GetLoadedAmmoType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LoadedAmmoType != nullptr)
		*LoadedAmmoType = std::move(Parms.LoadedAmmoType);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.AreAmmoClipsDifferent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstanceData_AmmoClip      A                                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInstanceData_AmmoClip      B                                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bAreDifferent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FItemDataReference_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::AreAmmoClipsDifferent(const struct FInstanceData_AmmoClip& A, const struct FInstanceData_AmmoClip& B, bool* bAreDifferent, bool CallFunc_NotEqual_FItemDataReference_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "AreAmmoClipsDifferent");

	Params::UBP_RangedWeaponClip_C_AreAmmoClipsDifferent_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.CallFunc_NotEqual_FItemDataReference_ReturnValue = CallFunc_NotEqual_FItemDataReference_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAreDifferent != nullptr)
		*bAreDifferent = Parms.bAreDifferent;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.InitializeClipFromRangedWeaponData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData_WeaponRanged      RangedWeaponData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::InitializeClipFromRangedWeaponData(const struct FItemData_WeaponRanged& RangedWeaponData, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "InitializeClipFromRangedWeaponData");

	Params::UBP_RangedWeaponClip_C_InitializeClipFromRangedWeaponData_Params Parms{};

	Parms.RangedWeaponData = RangedWeaponData;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.UpdateClipStateFromInventory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstanceData_AmmoClip      PreviousAmmoData                                                 (Edit, BlueprintVisible)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::UpdateClipStateFromInventory(const struct FInstanceData_AmmoClip& PreviousAmmoData, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "UpdateClipStateFromInventory");

	Params::UBP_RangedWeaponClip_C_UpdateClipStateFromInventory_Params Parms{};

	Parms.PreviousAmmoData = PreviousAmmoData;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.Cache Owner Variables
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInstanceID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::Cache_Owner_Variables(bool* Succeeded, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_Guid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "Cache Owner Variables");

	Params::UBP_RangedWeaponClip_C_Cache_Owner_Variables_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetInstanceID_ReturnValue = CallFunc_GetInstanceID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.WriteAuthoritativeInstanceData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (Edit, BlueprintVisible)
// struct FJsonStruct                 Struct                                                           (Edit, BlueprintVisible)
// struct FDynamicTypedStructs        DynamicStructs                                                   (Edit, BlueprintVisible)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_AmmoClip      CallFunc_TryGetItemAmmoClip_AmmoClip                             (None)
// enum class EGetResult              CallFunc_TryGetItemAmmoClip_Branches                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAmmoClipsDifferent_bAreDifferent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Cache_Owner_Variables_Succeeded                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::WriteAuthoritativeInstanceData(TScriptInterface<class IItemContainer> Backpack, const struct FInventoryEntry& InventoryEntry, const struct FJsonStruct& Struct, const struct FDynamicTypedStructs& DynamicStructs, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FInstanceData_AmmoClip& CallFunc_TryGetItemAmmoClip_AmmoClip, enum class EGetResult CallFunc_TryGetItemAmmoClip_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_UpdateItem_ReturnValue, bool CallFunc_AreAmmoClipsDifferent_bAreDifferent, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, bool CallFunc_Cache_Owner_Variables_Succeeded, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "WriteAuthoritativeInstanceData");

	Params::UBP_RangedWeaponClip_C_WriteAuthoritativeInstanceData_Params Parms{};

	Parms.Backpack = Backpack;
	Parms.InventoryEntry = InventoryEntry;
	Parms.Struct = Struct;
	Parms.DynamicStructs = DynamicStructs;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_TryGetItemAmmoClip_AmmoClip = CallFunc_TryGetItemAmmoClip_AmmoClip;
	Parms.CallFunc_TryGetItemAmmoClip_Branches = CallFunc_TryGetItemAmmoClip_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_UpdateItem_ReturnValue = CallFunc_UpdateItem_ReturnValue;
	Parms.CallFunc_AreAmmoClipsDifferent_bAreDifferent = CallFunc_AreAmmoClipsDifferent_bAreDifferent;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_Cache_Owner_Variables_Succeeded = CallFunc_Cache_Owner_Variables_Succeeded;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.GetClipSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ClipSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::GetClipSize(int32* ClipSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "GetClipSize");

	Params::UBP_RangedWeaponClip_C_GetClipSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ClipSize != nullptr)
		*ClipSize = Parms.ClipSize;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.CanFire
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmmoNeeded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForValidItem_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_RangedWeaponClip_C::CanFire(int32 AmmoNeeded, class AActor* CallFunc_GetOwner_ReturnValue, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckForValidItem_ItemValid, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "CanFire");

	Params::UBP_RangedWeaponClip_C_CanFire_Params Parms{};

	Parms.AmmoNeeded = AmmoNeeded;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckForValidItem_ItemValid = CallFunc_CheckForValidItem_ItemValid;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.GetAmmoMissing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetClipSize_ClipSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_RangedWeaponClip_C::GetAmmoMissing(int32 CallFunc_GetClipSize_ClipSize, int32 CallFunc_GetAmmoRemaining_Count, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "GetAmmoMissing");

	Params::UBP_RangedWeaponClip_C_GetAmmoMissing_Params Parms{};

	Parms.CallFunc_GetClipSize_ClipSize = CallFunc_GetClipSize_ClipSize;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.UseAmmo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DidConsumeBullet                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Supply_Lines_Perk_Chance_Chance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::UseAmmo(int32 Amount, bool* DidConsumeBullet, double CallFunc_Get_Supply_Lines_Perk_Chance_Chance, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_RandomFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "UseAmmo");

	Params::UBP_RangedWeaponClip_C_UseAmmo_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_Get_Supply_Lines_Perk_Chance_Chance = CallFunc_Get_Supply_Lines_Perk_Chance_Chance;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetAmmoRemaining_Count_1 = CallFunc_GetAmmoRemaining_Count_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DidConsumeBullet != nullptr)
		*DidConsumeBullet = Parms.DidConsumeBullet;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.GetAmmoRemaining
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::GetAmmoRemaining(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "GetAmmoRemaining");

	Params::UBP_RangedWeaponClip_C_GetAmmoRemaining_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_RangedWeaponClip_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.ExecuteUbergraph_BP_RangedWeaponClip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Cache_Owner_Variables_Succeeded                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponClip_C::ExecuteUbergraph_BP_RangedWeaponClip(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Cache_Owner_Variables_Succeeded, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "ExecuteUbergraph_BP_RangedWeaponClip");

	Params::UBP_RangedWeaponClip_C_ExecuteUbergraph_BP_RangedWeaponClip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Cache_Owner_Variables_Succeeded = CallFunc_Cache_Owner_Variables_Succeeded;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.OnAmmoChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RangedWeaponClip_C::OnAmmoChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "OnAmmoChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeaponClip.BP_RangedWeaponClip_C.OnReloadFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RangedWeaponClip_C::OnReloadFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponClip_C", "OnReloadFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


