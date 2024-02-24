#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C
// (Actor)

class UClass* ABP_Interior_Wood_Cupboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interior_Wood_Cupboard_C");

	return Clss;
}


// BP_Interior_Wood_Cupboard_C BP_Interior_Wood_Cupboard.Default__BP_Interior_Wood_Cupboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Interior_Wood_Cupboard_C* ABP_Interior_Wood_Cupboard_C::GetDefaultObj()
{
	static class ABP_Interior_Wood_Cupboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Interior_Wood_Cupboard_C*>(ABP_Interior_Wood_Cupboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C.OnBecomeInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interior_Wood_Cupboard_C::OnBecomeInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interior_Wood_Cupboard_C", "OnBecomeInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C.OnNoLongerInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interior_Wood_Cupboard_C::OnNoLongerInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interior_Wood_Cupboard_C", "OnNoLongerInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C.ExecuteUbergraph_BP_Interior_Wood_Cupboard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interior_Wood_Cupboard_C::ExecuteUbergraph_BP_Interior_Wood_Cupboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interior_Wood_Cupboard_C", "ExecuteUbergraph_BP_Interior_Wood_Cupboard");

	Params::ABP_Interior_Wood_Cupboard_C_ExecuteUbergraph_BP_Interior_Wood_Cupboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


