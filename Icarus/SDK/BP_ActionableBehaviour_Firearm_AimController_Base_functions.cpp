#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C
// (None)

class UClass* UBP_ActionableBehaviour_Firearm_AimController_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Firearm_AimController_Base_C");

	return Clss;
}


// BP_ActionableBehaviour_Firearm_AimController_Base_C BP_ActionableBehaviour_Firearm_AimController_Base.Default__BP_ActionableBehaviour_Firearm_AimController_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Firearm_AimController_Base_C* UBP_ActionableBehaviour_Firearm_AimController_Base_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Firearm_AimController_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Firearm_AimController_Base_C*>(UBP_ActionableBehaviour_Firearm_AimController_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.WantsBowMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWantsBowMode                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetFireController_FireController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_FireArm_FireController_Charge_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::WantsBowMode(bool* bWantsBowMode, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "WantsBowMode");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_WantsBowMode_Params Parms{};

	Parms.CallFunc_GetFireController_FireController = CallFunc_GetFireController_FireController;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bWantsBowMode != nullptr)
		*bWantsBowMode = Parms.bWantsBowMode;

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.WantsShowCrosshair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowCrosshair                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WantsBowMode_bWantsBowMode                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowAimCrosshair_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::WantsShowCrosshair(bool* bShowCrosshair, bool CallFunc_WantsBowMode_bWantsBowMode, bool CallFunc_IsAiming_IsAiming, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool CallFunc_GetShowAimCrosshair_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "WantsShowCrosshair");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_WantsShowCrosshair_Params Parms{};

	Parms.CallFunc_WantsBowMode_bWantsBowMode = CallFunc_WantsBowMode_bWantsBowMode;
	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_GetShowAimCrosshair_ReturnValue = CallFunc_GetShowAimCrosshair_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bShowCrosshair != nullptr)
		*bShowCrosshair = Parms.bShowCrosshair;

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.GetCrosshairAimAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AimAlpha                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetFireController_FireController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_FireArm_FireController_Charge_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentChargePower_ChargePower                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::GetCrosshairAimAlpha(float* AimAlpha, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentChargePower_ChargePower, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsAiming_IsAiming, float Temp_wildcard_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMax_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "GetCrosshairAimAlpha");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_GetCrosshairAimAlpha_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetFireController_FireController = CallFunc_GetFireController_FireController;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentChargePower_ChargePower = CallFunc_GetCurrentChargePower_ChargePower;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AimAlpha != nullptr)
		*AimAlpha = Parms.AimAlpha;

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.UpdateCosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::UpdateCosmetics(bool CallFunc_IsAiming_IsAiming, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "UpdateCosmetics");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_UpdateCosmetics_Params Parms{};

	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SetExtraVignetteStrengthEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::SetExtraVignetteStrengthEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "SetExtraVignetteStrengthEnabled");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_SetExtraVignetteStrengthEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.TickCameraEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFieldOfView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetFirstPersonCamera_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::TickCameraEffects(float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, float CallFunc_GetFieldOfView_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_MathExpression_ReturnValue, float CallFunc_Lerp_ReturnValue, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "TickCameraEffects");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_TickCameraEffects_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_GetFieldOfView_ReturnValue = CallFunc_GetFieldOfView_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFirstPersonCamera_ReturnValue = CallFunc_GetFirstPersonCamera_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.UpdateAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetADSTimeMultiplier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_wildcard_Variable                                           (IsPlainOldData, NoDestructor)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::UpdateAim(bool CallFunc_IsAiming_IsAiming, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_GetADSTimeMultiplier_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, const struct FTransform& Temp_wildcard_Variable, float CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "UpdateAim");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_UpdateAim_Params Parms{};

	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetADSTimeMultiplier_ReturnValue = CallFunc_GetADSTimeMultiplier_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.GetADSTimeMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_ActionableBehaviour_Firearm_AimController_Base_C::GetADSTimeMultiplier(int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "GetADSTimeMultiplier");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_GetADSTimeMultiplier_Params Parms{};

	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.CanAim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanAim                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReloading_Reloading                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::CanAim(bool* CanAim, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsReloading_Reloading, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "CanAim");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_CanAim_Params Parms{};

	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_IsReloading_Reloading = CallFunc_IsReloading_Reloading;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAim != nullptr)
		*CanAim = Parms.CanAim;

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ToggleAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::ToggleAim(bool CallFunc_IsAiming_IsAiming, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "ToggleAim");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_ToggleAim_Params Parms{};

	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SetAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewAim                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAbortReload_CanAbort                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_Reloading                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanAim_CanAim                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::SetAim(bool NewAim, bool CallFunc_IsSprinting_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController_1, bool CallFunc_CanAbortReload_CanAbort, bool CallFunc_IsReloading_Reloading, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanAim_CanAim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "SetAim");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_SetAim_Params Parms{};

	Parms.NewAim = NewAim;
	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetAmmoController_AmmoController_1 = CallFunc_GetAmmoController_AmmoController_1;
	Parms.CallFunc_CanAbortReload_CanAbort = CallFunc_CanAbortReload_CanAbort;
	Parms.CallFunc_IsReloading_Reloading = CallFunc_IsReloading_Reloading;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanAim_CanAim = CallFunc_CanAim_CanAim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.IsAiming
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAiming                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAiming_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::IsAiming(bool* IsAiming, bool CallFunc_IsAiming_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "IsAiming");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_IsAiming_Params Parms{};

	Parms.CallFunc_IsAiming_ReturnValue = CallFunc_IsAiming_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAiming != nullptr)
		*IsAiming = Parms.IsAiming;

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.IsToggleAim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsToggleAim                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetToggleAim_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::IsToggleAim(bool* IsToggleAim, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool CallFunc_GetToggleAim_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "IsToggleAim");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_IsToggleAim_Params Parms{};

	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_GetToggleAim_ReturnValue = CallFunc_GetToggleAim_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsToggleAim != nullptr)
		*IsToggleAim = Parms.IsToggleAim;

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "ReceiveTick");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.LateSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::LateSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "LateSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.NotifyReloadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::NotifyReloadStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "NotifyReloadStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.NotifyReloadEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::NotifyReloadEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "NotifyReloadEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "PerformAction");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SprintToAim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::SprintToAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "SprintToAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.FinishSprintToAimDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::FinishSprintToAimDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "FinishSprintToAimDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetFirstPersonCamera_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsToggleAim_IsToggleAim                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsToggleAim_IsToggleAim_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFieldOfView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AimController_Base_C::ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base(int32 EntryPoint, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsToggleAim_IsToggleAim, bool CallFunc_IsToggleAim_IsToggleAim_1, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, float K2Node_Event_DeltaSeconds, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAiming_IsAiming, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, float CallFunc_GetFieldOfView_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AimController_Base_C", "ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base");

	Params::UBP_ActionableBehaviour_Firearm_AimController_Base_C_ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFirstPersonCamera_ReturnValue = CallFunc_GetFirstPersonCamera_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsToggleAim_IsToggleAim = CallFunc_IsToggleAim_IsToggleAim;
	Parms.CallFunc_IsToggleAim_IsToggleAim_1 = CallFunc_IsToggleAim_IsToggleAim_1;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_GetFieldOfView_ReturnValue = CallFunc_GetFieldOfView_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


