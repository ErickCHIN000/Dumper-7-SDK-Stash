#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C
// (None)

class UClass* UThreeRD_MAL_RIG_VehicleAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("3RD_MAL_RIG_VehicleAnimBP_C");

	return Clss;
}


// 3RD_MAL_RIG_VehicleAnimBP_C 3RD_MAL_RIG_VehicleAnimBP.Default__3RD_MAL_RIG_VehicleAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThreeRD_MAL_RIG_VehicleAnimBP_C* UThreeRD_MAL_RIG_VehicleAnimBP_C::GetDefaultObj()
{
	static class UThreeRD_MAL_RIG_VehicleAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreeRD_MAL_RIG_VehicleAnimBP_C*>(UThreeRD_MAL_RIG_VehicleAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.VehicleLowerBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LowerInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBody                                                 (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_VehicleAnimBP_C::VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_VehicleAnimBP_C", "VehicleLowerBody");

	Params::UThreeRD_MAL_RIG_VehicleAnimBP_C_VehicleLowerBody_Params Parms{};

	Parms.LowerInPose = LowerInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBody != nullptr)
		*VehicleLowerBody = std::move(Parms.VehicleLowerBody);

}


// Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.VehicleUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleUpperBody                                                 (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_VehicleAnimBP_C::VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_VehicleAnimBP_C", "VehicleUpperBody");

	Params::UThreeRD_MAL_RIG_VehicleAnimBP_C_VehicleUpperBody_Params Parms{};

	Parms.UpperInPose = UpperInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleUpperBody != nullptr)
		*VehicleUpperBody = std::move(Parms.VehicleUpperBody);

}


// Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_VehicleAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_VehicleAnimBP_C", "AnimGraph");

	Params::UThreeRD_MAL_RIG_VehicleAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963
// (BlueprintEvent)
// Parameters:

void UThreeRD_MAL_RIG_VehicleAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_VehicleAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963");



	UObject::ProcessEvent(Func, nullptr);

}


// Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102
// (BlueprintEvent)
// Parameters:

void UThreeRD_MAL_RIG_VehicleAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_VehicleAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102");



	UObject::ProcessEvent(Func, nullptr);

}


// Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThreeRD_MAL_RIG_VehicleAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_VehicleAnimBP_C", "BlueprintUpdateAnimation");

	Params::UThreeRD_MAL_RIG_VehicleAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThreeRD_MAL_RIG_VehicleAnimBP_C::ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_FMin_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue_1, float CallFunc_FMin_ReturnValue_2, float CallFunc_Ease_ReturnValue, float CallFunc_Ease_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_VehicleAnimBP_C", "ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP");

	Params::UThreeRD_MAL_RIG_VehicleAnimBP_C_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue = CallFunc_GetAttachedToSeat_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_NormalizeAxis_ReturnValue = CallFunc_NormalizeAxis_ReturnValue;
	Parms.CallFunc_NormalizeAxis_ReturnValue_1 = CallFunc_NormalizeAxis_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue_2 = CallFunc_FMin_ReturnValue_2;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue_1 = CallFunc_Ease_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


