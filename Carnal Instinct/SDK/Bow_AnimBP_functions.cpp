#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Bow_AnimBP.Bow_AnimBP_C
// (None)

class UClass* UBow_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bow_AnimBP_C");

	return Clss;
}


// Bow_AnimBP_C Bow_AnimBP.Default__Bow_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBow_AnimBP_C* UBow_AnimBP_C::GetDefaultObj()
{
	static class UBow_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBow_AnimBP_C*>(UBow_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bow_AnimBP.Bow_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBow_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bow_AnimBP_C", "AnimGraph");

	Params::UBow_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Bow_AnimBP.Bow_AnimBP_C.ExecuteUbergraph_Bow_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBow_AnimBP_C::ExecuteUbergraph_Bow_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bow_AnimBP_C", "ExecuteUbergraph_Bow_AnimBP");

	Params::UBow_AnimBP_C_ExecuteUbergraph_Bow_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


