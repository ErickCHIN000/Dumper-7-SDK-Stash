#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DarkFormParryAnimBP.DarkFormParryAnimBP_C
// (None)

class UClass* UDarkFormParryAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkFormParryAnimBP_C");

	return Clss;
}


// DarkFormParryAnimBP_C DarkFormParryAnimBP.Default__DarkFormParryAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDarkFormParryAnimBP_C* UDarkFormParryAnimBP_C::GetDefaultObj()
{
	static class UDarkFormParryAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDarkFormParryAnimBP_C*>(UDarkFormParryAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DarkFormParryAnimBP.DarkFormParryAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDarkFormParryAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkFormParryAnimBP_C", "AnimGraph");

	Params::UDarkFormParryAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function DarkFormParryAnimBP.DarkFormParryAnimBP_C.ExecuteUbergraph_DarkFormParryAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDarkFormParryAnimBP_C::ExecuteUbergraph_DarkFormParryAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkFormParryAnimBP_C", "ExecuteUbergraph_DarkFormParryAnimBP");

	Params::UDarkFormParryAnimBP_C_ExecuteUbergraph_DarkFormParryAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


