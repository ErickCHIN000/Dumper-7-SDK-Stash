#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C
// (None)

class UClass* UThreeRD_MAL_RIG_Chair_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("3RD_MAL_RIG_Chair_AnimBP_C");

	return Clss;
}


// 3RD_MAL_RIG_Chair_AnimBP_C 3RD_MAL_RIG_Chair_AnimBP.Default__3RD_MAL_RIG_Chair_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThreeRD_MAL_RIG_Chair_AnimBP_C* UThreeRD_MAL_RIG_Chair_AnimBP_C::GetDefaultObj()
{
	static class UThreeRD_MAL_RIG_Chair_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreeRD_MAL_RIG_Chair_AnimBP_C*>(UThreeRD_MAL_RIG_Chair_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C.VehicleLowerBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LowerInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBody                                                 (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_Chair_AnimBP_C::VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_Chair_AnimBP_C", "VehicleLowerBody");

	Params::UThreeRD_MAL_RIG_Chair_AnimBP_C_VehicleLowerBody_Params Parms{};

	Parms.LowerInPose = LowerInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBody != nullptr)
		*VehicleLowerBody = std::move(Parms.VehicleLowerBody);

}


// Function 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C.VehicleUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleUpperBody                                                 (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_Chair_AnimBP_C::VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_Chair_AnimBP_C", "VehicleUpperBody");

	Params::UThreeRD_MAL_RIG_Chair_AnimBP_C_VehicleUpperBody_Params Parms{};

	Parms.UpperInPose = UpperInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleUpperBody != nullptr)
		*VehicleUpperBody = std::move(Parms.VehicleUpperBody);

}


// Function 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_Chair_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_Chair_AnimBP_C", "AnimGraph");

	Params::UThreeRD_MAL_RIG_Chair_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP_AnimGraphNode_TwoWayBlend_C412B1A04C8A3F73B4E7E89ED8F54F8C
// (BlueprintEvent)
// Parameters:

void UThreeRD_MAL_RIG_Chair_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP_AnimGraphNode_TwoWayBlend_C412B1A04C8A3F73B4E7E89ED8F54F8C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_Chair_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP_AnimGraphNode_TwoWayBlend_C412B1A04C8A3F73B4E7E89ED8F54F8C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThreeRD_MAL_RIG_Chair_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_Chair_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UThreeRD_MAL_RIG_Chair_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C.ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThreeRD_MAL_RIG_Chair_AnimBP_C::ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_Chair_AnimBP_C", "ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP");

	Params::UThreeRD_MAL_RIG_Chair_AnimBP_C_ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


