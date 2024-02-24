#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_SG_JAK_Magic.Projectile_SG_JAK_Magic_C
// (Actor)

class UClass* AProjectile_SG_JAK_Magic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_SG_JAK_Magic_C");

	return Clss;
}


// Projectile_SG_JAK_Magic_C Projectile_SG_JAK_Magic.Default__Projectile_SG_JAK_Magic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_SG_JAK_Magic_C* AProjectile_SG_JAK_Magic_C::GetDefaultObj()
{
	static class AProjectile_SG_JAK_Magic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_SG_JAK_Magic_C*>(AProjectile_SG_JAK_Magic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_SG_JAK_Magic.Projectile_SG_JAK_Magic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_SG_JAK_Magic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_SG_JAK_Magic_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_SG_JAK_Magic.Projectile_SG_JAK_Magic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_SG_JAK_Magic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_SG_JAK_Magic_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_SG_JAK_Magic.Projectile_SG_JAK_Magic_C.ExecuteUbergraph_Projectile_SG_JAK_Magic
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_SG_JAK_Magic_C::ExecuteUbergraph_Projectile_SG_JAK_Magic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_SG_JAK_Magic_C", "ExecuteUbergraph_Projectile_SG_JAK_Magic");

	Params::AProjectile_SG_JAK_Magic_C_ExecuteUbergraph_Projectile_SG_JAK_Magic_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


