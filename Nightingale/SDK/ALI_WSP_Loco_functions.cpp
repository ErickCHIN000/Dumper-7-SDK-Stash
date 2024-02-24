#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_WSP_Loco.ALI_WSP_Loco_C
// (None)

class UClass* IALI_WSP_Loco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_WSP_Loco_C");

	return Clss;
}


// ALI_WSP_Loco_C ALI_WSP_Loco.Default__ALI_WSP_Loco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_WSP_Loco_C* IALI_WSP_Loco_C::GetDefaultObj()
{
	static class IALI_WSP_Loco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_WSP_Loco_C*>(IALI_WSP_Loco_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_WSP_Loco.ALI_WSP_Loco_C.TrotLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InTrotPose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InTrotPlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimSequenceCache          TrotAnimSequence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   TrotLayer                                                        (Parm, OutParm, NoDestructor)

void IALI_WSP_Loco_C::TrotLayer(const struct FPoseLink& InTrotPose, double InTrotPlayRate, const struct FAnimSequenceCache& TrotAnimSequence, struct FPoseLink* TrotLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_WSP_Loco_C", "TrotLayer");

	Params::IALI_WSP_Loco_C_TrotLayer_Params Parms{};

	Parms.InTrotPose = InTrotPose;
	Parms.InTrotPlayRate = InTrotPlayRate;
	Parms.TrotAnimSequence = TrotAnimSequence;

	UObject::ProcessEvent(Func, &Parms);

	if (TrotLayer != nullptr)
		*TrotLayer = std::move(Parms.TrotLayer);

}


// Function ALI_WSP_Loco.ALI_WSP_Loco_C.WalkLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InWalkPose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FAnimSequenceCache          WalkAnimSequence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InWalkPlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   WalkLayer                                                        (Parm, OutParm, NoDestructor)

void IALI_WSP_Loco_C::WalkLayer(const struct FPoseLink& InWalkPose, const struct FAnimSequenceCache& WalkAnimSequence, double InWalkPlayRate, struct FPoseLink* WalkLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_WSP_Loco_C", "WalkLayer");

	Params::IALI_WSP_Loco_C_WalkLayer_Params Parms{};

	Parms.InWalkPose = InWalkPose;
	Parms.WalkAnimSequence = WalkAnimSequence;
	Parms.InWalkPlayRate = InWalkPlayRate;

	UObject::ProcessEvent(Func, &Parms);

	if (WalkLayer != nullptr)
		*WalkLayer = std::move(Parms.WalkLayer);

}


// Function ALI_WSP_Loco.ALI_WSP_Loco_C.IdleLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   IdleIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             IdleInPlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimSequenceCache          IdleAnimSequence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   IdleLayer                                                        (Parm, OutParm, NoDestructor)

void IALI_WSP_Loco_C::IdleLayer(const struct FPoseLink& IdleIn, double IdleInPlayRate, const struct FAnimSequenceCache& IdleAnimSequence, struct FPoseLink* IdleLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_WSP_Loco_C", "IdleLayer");

	Params::IALI_WSP_Loco_C_IdleLayer_Params Parms{};

	Parms.IdleIn = IdleIn;
	Parms.IdleInPlayRate = IdleInPlayRate;
	Parms.IdleAnimSequence = IdleAnimSequence;

	UObject::ProcessEvent(Func, &Parms);

	if (IdleLayer != nullptr)
		*IdleLayer = std::move(Parms.IdleLayer);

}

}


