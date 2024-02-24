#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SABP_LayerBlending.SABP_LayerBlending_C
// (None)

class UClass* USABP_LayerBlending_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SABP_LayerBlending_C");

	return Clss;
}


// SABP_LayerBlending_C SABP_LayerBlending.Default__SABP_LayerBlending_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USABP_LayerBlending_C* USABP_LayerBlending_C::GetDefaultObj()
{
	static class USABP_LayerBlending_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USABP_LayerBlending_C*>(USABP_LayerBlending_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SABP_LayerBlending.SABP_LayerBlending_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   Base_Layer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Overlay_Layer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Base_Pose_Layer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USABP_LayerBlending_C::AnimGraph(const struct FPoseLink& Base_Layer, const struct FPoseLink& Overlay_Layer, const struct FPoseLink& Base_Pose_Layer, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SABP_LayerBlending_C", "AnimGraph");

	Params::USABP_LayerBlending_C_AnimGraph_Params Parms{};

	Parms.Base_Layer = Base_Layer;
	Parms.Overlay_Layer = Overlay_Layer;
	Parms.Base_Pose_Layer = Base_Pose_Layer;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SABP_LayerBlending.SABP_LayerBlending_C.ExecuteUbergraph_SABP_LayerBlending
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USABP_LayerBlending_C::ExecuteUbergraph_SABP_LayerBlending(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SABP_LayerBlending_C", "ExecuteUbergraph_SABP_LayerBlending");

	Params::USABP_LayerBlending_C_ExecuteUbergraph_SABP_LayerBlending_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


