#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BrownBear_Y_Dead_AnimBP.BrownBear_Y_Dead_AnimBP_C
// (None)

class UClass* UBrownBear_Y_Dead_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrownBear_Y_Dead_AnimBP_C");

	return Clss;
}


// BrownBear_Y_Dead_AnimBP_C BrownBear_Y_Dead_AnimBP.Default__BrownBear_Y_Dead_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBrownBear_Y_Dead_AnimBP_C* UBrownBear_Y_Dead_AnimBP_C::GetDefaultObj()
{
	static class UBrownBear_Y_Dead_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrownBear_Y_Dead_AnimBP_C*>(UBrownBear_Y_Dead_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BrownBear_Y_Dead_AnimBP.BrownBear_Y_Dead_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBrownBear_Y_Dead_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrownBear_Y_Dead_AnimBP_C", "AnimGraph");

	Params::UBrownBear_Y_Dead_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BrownBear_Y_Dead_AnimBP.BrownBear_Y_Dead_AnimBP_C.ExecuteUbergraph_BrownBear_Y_Dead_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrownBear_Y_Dead_AnimBP_C::ExecuteUbergraph_BrownBear_Y_Dead_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrownBear_Y_Dead_AnimBP_C", "ExecuteUbergraph_BrownBear_Y_Dead_AnimBP");

	Params::UBrownBear_Y_Dead_AnimBP_C_ExecuteUbergraph_BrownBear_Y_Dead_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


