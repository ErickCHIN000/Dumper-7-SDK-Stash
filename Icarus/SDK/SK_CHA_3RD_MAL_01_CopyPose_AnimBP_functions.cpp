#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_CHA_3RD_MAL_01_CopyPose_AnimBP.SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C
// (None)

class UClass* USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C");

	return Clss;
}


// SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C SK_CHA_3RD_MAL_01_CopyPose_AnimBP.Default__SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C* USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C::GetDefaultObj()
{
	static class USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C*>(USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_CHA_3RD_MAL_01_CopyPose_AnimBP.SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C", "AnimGraph");

	Params::USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_CHA_3RD_MAL_01_CopyPose_AnimBP.SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C.ExecuteUbergraph_SK_CHA_3RD_MAL_01_CopyPose_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C::ExecuteUbergraph_SK_CHA_3RD_MAL_01_CopyPose_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CHA_3RD_MAL_01_CopyPose_AnimBP_C", "ExecuteUbergraph_SK_CHA_3RD_MAL_01_CopyPose_AnimBP");

	Params::USK_CHA_3RD_MAL_01_CopyPose_AnimBP_C_ExecuteUbergraph_SK_CHA_3RD_MAL_01_CopyPose_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


