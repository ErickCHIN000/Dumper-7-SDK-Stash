#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C
// (None)

class UClass* UBP_ActionableBehaviour_FireArm_FireController_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_FireArm_FireController_Charge_C");

	return Clss;
}


// BP_ActionableBehaviour_FireArm_FireController_Charge_C BP_ActionableBehaviour_FireArm_FireController_Charge.Default__BP_ActionableBehaviour_FireArm_FireController_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* UBP_ActionableBehaviour_FireArm_FireController_Charge_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_FireArm_FireController_Charge_C*>(UBP_ActionableBehaviour_FireArm_FireController_Charge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetFiring
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Firing                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::GetFiring(bool* Firing, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "GetFiring");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_GetFiring_Params Parms{};

	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;

	UObject::ProcessEvent(Func, &Parms);

	if (Firing != nullptr)
		*Firing = Parms.Firing;

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.HandleRep_WantsFire
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::HandleRep_WantsFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "HandleRep_WantsFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.FinishFiring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::FinishFiring()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "FinishFiring");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.BeginFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECanFireReturnType      CallFunc_CanFire_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::BeginFire(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ECanFireReturnType CallFunc_CanFire_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "BeginFire");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_BeginFire_Params Parms{};

	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanFire_ReturnValue = CallFunc_CanFire_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.IsChargedForFiring
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Charged                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::IsChargedForFiring(bool* Charged, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "IsChargedForFiring");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_IsChargedForFiring_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Charged != nullptr)
		*Charged = Parms.Charged;

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.EndFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WillFire                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFiring_Firing                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECanFireReturnType      CallFunc_CanFire_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChargedForFiring_Charged                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::EndFire(bool WillFire, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_GetFiring_Firing, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ECanFireReturnType CallFunc_CanFire_ReturnValue, bool CallFunc_IsChargedForFiring_Charged, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "EndFire");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_EndFire_Params Parms{};

	Parms.WillFire = WillFire;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_GetFiring_Firing = CallFunc_GetFiring_Firing;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanFire_ReturnValue = CallFunc_CanFire_ReturnValue;
	Parms.CallFunc_IsChargedForFiring_Charged = CallFunc_IsChargedForFiring_Charged;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.CancelCharging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AimController_Base_C*CallFunc_GetAimController_AimController                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::CancelCharging(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "CancelCharging");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_CancelCharging_Params Parms{};

	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAimController_AimController = CallFunc_GetAimController_AimController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.CheckCancelCharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCharging_IsCharging                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::CheckCancelCharge(bool CallFunc_IsCharging_IsCharging, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "CheckCancelCharge");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_CheckCancelCharge_Params Parms{};

	Parms.CallFunc_IsCharging_IsCharging = CallFunc_IsCharging_IsCharging;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.TickCameraEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DesiredShakeScale                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraShakeBase*            CallFunc_StartCameraShake_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMatineeCameraShake*         CallFunc_Conv_MatineeCameraShake_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::TickCameraEffects(float DesiredShakeScale, bool CallFunc_IsAiming_IsAiming, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UMatineeCameraShake* CallFunc_Conv_MatineeCameraShake_ReturnValue, float Temp_wildcard_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "TickCameraEffects");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_TickCameraEffects_Params Parms{};

	Parms.DesiredShakeScale = DesiredShakeScale;
	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_StartCameraShake_ReturnValue = CallFunc_StartCameraShake_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_MatineeCameraShake_ReturnValue = CallFunc_Conv_MatineeCameraShake_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetChargeTimeMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_ActionableBehaviour_FireArm_FireController_Charge_C::GetChargeTimeMultiplier(int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "GetChargeTimeMultiplier");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_GetChargeTimeMultiplier_Params Parms{};

	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.TickCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChargeTimeMultiplier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChargeTimeMultiplier_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharging_IsCharging                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::TickCharge(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_GetChargeTimeMultiplier_ReturnValue, float CallFunc_GetChargeTimeMultiplier_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsCharging_IsCharging, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_Constant_ReturnValue_1, float CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "TickCharge");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_TickCharge_Params Parms{};

	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetChargeTimeMultiplier_ReturnValue = CallFunc_GetChargeTimeMultiplier_ReturnValue;
	Parms.CallFunc_GetChargeTimeMultiplier_ReturnValue_1 = CallFunc_GetChargeTimeMultiplier_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue = CallFunc_GetPlayerCharacterState_ReturnValue;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_IsCharging_IsCharging = CallFunc_IsCharging_IsCharging;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetLaunchForce
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentChargePower_ChargePower                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLaunchForce_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

float UBP_ActionableBehaviour_FireArm_FireController_Charge_C::GetLaunchForce(int32 CallFunc_GetStat_Value, float CallFunc_GetCurrentChargePower_ChargePower, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetLaunchForce_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "GetLaunchForce");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_GetLaunchForce_Params Parms{};

	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;
	Parms.CallFunc_GetCurrentChargePower_ChargePower = CallFunc_GetCurrentChargePower_ChargePower;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLaunchForce_ReturnValue = CallFunc_GetLaunchForce_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.IsCharging
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsCharging                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFiring_Firing                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_IsReloading                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::IsCharging(bool* IsCharging, bool CallFunc_GetFiring_Firing, bool CallFunc_IsReloading_IsReloading, bool CallFunc_IsAiming_IsAiming, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "IsCharging");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_IsCharging_Params Parms{};

	Parms.CallFunc_GetFiring_Firing = CallFunc_GetFiring_Firing;
	Parms.CallFunc_IsReloading_IsReloading = CallFunc_IsReloading_IsReloading;
	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCharging != nullptr)
		*IsCharging = Parms.IsCharging;

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.UpdatePersistentAudioCharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCharging_IsCharging                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentChargePower_ChargePower                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::UpdatePersistentAudioCharge(bool CallFunc_IsCharging_IsCharging, float CallFunc_GetCurrentChargePower_ChargePower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "UpdatePersistentAudioCharge");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_UpdatePersistentAudioCharge_Params Parms{};

	Parms.CallFunc_IsCharging_IsCharging = CallFunc_IsCharging_IsCharging;
	Parms.CallFunc_GetCurrentChargePower_ChargePower = CallFunc_GetCurrentChargePower_ChargePower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetCurrentChargePower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ChargePower                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::GetCurrentChargePower(float* ChargePower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "GetCurrentChargePower");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_GetCurrentChargePower_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ChargePower != nullptr)
		*ChargePower = Parms.ChargePower;

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "ReceiveTick");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.OnReloadPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::OnReloadPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "OnReloadPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ChargeShakeBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::ChargeShakeBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "ChargeShakeBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ChargeShakeEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::ChargeShakeEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "ChargeShakeEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.LateSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::LateSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "LateSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.Server_CancelCharge
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::Server_CancelCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "Server_CancelCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.Server_OnReleasedShot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClientFired                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ClientChargePower                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::Server_OnReleasedShot(bool ClientFired, float ClientChargePower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "Server_OnReleasedShot");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_Server_OnReleasedShot_Params Parms{};

	Parms.ClientFired = ClientFired;
	Parms.ClientChargePower = ClientChargePower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AimController_Base_C*CallFunc_GetAimController_AimController                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_AimController_Base_C*CallFunc_GetAimController_AimController_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ClientFired                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_ClientChargePower                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ActionableBehaviour_FireArm_FireController_Charge_C::ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsValid_ReturnValue_1, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_ClientFired, float K2Node_CustomEvent_ClientChargePower, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_Charge_C", "ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge");

	Params::UBP_ActionableBehaviour_FireArm_FireController_Charge_C_ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAimController_AimController = CallFunc_GetAimController_AimController;
	Parms.CallFunc_GetAimController_AimController_1 = CallFunc_GetAimController_AimController_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_ClientFired = K2Node_CustomEvent_ClientFired;
	Parms.K2Node_CustomEvent_ClientChargePower = K2Node_CustomEvent_ClientChargePower;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


