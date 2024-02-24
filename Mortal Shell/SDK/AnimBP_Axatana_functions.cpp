#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_Axatana.AnimBP_Axatana_C
// (None)

class UClass* UAnimBP_Axatana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_Axatana_C");

	return Clss;
}


// AnimBP_Axatana_C AnimBP_Axatana.Default__AnimBP_Axatana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_Axatana_C* UAnimBP_Axatana_C::GetDefaultObj()
{
	static class UAnimBP_Axatana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_Axatana_C*>(UAnimBP_Axatana_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_Axatana.AnimBP_Axatana_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_Axatana_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Axatana_C", "AnimGraph");

	Params::UAnimBP_Axatana_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_Axatana.AnimBP_Axatana_C.ExecuteUbergraph_AnimBP_Axatana
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Axatana_C::ExecuteUbergraph_AnimBP_Axatana(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Axatana_C", "ExecuteUbergraph_AnimBP_Axatana");

	Params::UAnimBP_Axatana_C_ExecuteUbergraph_AnimBP_Axatana_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


