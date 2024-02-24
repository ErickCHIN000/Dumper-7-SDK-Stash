#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_RV.BPAnim_RV_C
// (None)

class UClass* UBPAnim_RV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_RV_C");

	return Clss;
}


// BPAnim_RV_C BPAnim_RV.Default__BPAnim_RV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_RV_C* UBPAnim_RV_C::GetDefaultObj()
{
	static class UBPAnim_RV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_RV_C*>(UBPAnim_RV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_RV.BPAnim_RV_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_RV_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_RV_C", "AnimGraph");

	Params::UBPAnim_RV_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_RV.BPAnim_RV_C.ExecuteUbergraph_BPAnim_RV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_RV_C::ExecuteUbergraph_BPAnim_RV(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_RV_C", "ExecuteUbergraph_BPAnim_RV");

	Params::UBPAnim_RV_C_ExecuteUbergraph_BPAnim_RV_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


