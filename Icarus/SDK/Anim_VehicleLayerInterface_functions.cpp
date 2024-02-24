#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Anim_VehicleLayerInterface.Anim_VehicleLayerInterface_C
// (None)

class UClass* IAnim_VehicleLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anim_VehicleLayerInterface_C");

	return Clss;
}


// Anim_VehicleLayerInterface_C Anim_VehicleLayerInterface.Default__Anim_VehicleLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IAnim_VehicleLayerInterface_C* IAnim_VehicleLayerInterface_C::GetDefaultObj()
{
	static class IAnim_VehicleLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IAnim_VehicleLayerInterface_C*>(IAnim_VehicleLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Anim_VehicleLayerInterface.Anim_VehicleLayerInterface_C.VehicleUpperBody
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   UpperInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleUpperBody                                                 (Parm, OutParm, NoDestructor)

void IAnim_VehicleLayerInterface_C::VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_VehicleLayerInterface_C", "VehicleUpperBody");

	Params::IAnim_VehicleLayerInterface_C_VehicleUpperBody_Params Parms{};

	Parms.UpperInPose = UpperInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleUpperBody != nullptr)
		*VehicleUpperBody = std::move(Parms.VehicleUpperBody);

}


// Function Anim_VehicleLayerInterface.Anim_VehicleLayerInterface_C.VehicleLowerBody
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   LowerInPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBody                                                 (Parm, OutParm, NoDestructor)

void IAnim_VehicleLayerInterface_C::VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_VehicleLayerInterface_C", "VehicleLowerBody");

	Params::IAnim_VehicleLayerInterface_C_VehicleLowerBody_Params Parms{};

	Parms.LowerInPose = LowerInPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBody != nullptr)
		*VehicleLowerBody = std::move(Parms.VehicleLowerBody);

}

}


