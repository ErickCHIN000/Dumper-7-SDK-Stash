#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C
// (None)

class UClass* UBoris_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Boris_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Boris_Skeleton_AnimBlueprint_C Boris_Skeleton_AnimBlueprint.Default__Boris_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBoris_Skeleton_AnimBlueprint_C* UBoris_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UBoris_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoris_Skeleton_AnimBlueprint_C*>(UBoris_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBoris_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boris_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UBoris_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boris_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_04450E3B4AE0E4D3A5FF8090FCACFC66
// (BlueprintEvent)
// Parameters:

void UBoris_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Boris_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_04450E3B4AE0E4D3A5FF8090FCACFC66()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boris_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Boris_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_04450E3B4AE0E4D3A5FF8090FCACFC66");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoris_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boris_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UBoris_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Boris_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BorisEnemy_C*            K2Node_DynamicCast_AsBP_Boris_Enemy                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoris_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Boris_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_BorisEnemy_C* K2Node_DynamicCast_AsBP_Boris_Enemy, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_RInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boris_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Boris_Skeleton_AnimBlueprint");

	Params::UBoris_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Boris_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Boris_Enemy = K2Node_DynamicCast_AsBP_Boris_Enemy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


