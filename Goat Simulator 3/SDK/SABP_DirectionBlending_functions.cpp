#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SABP_DirectionBlending.SABP_DirectionBlending_C
// (None)

class UClass* USABP_DirectionBlending_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SABP_DirectionBlending_C");

	return Clss;
}


// SABP_DirectionBlending_C SABP_DirectionBlending.Default__SABP_DirectionBlending_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USABP_DirectionBlending_C* USABP_DirectionBlending_C::GetDefaultObj()
{
	static class USABP_DirectionBlending_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USABP_DirectionBlending_C*>(USABP_DirectionBlending_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SABP_DirectionBlending.SABP_DirectionBlending_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   F_Movement                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   B_Movement                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FL_Movement                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BL_Movement                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FR_Movement                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BR_Movement                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USABP_DirectionBlending_C::AnimGraph(const struct FPoseLink& F_Movement, const struct FPoseLink& B_Movement, const struct FPoseLink& FL_Movement, const struct FPoseLink& BL_Movement, const struct FPoseLink& FR_Movement, const struct FPoseLink& BR_Movement, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SABP_DirectionBlending_C", "AnimGraph");

	Params::USABP_DirectionBlending_C_AnimGraph_Params Parms{};

	Parms.F_Movement = F_Movement;
	Parms.B_Movement = B_Movement;
	Parms.FL_Movement = FL_Movement;
	Parms.BL_Movement = BL_Movement;
	Parms.FR_Movement = FR_Movement;
	Parms.BR_Movement = BR_Movement;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SABP_DirectionBlending.SABP_DirectionBlending_C.ExecuteUbergraph_SABP_DirectionBlending
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USABP_DirectionBlending_C::ExecuteUbergraph_SABP_DirectionBlending(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SABP_DirectionBlending_C", "ExecuteUbergraph_SABP_DirectionBlending");

	Params::USABP_DirectionBlending_C_ExecuteUbergraph_SABP_DirectionBlending_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


