#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bpn_hero_forceWeaponCooldownElapsed.bpn_hero_forceWeaponCooldownElapsed_C
// (None)

class UClass* Ubpn_hero_forceWeaponCooldownElapsed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bpn_hero_forceWeaponCooldownElapsed_C");

	return Clss;
}


// bpn_hero_forceWeaponCooldownElapsed_C bpn_hero_forceWeaponCooldownElapsed.Default__bpn_hero_forceWeaponCooldownElapsed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubpn_hero_forceWeaponCooldownElapsed_C* Ubpn_hero_forceWeaponCooldownElapsed_C::GetDefaultObj()
{
	static class Ubpn_hero_forceWeaponCooldownElapsed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubpn_hero_forceWeaponCooldownElapsed_C*>(Ubpn_hero_forceWeaponCooldownElapsed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bpn_hero_forceWeaponCooldownElapsed.bpn_hero_forceWeaponCooldownElapsed_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbp_ch_igorfpp_01_C*        K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Ubpn_hero_forceWeaponCooldownElapsed_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAbp_ch_igorfpp_01_C* K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01, bool K2Node_DynamicCast_bSuccess, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_hero_forceWeaponCooldownElapsed_C", "Received_Notify");

	Params::Ubpn_hero_forceWeaponCooldownElapsed_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01 = K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCGWeapon = K2Node_DynamicCast_AsCGWeapon;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


