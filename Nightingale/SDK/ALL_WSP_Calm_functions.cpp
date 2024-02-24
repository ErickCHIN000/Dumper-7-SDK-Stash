#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALL_WSP_Calm.ALL_WSP_Calm_C
// (None)

class UClass* UALL_WSP_Calm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALL_WSP_Calm_C");

	return Clss;
}


// ALL_WSP_Calm_C ALL_WSP_Calm.Default__ALL_WSP_Calm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALL_WSP_Calm_C* UALL_WSP_Calm_C::GetDefaultObj()
{
	static class UALL_WSP_Calm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALL_WSP_Calm_C*>(UALL_WSP_Calm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALL_WSP_Calm.ALL_WSP_Calm_C.IdleLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   IdleIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             IdleInPlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimSequenceCache          IdleAnimSequence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   IdleLayer                                                        (Parm, OutParm, NoDestructor)

void UALL_WSP_Calm_C::IdleLayer(const struct FPoseLink& IdleIn, double IdleInPlayRate, const struct FAnimSequenceCache& IdleAnimSequence, struct FPoseLink* IdleLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALL_WSP_Calm_C", "IdleLayer");

	Params::UALL_WSP_Calm_C_IdleLayer_Params Parms{};

	Parms.IdleIn = IdleIn;
	Parms.IdleInPlayRate = IdleInPlayRate;
	Parms.IdleAnimSequence = IdleAnimSequence;

	UObject::ProcessEvent(Func, &Parms);

	if (IdleLayer != nullptr)
		*IdleLayer = std::move(Parms.IdleLayer);

}


// Function ALL_WSP_Calm.ALL_WSP_Calm_C.WalkLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InWalkPose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FAnimSequenceCache          WalkAnimSequence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InWalkPlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   WalkLayer                                                        (Parm, OutParm, NoDestructor)

void UALL_WSP_Calm_C::WalkLayer(const struct FPoseLink& InWalkPose, const struct FAnimSequenceCache& WalkAnimSequence, double InWalkPlayRate, struct FPoseLink* WalkLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALL_WSP_Calm_C", "WalkLayer");

	Params::UALL_WSP_Calm_C_WalkLayer_Params Parms{};

	Parms.InWalkPose = InWalkPose;
	Parms.WalkAnimSequence = WalkAnimSequence;
	Parms.InWalkPlayRate = InWalkPlayRate;

	UObject::ProcessEvent(Func, &Parms);

	if (WalkLayer != nullptr)
		*WalkLayer = std::move(Parms.WalkLayer);

}


// Function ALL_WSP_Calm.ALL_WSP_Calm_C.TrotLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InTrotPose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InTrotPlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimSequenceCache          TrotAnimSequence                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   TrotLayer                                                        (Parm, OutParm, NoDestructor)

void UALL_WSP_Calm_C::TrotLayer(const struct FPoseLink& InTrotPose, double InTrotPlayRate, const struct FAnimSequenceCache& TrotAnimSequence, struct FPoseLink* TrotLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALL_WSP_Calm_C", "TrotLayer");

	Params::UALL_WSP_Calm_C_TrotLayer_Params Parms{};

	Parms.InTrotPose = InTrotPose;
	Parms.InTrotPlayRate = InTrotPlayRate;
	Parms.TrotAnimSequence = TrotAnimSequence;

	UObject::ProcessEvent(Func, &Parms);

	if (TrotLayer != nullptr)
		*TrotLayer = std::move(Parms.TrotLayer);

}


// Function ALL_WSP_Calm.ALL_WSP_Calm_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UALL_WSP_Calm_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALL_WSP_Calm_C", "AnimGraph");

	Params::UALL_WSP_Calm_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ALL_WSP_Calm.ALL_WSP_Calm_C.ExecuteUbergraph_ALL_WSP_Calm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALL_WSP_Calm_C::ExecuteUbergraph_ALL_WSP_Calm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALL_WSP_Calm_C", "ExecuteUbergraph_ALL_WSP_Calm");

	Params::UALL_WSP_Calm_C_ExecuteUbergraph_ALL_WSP_Calm_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


