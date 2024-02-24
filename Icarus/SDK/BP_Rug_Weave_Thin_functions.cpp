#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rug_Weave_Thin.BP_Rug_Weave_Thin_C
// (Actor)

class UClass* ABP_Rug_Weave_Thin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rug_Weave_Thin_C");

	return Clss;
}


// BP_Rug_Weave_Thin_C BP_Rug_Weave_Thin.Default__BP_Rug_Weave_Thin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rug_Weave_Thin_C* ABP_Rug_Weave_Thin_C::GetDefaultObj()
{
	static class ABP_Rug_Weave_Thin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rug_Weave_Thin_C*>(ABP_Rug_Weave_Thin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Rug_Weave_Thin.BP_Rug_Weave_Thin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Rug_Weave_Thin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Rug_Weave_Thin_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Rug_Weave_Thin.BP_Rug_Weave_Thin_C.ExecuteUbergraph_BP_Rug_Weave_Thin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rug_Weave_Thin_C::ExecuteUbergraph_BP_Rug_Weave_Thin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Rug_Weave_Thin_C", "ExecuteUbergraph_BP_Rug_Weave_Thin");

	Params::ABP_Rug_Weave_Thin_C_ExecuteUbergraph_BP_Rug_Weave_Thin_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


