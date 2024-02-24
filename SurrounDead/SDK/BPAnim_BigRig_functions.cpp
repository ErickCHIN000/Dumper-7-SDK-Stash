#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_BigRig.BPAnim_BigRig_C
// (None)

class UClass* UBPAnim_BigRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_BigRig_C");

	return Clss;
}


// BPAnim_BigRig_C BPAnim_BigRig.Default__BPAnim_BigRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_BigRig_C* UBPAnim_BigRig_C::GetDefaultObj()
{
	static class UBPAnim_BigRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_BigRig_C*>(UBPAnim_BigRig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_BigRig.BPAnim_BigRig_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_BigRig_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_BigRig_C", "AnimGraph");

	Params::UBPAnim_BigRig_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_BigRig.BPAnim_BigRig_C.ExecuteUbergraph_BPAnim_BigRig
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_BigRig_C::ExecuteUbergraph_BPAnim_BigRig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_BigRig_C", "ExecuteUbergraph_BPAnim_BigRig");

	Params::UBPAnim_BigRig_C_ExecuteUbergraph_BPAnim_BigRig_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


