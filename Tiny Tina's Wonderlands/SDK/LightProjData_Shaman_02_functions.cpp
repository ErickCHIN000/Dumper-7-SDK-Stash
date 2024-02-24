#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_Shaman_02.LightProjData_Shaman_02_C
// (None)

class UClass* ULightProjData_Shaman_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_Shaman_02_C");

	return Clss;
}


// LightProjData_Shaman_02_C LightProjData_Shaman_02.Default__LightProjData_Shaman_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_Shaman_02_C* ULightProjData_Shaman_02_C::GetDefaultObj()
{
	static class ULightProjData_Shaman_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_Shaman_02_C*>(ULightProjData_Shaman_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjData_Shaman_02.LightProjData_Shaman_02_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjData_Shaman_02_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_Shaman_02_C", "OnLifetimeExpired");

	Params::ULightProjData_Shaman_02_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjData_Shaman_02.LightProjData_Shaman_02_C.EnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjData_Shaman_02_C::EnableHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_Shaman_02_C", "EnableHoming");

	Params::ULightProjData_Shaman_02_C_EnableHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


