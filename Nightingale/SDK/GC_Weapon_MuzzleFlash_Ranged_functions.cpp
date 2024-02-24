#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Weapon_MuzzleFlash_Ranged.GC_Weapon_MuzzleFlash_Ranged_C
// (None)

class UClass* UGC_Weapon_MuzzleFlash_Ranged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Weapon_MuzzleFlash_Ranged_C");

	return Clss;
}


// GC_Weapon_MuzzleFlash_Ranged_C GC_Weapon_MuzzleFlash_Ranged.Default__GC_Weapon_MuzzleFlash_Ranged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Weapon_MuzzleFlash_Ranged_C* UGC_Weapon_MuzzleFlash_Ranged_C::GetDefaultObj()
{
	static class UGC_Weapon_MuzzleFlash_Ranged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Weapon_MuzzleFlash_Ranged_C*>(UGC_Weapon_MuzzleFlash_Ranged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Weapon_MuzzleFlash_Ranged.GC_Weapon_MuzzleFlash_Ranged_C.GetMuzzleFlashParameters
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstPerson                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldExecute                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   RangedAbilityResponse                                            (Parm, OutParm, HasGetValueTypeHash)
// bool                               CachedIsFirstPerson                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    Weapon                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedRangedWeapon_EquippedItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightRoot_bSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetLightweightRoot_Root                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetRootMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses (HasGetValueTypeHash)
// struct FS_MuzzleSwitchNames        CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch           (HasGetValueTypeHash)
// struct FS_BeamTracer               CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_Ranged_C::GetMuzzleFlashParameters(class AActor* Target, bool IsFirstPerson, bool* ShouldExecute, class USceneComponent** AttachToComponent, struct FS_RangedAbilityResponses* RangedAbilityResponse, bool CachedIsFirstPerson, class ABP_EquippableItemBase_C* Weapon, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, bool CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success, const struct FS_RangedAbilityResponses& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses, const struct FS_MuzzleSwitchNames& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch, const struct FS_BeamTracer& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_Ranged_C", "GetMuzzleFlashParameters");

	Params::UGC_Weapon_MuzzleFlash_Ranged_C_GetMuzzleFlashParameters_Params Parms{};

	Parms.Target = Target;
	Parms.IsFirstPerson = IsFirstPerson;
	Parms.CachedIsFirstPerson = CachedIsFirstPerson;
	Parms.Weapon = Weapon;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedRangedWeapon_EquippedItem = CallFunc_GetEquippedRangedWeapon_EquippedItem;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLightweightRoot_bSuccess = CallFunc_GetLightweightRoot_bSuccess;
	Parms.CallFunc_GetLightweightRoot_Root = CallFunc_GetLightweightRoot_Root;
	Parms.CallFunc_GetRootMesh_ReturnValue = CallFunc_GetRootMesh_ReturnValue;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldExecute != nullptr)
		*ShouldExecute = Parms.ShouldExecute;

	if (AttachToComponent != nullptr)
		*AttachToComponent = Parms.AttachToComponent;

	if (RangedAbilityResponse != nullptr)
		*RangedAbilityResponse = std::move(Parms.RangedAbilityResponse);

}

}


