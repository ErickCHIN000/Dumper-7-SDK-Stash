#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuneAnimated.BP_RuneAnimated_C
// (Actor)

class UClass* ABP_RuneAnimated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuneAnimated_C");

	return Clss;
}


// BP_RuneAnimated_C BP_RuneAnimated.Default__BP_RuneAnimated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RuneAnimated_C* ABP_RuneAnimated_C::GetDefaultObj()
{
	static class ABP_RuneAnimated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RuneAnimated_C*>(ABP_RuneAnimated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RuneAnimated.BP_RuneAnimated_C.HasDynamicCollision
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_RuneAnimated_C::HasDynamicCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneAnimated_C", "HasDynamicCollision");

	Params::ABP_RuneAnimated_C_HasDynamicCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RuneAnimated.BP_RuneAnimated_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RuneAnimated_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuneAnimated_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


