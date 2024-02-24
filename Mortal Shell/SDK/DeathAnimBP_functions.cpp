#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DeathAnimBP.DeathAnimBP_C
// (None)

class UClass* UDeathAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathAnimBP_C");

	return Clss;
}


// DeathAnimBP_C DeathAnimBP.Default__DeathAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeathAnimBP_C* UDeathAnimBP_C::GetDefaultObj()
{
	static class UDeathAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeathAnimBP_C*>(UDeathAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DeathAnimBP.DeathAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDeathAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathAnimBP_C", "AnimGraph");

	Params::UDeathAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function DeathAnimBP.DeathAnimBP_C.ExecuteUbergraph_DeathAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeathAnimBP_C::ExecuteUbergraph_DeathAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathAnimBP_C", "ExecuteUbergraph_DeathAnimBP");

	Params::UDeathAnimBP_C_ExecuteUbergraph_DeathAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


