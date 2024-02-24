#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ExplodingFrogAnimBP.ExplodingFrogAnimBP_C
// (None)

class UClass* UExplodingFrogAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplodingFrogAnimBP_C");

	return Clss;
}


// ExplodingFrogAnimBP_C ExplodingFrogAnimBP.Default__ExplodingFrogAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplodingFrogAnimBP_C* UExplodingFrogAnimBP_C::GetDefaultObj()
{
	static class UExplodingFrogAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplodingFrogAnimBP_C*>(UExplodingFrogAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExplodingFrogAnimBP.ExplodingFrogAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UExplodingFrogAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplodingFrogAnimBP_C", "AnimGraph");

	Params::UExplodingFrogAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ExplodingFrogAnimBP.ExplodingFrogAnimBP_C.ExecuteUbergraph_ExplodingFrogAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExplodingFrogAnimBP_C::ExecuteUbergraph_ExplodingFrogAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplodingFrogAnimBP_C", "ExecuteUbergraph_ExplodingFrogAnimBP");

	Params::UExplodingFrogAnimBP_C_ExecuteUbergraph_ExplodingFrogAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


