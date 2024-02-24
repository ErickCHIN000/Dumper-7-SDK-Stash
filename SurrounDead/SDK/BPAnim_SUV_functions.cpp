#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SUV.BPAnim_SUV_C
// (None)

class UClass* UBPAnim_SUV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SUV_C");

	return Clss;
}


// BPAnim_SUV_C BPAnim_SUV.Default__BPAnim_SUV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SUV_C* UBPAnim_SUV_C::GetDefaultObj()
{
	static class UBPAnim_SUV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SUV_C*>(UBPAnim_SUV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SUV.BPAnim_SUV_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_SUV_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SUV_C", "AnimGraph");

	Params::UBPAnim_SUV_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_SUV.BPAnim_SUV_C.ExecuteUbergraph_BPAnim_SUV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SUV_C::ExecuteUbergraph_BPAnim_SUV(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SUV_C", "ExecuteUbergraph_BPAnim_SUV");

	Params::UBPAnim_SUV_C_ExecuteUbergraph_BPAnim_SUV_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


