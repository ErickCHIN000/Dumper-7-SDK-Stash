#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C
// (None)

class UClass* UOneST_CHA_RIG_VehicleAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("1ST_CHA_RIG_VehicleAnimBP_C");

	return Clss;
}


// 1ST_CHA_RIG_VehicleAnimBP_C 1ST_CHA_RIG_VehicleAnimBP.Default__1ST_CHA_RIG_VehicleAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOneST_CHA_RIG_VehicleAnimBP_C* UOneST_CHA_RIG_VehicleAnimBP_C::GetDefaultObj()
{
	static class UOneST_CHA_RIG_VehicleAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOneST_CHA_RIG_VehicleAnimBP_C*>(UOneST_CHA_RIG_VehicleAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.VehicleLowerBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LowerInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBody                                                 (Parm, OutParm, NoDestructor)

void UOneST_CHA_RIG_VehicleAnimBP_C::VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_VehicleAnimBP_C", "VehicleLowerBody");

	Params::UOneST_CHA_RIG_VehicleAnimBP_C_VehicleLowerBody_Params Parms{};

	Parms.LowerInPose = LowerInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBody != nullptr)
		*VehicleLowerBody = std::move(Parms.VehicleLowerBody);

}


// Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.VehicleUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleUpperBody                                                 (Parm, OutParm, NoDestructor)

void UOneST_CHA_RIG_VehicleAnimBP_C::VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_VehicleAnimBP_C", "VehicleUpperBody");

	Params::UOneST_CHA_RIG_VehicleAnimBP_C_VehicleUpperBody_Params Parms{};

	Parms.UpperInPose = UpperInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleUpperBody != nullptr)
		*VehicleUpperBody = std::move(Parms.VehicleUpperBody);

}


// Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UOneST_CHA_RIG_VehicleAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_VehicleAnimBP_C", "AnimGraph");

	Params::UOneST_CHA_RIG_VehicleAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B
// (BlueprintEvent)
// Parameters:

void UOneST_CHA_RIG_VehicleAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_VehicleAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82
// (BlueprintEvent)
// Parameters:

void UOneST_CHA_RIG_VehicleAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_VehicleAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82");



	UObject::ProcessEvent(Func, nullptr);

}


// Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOneST_CHA_RIG_VehicleAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_VehicleAnimBP_C", "BlueprintUpdateAnimation");

	Params::UOneST_CHA_RIG_VehicleAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOneST_CHA_RIG_VehicleAnimBP_C::ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_VehicleAnimBP_C", "ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP");

	Params::UOneST_CHA_RIG_VehicleAnimBP_C_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


