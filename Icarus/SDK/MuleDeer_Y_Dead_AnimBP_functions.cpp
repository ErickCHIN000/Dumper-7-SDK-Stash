#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MuleDeer_Y_Dead_AnimBP.MuleDeer_Y_Dead_AnimBP_C
// (None)

class UClass* UMuleDeer_Y_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MuleDeer_Y_Dead_AnimBP_C");

	return Clss;
}


// MuleDeer_Y_Dead_AnimBP_C MuleDeer_Y_Dead_AnimBP.Default__MuleDeer_Y_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMuleDeer_Y_Dead_AnimBP_C* UMuleDeer_Y_Dead_AnimBP_C::GetDefaultObj()
{
	static class UMuleDeer_Y_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMuleDeer_Y_Dead_AnimBP_C*>(UMuleDeer_Y_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MuleDeer_Y_Dead_AnimBP.MuleDeer_Y_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMuleDeer_Y_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MuleDeer_Y_Dead_AnimBP_C", "AnimGraph");

	Params::UMuleDeer_Y_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MuleDeer_Y_Dead_AnimBP.MuleDeer_Y_Dead_AnimBP_C.ExecuteUbergraph_MuleDeer_Y_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMuleDeer_Y_Dead_AnimBP_C::ExecuteUbergraph_MuleDeer_Y_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MuleDeer_Y_Dead_AnimBP_C", "ExecuteUbergraph_MuleDeer_Y_Dead_AnimBP");

	Params::UMuleDeer_Y_Dead_AnimBP_C_ExecuteUbergraph_MuleDeer_Y_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

