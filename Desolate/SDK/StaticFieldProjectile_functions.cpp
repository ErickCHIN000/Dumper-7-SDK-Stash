#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StaticFieldProjectile.StaticFieldProjectile_C
// (Actor)

class UClass* AStaticFieldProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticFieldProjectile_C");

	return Clss;
}


// StaticFieldProjectile_C StaticFieldProjectile.Default__StaticFieldProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStaticFieldProjectile_C* AStaticFieldProjectile_C::GetDefaultObj()
{
	static class AStaticFieldProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStaticFieldProjectile_C*>(AStaticFieldProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StaticFieldProjectile.StaticFieldProjectile_C.MakeExplodeDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStaticFieldProjectile_C::MakeExplodeDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticFieldProjectile_C", "MakeExplodeDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StaticFieldProjectile.StaticFieldProjectile_C.ExecuteUbergraph_StaticFieldProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStaticFieldProjectile_C::ExecuteUbergraph_StaticFieldProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticFieldProjectile_C", "ExecuteUbergraph_StaticFieldProjectile");

	Params::AStaticFieldProjectile_C_ExecuteUbergraph_StaticFieldProjectile_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


