#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LighProj_Tiabolt_M2_1.LighProj_Tiabolt_M2_1_C
// (None)

class UClass* ULighProj_Tiabolt_M2_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LighProj_Tiabolt_M2_1_C");

	return Clss;
}


// LighProj_Tiabolt_M2_1_C LighProj_Tiabolt_M2_1.Default__LighProj_Tiabolt_M2_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULighProj_Tiabolt_M2_1_C* ULighProj_Tiabolt_M2_1_C::GetDefaultObj()
{
	static class ULighProj_Tiabolt_M2_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULighProj_Tiabolt_M2_1_C*>(ULighProj_Tiabolt_M2_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LighProj_Tiabolt_M2_1.LighProj_Tiabolt_M2_1_C.FireBonusProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                      Projectile_Class                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)

void ULighProj_Tiabolt_M2_1_C::FireBonusProjectile(class UClass* Projectile_Class, class UClass* DamageType, class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LighProj_Tiabolt_M2_1_C", "FireBonusProjectile");

	Params::ULighProj_Tiabolt_M2_1_C_FireBonusProjectile_Params Parms{};

	Parms.Projectile_Class = Projectile_Class;
	Parms.DamageType = DamageType;
	Parms.Projectile = Projectile;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LighProj_Tiabolt_M2_1.LighProj_Tiabolt_M2_1_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPWeap_SR_DAL_Tiabolt_C*    K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULighProj_Tiabolt_M2_1_C::OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class ABPWeap_SR_DAL_Tiabolt_C* K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LighProj_Tiabolt_M2_1_C", "OnBegin");

	Params::ULighProj_Tiabolt_M2_1_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt = K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


