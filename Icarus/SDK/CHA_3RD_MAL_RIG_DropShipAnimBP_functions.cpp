#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C
// (None)

class UClass* UCHA_3RD_MAL_RIG_DropShipAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CHA_3RD_MAL_RIG_DropShipAnimBP_C");

	return Clss;
}


// CHA_3RD_MAL_RIG_DropShipAnimBP_C CHA_3RD_MAL_RIG_DropShipAnimBP.Default__CHA_3RD_MAL_RIG_DropShipAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCHA_3RD_MAL_RIG_DropShipAnimBP_C* UCHA_3RD_MAL_RIG_DropShipAnimBP_C::GetDefaultObj()
{
	static class UCHA_3RD_MAL_RIG_DropShipAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCHA_3RD_MAL_RIG_DropShipAnimBP_C*>(UCHA_3RD_MAL_RIG_DropShipAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.VehicleLowerBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LowerInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBody                                                 (Parm, OutParm, NoDestructor)

void UCHA_3RD_MAL_RIG_DropShipAnimBP_C::VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CHA_3RD_MAL_RIG_DropShipAnimBP_C", "VehicleLowerBody");

	Params::UCHA_3RD_MAL_RIG_DropShipAnimBP_C_VehicleLowerBody_Params Parms{};

	Parms.LowerInPose = LowerInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBody != nullptr)
		*VehicleLowerBody = std::move(Parms.VehicleLowerBody);

}


// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.VehicleUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleUpperBody                                                 (Parm, OutParm, NoDestructor)

void UCHA_3RD_MAL_RIG_DropShipAnimBP_C::VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CHA_3RD_MAL_RIG_DropShipAnimBP_C", "VehicleUpperBody");

	Params::UCHA_3RD_MAL_RIG_DropShipAnimBP_C_VehicleUpperBody_Params Parms{};

	Parms.UpperInPose = UpperInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleUpperBody != nullptr)
		*VehicleUpperBody = std::move(Parms.VehicleUpperBody);

}


// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCHA_3RD_MAL_RIG_DropShipAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CHA_3RD_MAL_RIG_DropShipAnimBP_C", "AnimGraph");

	Params::UCHA_3RD_MAL_RIG_DropShipAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38
// (BlueprintEvent)
// Parameters:

void UCHA_3RD_MAL_RIG_DropShipAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CHA_3RD_MAL_RIG_DropShipAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCHA_3RD_MAL_RIG_DropShipAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CHA_3RD_MAL_RIG_DropShipAnimBP_C", "BlueprintUpdateAnimation");

	Params::UCHA_3RD_MAL_RIG_DropShipAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DropshipSeat_C*          K2Node_DynamicCast_AsBP_Dropship_Seat                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCHA_3RD_MAL_RIG_DropShipAnimBP_C::ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, float CallFunc_FMin_ReturnValue, class ABP_DropshipSeat_C* K2Node_DynamicCast_AsBP_Dropship_Seat, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CHA_3RD_MAL_RIG_DropShipAnimBP_C", "ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP");

	Params::UCHA_3RD_MAL_RIG_DropShipAnimBP_C_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue = CallFunc_GetAttachedToSeat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Dropship_Seat = K2Node_DynamicCast_AsBP_Dropship_Seat;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


