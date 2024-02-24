#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Weapon_FiringSound.GC_Weapon_FiringSound_C
// (None)

class UClass* UGC_Weapon_FiringSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Weapon_FiringSound_C");

	return Clss;
}


// GC_Weapon_FiringSound_C GC_Weapon_FiringSound.Default__GC_Weapon_FiringSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Weapon_FiringSound_C* UGC_Weapon_FiringSound_C::GetDefaultObj()
{
	static class UGC_Weapon_FiringSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Weapon_FiringSound_C*>(UGC_Weapon_FiringSound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Weapon_FiringSound.GC_Weapon_FiringSound_C.GetSoundLocation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_RangedWeapon_Base_C*     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetRootMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGC_Weapon_FiringSound_C::GetSoundLocation(class ABP_RangedWeapon_Base_C* Weapon, struct FVector* Location, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_FiringSound_C", "GetSoundLocation");

	Params::UGC_Weapon_FiringSound_C_GetSoundLocation_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRootMesh_ReturnValue = CallFunc_GetRootMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function GC_Weapon_FiringSound.GC_Weapon_FiringSound_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      AmmoSwitchesRef                                                  (Edit, BlueprintVisible)
// class ABP_RangedWeapon_Base_C*     Weapon                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      K2Node_MakeArray_Array                                           (ReferenceParm)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedRangedWeapon_EquippedItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses (HasGetValueTypeHash)
// struct FS_MuzzleSwitchNames        CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch           (HasGetValueTypeHash)
// struct FS_BeamTracer               CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer             (HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkRtpc*                     K2Node_DynamicCast_AsAk_Rtpc                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_DynamicCast_AsAk_Switch_Value                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Scan_for_Canyon_CanyonValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetFiringSound_FireSound                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Weapon_FiringSound_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const TArray<class UAkSwitchValue*>& AmmoSwitchesRef, class ABP_RangedWeapon_Base_C* Weapon, TArray<class UAkSwitchValue*>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, bool CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success, const struct FS_RangedAbilityResponses& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses, const struct FS_MuzzleSwitchNames& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch, const struct FS_BeamTracer& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UAkRtpc* K2Node_DynamicCast_AsAk_Rtpc, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAkSwitchValue* K2Node_DynamicCast_AsAk_Switch_Value, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_Scan_for_Canyon_CanyonValue, class UAkAudioEvent* CallFunc_GetFiringSound_FireSound, bool CallFunc_OnExecute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_FiringSound_C", "OnExecute");

	Params::UGC_Weapon_FiringSound_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.AmmoSwitchesRef = AmmoSwitchesRef;
	Parms.Weapon = Weapon;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedRangedWeapon_EquippedItem = CallFunc_GetEquippedRangedWeapon_EquippedItem;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Rtpc = K2Node_DynamicCast_AsAk_Rtpc;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Switch_Value = K2Node_DynamicCast_AsAk_Switch_Value;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Scan_for_Canyon_CanyonValue = CallFunc_Scan_for_Canyon_CanyonValue;
	Parms.CallFunc_GetFiringSound_FireSound = CallFunc_GetFiringSound_FireSound;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


