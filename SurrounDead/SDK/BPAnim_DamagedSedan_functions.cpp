#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_DamagedSedan.BPAnim_DamagedSedan_C
// (None)

class UClass* UBPAnim_DamagedSedan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_DamagedSedan_C");

	return Clss;
}


// BPAnim_DamagedSedan_C BPAnim_DamagedSedan.Default__BPAnim_DamagedSedan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_DamagedSedan_C* UBPAnim_DamagedSedan_C::GetDefaultObj()
{
	static class UBPAnim_DamagedSedan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_DamagedSedan_C*>(UBPAnim_DamagedSedan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_DamagedSedan.BPAnim_DamagedSedan_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_DamagedSedan_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DamagedSedan_C", "AnimGraph");

	Params::UBPAnim_DamagedSedan_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_DamagedSedan.BPAnim_DamagedSedan_C.ExecuteUbergraph_BPAnim_DamagedSedan
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_DamagedSedan_C::ExecuteUbergraph_BPAnim_DamagedSedan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DamagedSedan_C", "ExecuteUbergraph_BPAnim_DamagedSedan");

	Params::UBPAnim_DamagedSedan_C_ExecuteUbergraph_BPAnim_DamagedSedan_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


