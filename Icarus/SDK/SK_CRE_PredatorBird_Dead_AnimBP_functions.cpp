#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_CRE_PredatorBird_Dead_AnimBP.SK_CRE_PredatorBird_Dead_AnimBP_C
// (None)

class UClass* USK_CRE_PredatorBird_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_CRE_PredatorBird_Dead_AnimBP_C");

	return Clss;
}


// SK_CRE_PredatorBird_Dead_AnimBP_C SK_CRE_PredatorBird_Dead_AnimBP.Default__SK_CRE_PredatorBird_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_CRE_PredatorBird_Dead_AnimBP_C* USK_CRE_PredatorBird_Dead_AnimBP_C::GetDefaultObj()
{
	static class USK_CRE_PredatorBird_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_CRE_PredatorBird_Dead_AnimBP_C*>(USK_CRE_PredatorBird_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_CRE_PredatorBird_Dead_AnimBP.SK_CRE_PredatorBird_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_CRE_PredatorBird_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_PredatorBird_Dead_AnimBP_C", "AnimGraph");

	Params::USK_CRE_PredatorBird_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_CRE_PredatorBird_Dead_AnimBP.SK_CRE_PredatorBird_Dead_AnimBP_C.ExecuteUbergraph_SK_CRE_PredatorBird_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_CRE_PredatorBird_Dead_AnimBP_C::ExecuteUbergraph_SK_CRE_PredatorBird_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_PredatorBird_Dead_AnimBP_C", "ExecuteUbergraph_SK_CRE_PredatorBird_Dead_AnimBP");

	Params::USK_CRE_PredatorBird_Dead_AnimBP_C_ExecuteUbergraph_SK_CRE_PredatorBird_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


