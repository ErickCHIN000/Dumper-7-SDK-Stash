#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass GirlAnimBlueprint.GirlAnimBlueprint_C
// (None)

class UClass* UGirlAnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GirlAnimBlueprint_C");

	return Clss;
}


// GirlAnimBlueprint_C GirlAnimBlueprint.Default__GirlAnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGirlAnimBlueprint_C* UGirlAnimBlueprint_C::GetDefaultObj()
{
	static class UGirlAnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGirlAnimBlueprint_C*>(UGirlAnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GirlAnimBlueprint.GirlAnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGirlAnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GirlAnimBlueprint_C", "AnimGraph");

	Params::UGirlAnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function GirlAnimBlueprint.GirlAnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGirlAnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GirlAnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UGirlAnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GirlAnimBlueprint.GirlAnimBlueprint_C.ExecuteUbergraph_GirlAnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGirlAnimBlueprint_C::ExecuteUbergraph_GirlAnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GirlAnimBlueprint_C", "ExecuteUbergraph_GirlAnimBlueprint");

	Params::UGirlAnimBlueprint_C_ExecuteUbergraph_GirlAnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


