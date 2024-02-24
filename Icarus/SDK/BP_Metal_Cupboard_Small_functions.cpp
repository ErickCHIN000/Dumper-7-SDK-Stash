#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Metal_Cupboard_Small.BP_Metal_Cupboard_Small_C
// (Actor)

class UClass* ABP_Metal_Cupboard_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Metal_Cupboard_Small_C");

	return Clss;
}


// BP_Metal_Cupboard_Small_C BP_Metal_Cupboard_Small.Default__BP_Metal_Cupboard_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Metal_Cupboard_Small_C* ABP_Metal_Cupboard_Small_C::GetDefaultObj()
{
	static class ABP_Metal_Cupboard_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Metal_Cupboard_Small_C*>(ABP_Metal_Cupboard_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Metal_Cupboard_Small.BP_Metal_Cupboard_Small_C.OnBecomeInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Metal_Cupboard_Small_C::OnBecomeInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Metal_Cupboard_Small_C", "OnBecomeInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Metal_Cupboard_Small.BP_Metal_Cupboard_Small_C.OnNoLongerInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Metal_Cupboard_Small_C::OnNoLongerInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Metal_Cupboard_Small_C", "OnNoLongerInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Metal_Cupboard_Small.BP_Metal_Cupboard_Small_C.ExecuteUbergraph_BP_Metal_Cupboard_Small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Metal_Cupboard_Small_C::ExecuteUbergraph_BP_Metal_Cupboard_Small(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Metal_Cupboard_Small_C", "ExecuteUbergraph_BP_Metal_Cupboard_Small");

	Params::ABP_Metal_Cupboard_Small_C_ExecuteUbergraph_BP_Metal_Cupboard_Small_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


