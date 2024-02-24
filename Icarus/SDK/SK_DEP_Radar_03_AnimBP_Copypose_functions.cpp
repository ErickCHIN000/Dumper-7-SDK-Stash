#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_DEP_Radar_03_AnimBP_Copypose.SK_DEP_Radar_03_AnimBP_Copypose_C
// (None)

class UClass* USK_DEP_Radar_03_AnimBP_Copypose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_DEP_Radar_03_AnimBP_Copypose_C");

	return Clss;
}


// SK_DEP_Radar_03_AnimBP_Copypose_C SK_DEP_Radar_03_AnimBP_Copypose.Default__SK_DEP_Radar_03_AnimBP_Copypose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_DEP_Radar_03_AnimBP_Copypose_C* USK_DEP_Radar_03_AnimBP_Copypose_C::GetDefaultObj()
{
	static class USK_DEP_Radar_03_AnimBP_Copypose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_DEP_Radar_03_AnimBP_Copypose_C*>(USK_DEP_Radar_03_AnimBP_Copypose_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_DEP_Radar_03_AnimBP_Copypose.SK_DEP_Radar_03_AnimBP_Copypose_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_DEP_Radar_03_AnimBP_Copypose_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_Radar_03_AnimBP_Copypose_C", "AnimGraph");

	Params::USK_DEP_Radar_03_AnimBP_Copypose_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_DEP_Radar_03_AnimBP_Copypose.SK_DEP_Radar_03_AnimBP_Copypose_C.ExecuteUbergraph_SK_DEP_Radar_03_AnimBP_Copypose
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_DEP_Radar_03_AnimBP_Copypose_C::ExecuteUbergraph_SK_DEP_Radar_03_AnimBP_Copypose(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_Radar_03_AnimBP_Copypose_C", "ExecuteUbergraph_SK_DEP_Radar_03_AnimBP_Copypose");

	Params::USK_DEP_Radar_03_AnimBP_Copypose_C_ExecuteUbergraph_SK_DEP_Radar_03_AnimBP_Copypose_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


