#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Player_Special_Mace.Projectile_Player_Special_Mace_C
// (Actor)

class UClass* AProjectile_Player_Special_Mace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Player_Special_Mace_C");

	return Clss;
}


// Projectile_Player_Special_Mace_C Projectile_Player_Special_Mace.Default__Projectile_Player_Special_Mace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_Player_Special_Mace_C* AProjectile_Player_Special_Mace_C::GetDefaultObj()
{
	static class AProjectile_Player_Special_Mace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_Player_Special_Mace_C*>(AProjectile_Player_Special_Mace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_Player_Special_Mace.Projectile_Player_Special_Mace_C.SpecialEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_Player_Special_Mace_C::SpecialEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Player_Special_Mace_C", "SpecialEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Player_Special_Mace.Projectile_Player_Special_Mace_C.ExecuteUbergraph_Projectile_Player_Special_Mace
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldBurn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_Player_Special_Mace_C::ExecuteUbergraph_Projectile_Player_Special_Mace(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_ShouldBurn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Player_Special_Mace_C", "ExecuteUbergraph_Projectile_Player_Special_Mace");

	Params::AProjectile_Player_Special_Mace_C_ExecuteUbergraph_Projectile_Player_Special_Mace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_ShouldBurn_ReturnValue = CallFunc_ShouldBurn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


