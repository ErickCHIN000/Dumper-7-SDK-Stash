#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_NPC_CustomPreview.AB_NPC_CustomPreview_C
// (None)

class UClass* UAB_NPC_CustomPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_NPC_CustomPreview_C");

	return Clss;
}


// AB_NPC_CustomPreview_C AB_NPC_CustomPreview.Default__AB_NPC_CustomPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_NPC_CustomPreview_C* UAB_NPC_CustomPreview_C::GetDefaultObj()
{
	static class UAB_NPC_CustomPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_NPC_CustomPreview_C*>(UAB_NPC_CustomPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_NPC_CustomPreview.AB_NPC_CustomPreview_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_NPC_CustomPreview_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_NPC_CustomPreview_C", "AnimGraph");

	Params::UAB_NPC_CustomPreview_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_NPC_CustomPreview.AB_NPC_CustomPreview_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_NPC_CustomPreview_GGAnimGraphNode_RandomPlayerWithPin_1B410A454A12532B11DB6999778454FC
// (BlueprintEvent)
// Parameters:

void UAB_NPC_CustomPreview_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_NPC_CustomPreview_GGAnimGraphNode_RandomPlayerWithPin_1B410A454A12532B11DB6999778454FC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_NPC_CustomPreview_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_NPC_CustomPreview_GGAnimGraphNode_RandomPlayerWithPin_1B410A454A12532B11DB6999778454FC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_NPC_CustomPreview.AB_NPC_CustomPreview_C.ExecuteUbergraph_AB_NPC_CustomPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEntryPinArray      K2Node_MakeStruct_SequenceEntryPinArray                          (None)

void UAB_NPC_CustomPreview_C::ExecuteUbergraph_AB_NPC_CustomPreview(int32 EntryPoint, const struct FSequenceEntryPinArray& K2Node_MakeStruct_SequenceEntryPinArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_NPC_CustomPreview_C", "ExecuteUbergraph_AB_NPC_CustomPreview");

	Params::UAB_NPC_CustomPreview_C_ExecuteUbergraph_AB_NPC_CustomPreview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SequenceEntryPinArray = K2Node_MakeStruct_SequenceEntryPinArray;

	UObject::ProcessEvent(Func, &Parms);

}

}


