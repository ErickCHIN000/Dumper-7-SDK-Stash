#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FastTravel_Skeleton_AnimBlueprint.FastTravel_Skeleton_AnimBlueprint_C
// (None)

class UClass* UFastTravel_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FastTravel_Skeleton_AnimBlueprint_C");

	return Clss;
}


// FastTravel_Skeleton_AnimBlueprint_C FastTravel_Skeleton_AnimBlueprint.Default__FastTravel_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFastTravel_Skeleton_AnimBlueprint_C* UFastTravel_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UFastTravel_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFastTravel_Skeleton_AnimBlueprint_C*>(UFastTravel_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FastTravel_Skeleton_AnimBlueprint.FastTravel_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFastTravel_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravel_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UFastTravel_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function FastTravel_Skeleton_AnimBlueprint.FastTravel_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A5C889954ACC9241FA6170A6F9378760
// (BlueprintEvent)
// Parameters:

void UFastTravel_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A5C889954ACC9241FA6170A6F9378760()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravel_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A5C889954ACC9241FA6170A6F9378760");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FastTravel_Skeleton_AnimBlueprint.FastTravel_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_02C9D8C64B49708C1C3FE4BC0FF40039
// (BlueprintEvent)
// Parameters:

void UFastTravel_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_02C9D8C64B49708C1C3FE4BC0FF40039()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravel_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_02C9D8C64B49708C1C3FE4BC0FF40039");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FastTravel_Skeleton_AnimBlueprint.FastTravel_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFastTravel_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravel_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UFastTravel_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FastTravel_Skeleton_AnimBlueprint.FastTravel_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFastTravel_Skeleton_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravel_Skeleton_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FastTravel_Skeleton_AnimBlueprint.FastTravel_Skeleton_AnimBlueprint_C.ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AXMinusLift_C*               K2Node_DynamicCast_AsX_Lift                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFastTravel_Skeleton_AnimBlueprint_C::ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AXMinusLift_C* K2Node_DynamicCast_AsX_Lift, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravel_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint");

	Params::UFastTravel_Skeleton_AnimBlueprint_C_ExecuteUbergraph_FastTravel_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsX_Lift = K2Node_DynamicCast_AsX_Lift;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


