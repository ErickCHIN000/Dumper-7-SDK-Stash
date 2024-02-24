#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_SawbladeBounce_Donkey.LightProjectile_SawbladeBounce_Donkey_C
// (None)

class UClass* ULightProjectile_SawbladeBounce_Donkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_SawbladeBounce_Donkey_C");

	return Clss;
}


// LightProjectile_SawbladeBounce_Donkey_C LightProjectile_SawbladeBounce_Donkey.Default__LightProjectile_SawbladeBounce_Donkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_SawbladeBounce_Donkey_C* ULightProjectile_SawbladeBounce_Donkey_C::GetDefaultObj()
{
	static class ULightProjectile_SawbladeBounce_Donkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_SawbladeBounce_Donkey_C*>(ULightProjectile_SawbladeBounce_Donkey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_SawbladeBounce_Donkey.LightProjectile_SawbladeBounce_Donkey_C.OnLifetimeExpired
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetAttachedActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SawbladeBounce_Donkey_C::OnLifetimeExpired(class ULightProjectile* Projectile, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_GetAttachedActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SawbladeBounce_Donkey_C", "OnLifetimeExpired");

	Params::ULightProjectile_SawbladeBounce_Donkey_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAttachedActor_ReturnValue = CallFunc_GetAttachedActor_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


