#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TEDProjectile_Magic_Shadowfire.TEDProjectile_Magic_Shadowfire_C
// (Actor)

class UClass* ATEDProjectile_Magic_Shadowfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TEDProjectile_Magic_Shadowfire_C");

	return Clss;
}


// TEDProjectile_Magic_Shadowfire_C TEDProjectile_Magic_Shadowfire.Default__TEDProjectile_Magic_Shadowfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATEDProjectile_Magic_Shadowfire_C* ATEDProjectile_Magic_Shadowfire_C::GetDefaultObj()
{
	static class ATEDProjectile_Magic_Shadowfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATEDProjectile_Magic_Shadowfire_C*>(ATEDProjectile_Magic_Shadowfire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TEDProjectile_Magic_Shadowfire.TEDProjectile_Magic_Shadowfire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_Magic_Shadowfire_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Magic_Shadowfire_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Magic_Shadowfire.TEDProjectile_Magic_Shadowfire_C.TryEndPlayEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_Magic_Shadowfire_C::TryEndPlayEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Magic_Shadowfire_C", "TryEndPlayEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Magic_Shadowfire.TEDProjectile_Magic_Shadowfire_C.StartTedioreBombTransform
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_Magic_Shadowfire_C::StartTedioreBombTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Magic_Shadowfire_C", "StartTedioreBombTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Magic_Shadowfire.TEDProjectile_Magic_Shadowfire_C.ExecuteUbergraph_TEDProjectile_Magic_Shadowfire
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATEDProjectile_Magic_Shadowfire_C::ExecuteUbergraph_TEDProjectile_Magic_Shadowfire(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Magic_Shadowfire_C", "ExecuteUbergraph_TEDProjectile_Magic_Shadowfire");

	Params::ATEDProjectile_Magic_Shadowfire_C_ExecuteUbergraph_TEDProjectile_Magic_Shadowfire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


