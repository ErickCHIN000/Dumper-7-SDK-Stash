#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HYP_BlazingVolley.LightProjectile_HYP_BlazingVolley_C
// (None)

class UClass* ULightProjectile_HYP_BlazingVolley_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HYP_BlazingVolley_C");

	return Clss;
}


// LightProjectile_HYP_BlazingVolley_C LightProjectile_HYP_BlazingVolley.Default__LightProjectile_HYP_BlazingVolley_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HYP_BlazingVolley_C* ULightProjectile_HYP_BlazingVolley_C::GetDefaultObj()
{
	static class ULightProjectile_HYP_BlazingVolley_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HYP_BlazingVolley_C*>(ULightProjectile_HYP_BlazingVolley_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_HYP_BlazingVolley.LightProjectile_HYP_BlazingVolley_C.Timer1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetEnemy                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TargetFound                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetFiringPatternID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProjectile_HYP_BlazingVolley_C::Timer1(class ULightProjectile* Projectile, class AActor* TargetEnemy, bool TargetFound, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetFiringPatternID_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HYP_BlazingVolley_C", "Timer1");

	Params::ULightProjectile_HYP_BlazingVolley_C_Timer1_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.TargetEnemy = TargetEnemy;
	Parms.TargetFound = TargetFound;
	Parms.CallFunc_GetTarget_ReturnValue = CallFunc_GetTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFiringPatternID_ReturnValue = CallFunc_GetFiringPatternID_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


