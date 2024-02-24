#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_EffigyAttack.AnimBP_EffigyAttack_C
// (None)

class UClass* UAnimBP_EffigyAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_EffigyAttack_C");

	return Clss;
}


// AnimBP_EffigyAttack_C AnimBP_EffigyAttack.Default__AnimBP_EffigyAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_EffigyAttack_C* UAnimBP_EffigyAttack_C::GetDefaultObj()
{
	static class UAnimBP_EffigyAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_EffigyAttack_C*>(UAnimBP_EffigyAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_EffigyAttack.AnimBP_EffigyAttack_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_EffigyAttack_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_EffigyAttack_C", "AnimGraph");

	Params::UAnimBP_EffigyAttack_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_EffigyAttack.AnimBP_EffigyAttack_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_EffigyAttack_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_EffigyAttack_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_EffigyAttack_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_EffigyAttack.AnimBP_EffigyAttack_C.ExecuteUbergraph_AnimBP_EffigyAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_EffigyAttack_C::ExecuteUbergraph_AnimBP_EffigyAttack(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_EffigyAttack_C", "ExecuteUbergraph_AnimBP_EffigyAttack");

	Params::UAnimBP_EffigyAttack_C_ExecuteUbergraph_AnimBP_EffigyAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


