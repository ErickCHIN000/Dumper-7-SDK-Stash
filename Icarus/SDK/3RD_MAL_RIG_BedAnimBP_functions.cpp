#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C
// (None)

class UClass* UThreeRD_MAL_RIG_BedAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("3RD_MAL_RIG_BedAnimBP_C");

	return Clss;
}


// 3RD_MAL_RIG_BedAnimBP_C 3RD_MAL_RIG_BedAnimBP.Default__3RD_MAL_RIG_BedAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThreeRD_MAL_RIG_BedAnimBP_C* UThreeRD_MAL_RIG_BedAnimBP_C::GetDefaultObj()
{
	static class UThreeRD_MAL_RIG_BedAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreeRD_MAL_RIG_BedAnimBP_C*>(UThreeRD_MAL_RIG_BedAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.VehicleLowerBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LowerInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBody                                                 (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_BedAnimBP_C::VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_BedAnimBP_C", "VehicleLowerBody");

	Params::UThreeRD_MAL_RIG_BedAnimBP_C_VehicleLowerBody_Params Parms{};

	Parms.LowerInPose = LowerInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBody != nullptr)
		*VehicleLowerBody = std::move(Parms.VehicleLowerBody);

}


// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.VehicleUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleUpperBody                                                 (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_BedAnimBP_C::VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_BedAnimBP_C", "VehicleUpperBody");

	Params::UThreeRD_MAL_RIG_BedAnimBP_C_VehicleUpperBody_Params Parms{};

	Parms.UpperInPose = UpperInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleUpperBody != nullptr)
		*VehicleUpperBody = std::move(Parms.VehicleUpperBody);

}


// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UThreeRD_MAL_RIG_BedAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_BedAnimBP_C", "AnimGraph");

	Params::UThreeRD_MAL_RIG_BedAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThreeRD_MAL_RIG_BedAnimBP_C::ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("3RD_MAL_RIG_BedAnimBP_C", "ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP");

	Params::UThreeRD_MAL_RIG_BedAnimBP_C_ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


