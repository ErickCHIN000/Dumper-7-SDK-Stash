#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C
// (None)

class UClass* UGC_Weapon_MuzzleFlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Weapon_MuzzleFlash_C");

	return Clss;
}


// GC_Weapon_MuzzleFlash_C GC_Weapon_MuzzleFlash.Default__GC_Weapon_MuzzleFlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Weapon_MuzzleFlash_C* UGC_Weapon_MuzzleFlash_C::GetDefaultObj()
{
	static class UGC_Weapon_MuzzleFlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Weapon_MuzzleFlash_C*>(UGC_Weapon_MuzzleFlash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.SpawnMuzzleFlash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   RangedAbilityResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               FirstPerson                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_C::SpawnMuzzleFlash(class UObject* MyTarget, class USceneComponent* AttachToComponent, struct FS_RangedAbilityResponses& RangedAbilityResponse, bool FirstPerson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_C", "SpawnMuzzleFlash");

	Params::UGC_Weapon_MuzzleFlash_C_SpawnMuzzleFlash_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.AttachToComponent = AttachToComponent;
	Parms.RangedAbilityResponse = RangedAbilityResponse;
	Parms.FirstPerson = FirstPerson;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.IsFirstPerson
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstPerson                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedRangedWeapon_EquippedItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPersonCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_C::IsFirstPerson(class AActor* MyTarget, bool* IsFirstPerson, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsFirstPersonCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_C", "IsFirstPerson");

	Params::UGC_Weapon_MuzzleFlash_C_IsFirstPerson_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedRangedWeapon_EquippedItem = CallFunc_GetEquippedRangedWeapon_EquippedItem;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_IsFirstPersonCharacter_ReturnValue = CallFunc_IsFirstPersonCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFirstPerson != nullptr)
		*IsFirstPerson = Parms.IsFirstPerson;

}


// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.GetMuzzleFlashParameters
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstPerson                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldExecute                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   RangedAbilityResponse                                            (Parm, OutParm, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_C::GetMuzzleFlashParameters(class AActor* Target, bool IsFirstPerson, bool* ShouldExecute, class USceneComponent** AttachToComponent, struct FS_RangedAbilityResponses* RangedAbilityResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_C", "GetMuzzleFlashParameters");

	Params::UGC_Weapon_MuzzleFlash_C_GetMuzzleFlashParameters_Params Parms{};

	Parms.Target = Target;
	Parms.IsFirstPerson = IsFirstPerson;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldExecute != nullptr)
		*ShouldExecute = Parms.ShouldExecute;

	if (AttachToComponent != nullptr)
		*AttachToComponent = Parms.AttachToComponent;

	if (RangedAbilityResponse != nullptr)
		*RangedAbilityResponse = std::move(Parms.RangedAbilityResponse);

}


// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     Weapon                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPerson_IsFirstPerson                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMuzzleFlashParameters_ShouldExecute                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetMuzzleFlashParameters_AttachToComponent              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   CallFunc_GetMuzzleFlashParameters_RangedAbilityResponse          (HasGetValueTypeHash)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Weapon_MuzzleFlash_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_RangedWeapon_Base_C* Weapon, bool CallFunc_IsFirstPerson_IsFirstPerson, bool CallFunc_GetMuzzleFlashParameters_ShouldExecute, class USceneComponent* CallFunc_GetMuzzleFlashParameters_AttachToComponent, const struct FS_RangedAbilityResponses& CallFunc_GetMuzzleFlashParameters_RangedAbilityResponse, bool CallFunc_OnExecute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_C", "OnExecute");

	Params::UGC_Weapon_MuzzleFlash_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.Weapon = Weapon;
	Parms.CallFunc_IsFirstPerson_IsFirstPerson = CallFunc_IsFirstPerson_IsFirstPerson;
	Parms.CallFunc_GetMuzzleFlashParameters_ShouldExecute = CallFunc_GetMuzzleFlashParameters_ShouldExecute;
	Parms.CallFunc_GetMuzzleFlashParameters_AttachToComponent = CallFunc_GetMuzzleFlashParameters_AttachToComponent;
	Parms.CallFunc_GetMuzzleFlashParameters_RangedAbilityResponse = CallFunc_GetMuzzleFlashParameters_RangedAbilityResponse;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


