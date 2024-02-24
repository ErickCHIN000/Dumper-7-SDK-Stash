#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RangedWeaponComponent.BP_RangedWeaponComponent_C
// (None)

class UClass* UBP_RangedWeaponComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RangedWeaponComponent_C");

	return Clss;
}


// BP_RangedWeaponComponent_C BP_RangedWeaponComponent.Default__BP_RangedWeaponComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RangedWeaponComponent_C* UBP_RangedWeaponComponent_C::GetDefaultObj()
{
	static class UBP_RangedWeaponComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RangedWeaponComponent_C*>(UBP_RangedWeaponComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetReloadType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ERangedWeaponReloadType GetReloadType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::GetReloadType(enum class ERangedWeaponReloadType* GetReloadType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetReloadType");

	Params::UBP_RangedWeaponComponent_C_GetReloadType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GetReloadType != nullptr)
		*GetReloadType = Parms.GetReloadType;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetBaseSpread
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             BaseSpread                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_BaseSpread_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::GetBaseSpread(double* BaseSpread, double K2Node_FunctionResult_BaseSpread_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetBaseSpread");

	Params::UBP_RangedWeaponComponent_C_GetBaseSpread_Params Parms{};

	Parms.K2Node_FunctionResult_BaseSpread_ImplicitCast = K2Node_FunctionResult_BaseSpread_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (BaseSpread != nullptr)
		*BaseSpread = Parms.BaseSpread;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.Get Iron Sights Post Process Settings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPostProcessSettings        IronSightsPostProcess                                            (Parm, OutParm)

void UBP_RangedWeaponComponent_C::Get_Iron_Sights_Post_Process_Settings(struct FPostProcessSettings* IronSightsPostProcess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "Get Iron Sights Post Process Settings");

	Params::UBP_RangedWeaponComponent_C_Get_Iron_Sights_Post_Process_Settings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IronSightsPostProcess != nullptr)
		*IronSightsPostProcess = std::move(Parms.IronSightsPostProcess);

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetRaycastDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_RangedWeaponComponent_C::GetRaycastDistance(double K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetRaycastDistance");

	Params::UBP_RangedWeaponComponent_C_GetRaycastDistance_Params Parms{};

	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.CalculateFalloffDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InputDamage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CalculatedDamage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::CalculateFalloffDamage(double Distance, double InputDamage, double* CalculatedDamage, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "CalculateFalloffDamage");

	Params::UBP_RangedWeaponComponent_C_CalculateFalloffDamage_Params Parms{};

	Parms.Distance = Distance;
	Parms.InputDamage = InputDamage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CalculatedDamage != nullptr)
		*CalculatedDamage = Parms.CalculatedDamage;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.InitializeRangedWeaponData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData_WeaponRanged      RangedWeaponData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Gun_SFX                  CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Cooldown_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::InitializeRangedWeaponData(const struct FItemData_WeaponRanged& RangedWeaponData, float NewLocalVar, const struct FS_Gun_SFX& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_VariableSet_Cooldown_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "InitializeRangedWeaponData");

	Params::UBP_RangedWeaponComponent_C_InitializeRangedWeaponData_Params Parms{};

	Parms.RangedWeaponData = RangedWeaponData;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_VariableSet_Cooldown_ImplicitCast = K2Node_VariableSet_Cooldown_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetFiredBulletMuzzleTags
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FItemData_Ammo              CallFunc_GetLoadedAmmoData_LoadedAmmo                            (None)
// bool                               CallFunc_GetLoadedAmmoData_bWasSuccessful                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGameplayTagContainer UBP_RangedWeaponComponent_C::GetFiredBulletMuzzleTags(const struct FItemData_Ammo& CallFunc_GetLoadedAmmoData_LoadedAmmo, bool CallFunc_GetLoadedAmmoData_bWasSuccessful, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetFiredBulletMuzzleTags");

	Params::UBP_RangedWeaponComponent_C_GetFiredBulletMuzzleTags_Params Parms{};

	Parms.CallFunc_GetLoadedAmmoData_LoadedAmmo = CallFunc_GetLoadedAmmoData_LoadedAmmo;
	Parms.CallFunc_GetLoadedAmmoData_bWasSuccessful = CallFunc_GetLoadedAmmoData_bWasSuccessful;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetRecoilValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RecoilYawRange                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   RecoilPitchRange                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 RecoilCurve                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 RecoveryCurve                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UsingAThirdPersonCamera_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::GetRecoilValues(struct FVector2D* RecoilYawRange, struct FVector2D* RecoilPitchRange, class UCurveFloat** RecoilCurve, class UCurveFloat** RecoveryCurve, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetRecoilValues");

	Params::UBP_RangedWeaponComponent_C_GetRecoilValues_Params Parms{};

	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_UsingAThirdPersonCamera_ReturnValue = CallFunc_UsingAThirdPersonCamera_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RecoilYawRange != nullptr)
		*RecoilYawRange = std::move(Parms.RecoilYawRange);

	if (RecoilPitchRange != nullptr)
		*RecoilPitchRange = std::move(Parms.RecoilPitchRange);

	if (RecoilCurve != nullptr)
		*RecoilCurve = Parms.RecoilCurve;

	if (RecoveryCurve != nullptr)
		*RecoveryCurve = Parms.RecoveryCurve;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetProjectileSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ProjectileSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ProjectileSpeed_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::GetProjectileSpeed(double* ProjectileSpeed, double K2Node_FunctionResult_ProjectileSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetProjectileSpeed");

	Params::UBP_RangedWeaponComponent_C_GetProjectileSpeed_Params Parms{};

	Parms.K2Node_FunctionResult_ProjectileSpeed_ImplicitCast = K2Node_FunctionResult_ProjectileSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileSpeed != nullptr)
		*ProjectileSpeed = Parms.ProjectileSpeed;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetPrimaryFireCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      WeaponOwner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CooldownTotal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CooldownBonus                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::GetPrimaryFireCooldown(class AActor* WeaponOwner, double* CooldownTotal, double CooldownBonus, bool CallFunc_IsServer_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetPrimaryFireCooldown");

	Params::UBP_RangedWeaponComponent_C_GetPrimaryFireCooldown_Params Parms{};

	Parms.WeaponOwner = WeaponOwner;
	Parms.CooldownBonus = CooldownBonus;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CooldownTotal != nullptr)
		*CooldownTotal = Parms.CooldownTotal;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.SetTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::SetTimer(double Time, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "SetTimer");

	Params::UBP_RangedWeaponComponent_C_SetTimer_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.GetRemainingCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_TimeRemaining_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::GetRemainingCooldown(double* TimeRemaining, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, double K2Node_FunctionResult_TimeRemaining_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "GetRemainingCooldown");

	Params::UBP_RangedWeaponComponent_C_GetRemainingCooldown_Params Parms{};

	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.K2Node_FunctionResult_TimeRemaining_ImplicitCast = K2Node_FunctionResult_TimeRemaining_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeRemaining != nullptr)
		*TimeRemaining = Parms.TimeRemaining;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.SetCooldownComplete
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RangedWeaponComponent_C::SetCooldownComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "SetCooldownComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.SetOnCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      WeaponOwner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPrimaryFireCooldown_CooldownTotal                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFire_CanFire                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::SetOnCooldown(class AActor* WeaponOwner, double CallFunc_GetPrimaryFireCooldown_CooldownTotal, bool CallFunc_CanFire_CanFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "SetOnCooldown");

	Params::UBP_RangedWeaponComponent_C_SetOnCooldown_Params Parms{};

	Parms.WeaponOwner = WeaponOwner;
	Parms.CallFunc_GetPrimaryFireCooldown_CooldownTotal = CallFunc_GetPrimaryFireCooldown_CooldownTotal;
	Parms.CallFunc_CanFire_CanFire = CallFunc_CanFire_CanFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.CanFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanFire                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::CanFire(bool* CanFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "CanFire");

	Params::UBP_RangedWeaponComponent_C_CanFire_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanFire != nullptr)
		*CanFire = Parms.CanFire;

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.OnBeginCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::OnBeginCooldown(double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "OnBeginCooldown");

	Params::UBP_RangedWeaponComponent_C_OnBeginCooldown_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.ExecuteUbergraph_BP_RangedWeaponComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RangedWeaponComponent_C::ExecuteUbergraph_BP_RangedWeaponComponent(int32 EntryPoint, double K2Node_CustomEvent_Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "ExecuteUbergraph_BP_RangedWeaponComponent");

	Params::UBP_RangedWeaponComponent_C_ExecuteUbergraph_BP_RangedWeaponComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeaponComponent.BP_RangedWeaponComponent_C.OnCooldownEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RangedWeaponComponent_C::OnCooldownEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeaponComponent_C", "OnCooldownEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


