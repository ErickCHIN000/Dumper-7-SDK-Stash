#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PlayerCapture.ABP_PlayerCapture_C
// (None)

class UClass* UABP_PlayerCapture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PlayerCapture_C");

	return Clss;
}


// ABP_PlayerCapture_C ABP_PlayerCapture.Default__ABP_PlayerCapture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PlayerCapture_C* UABP_PlayerCapture_C::GetDefaultObj()
{
	static class UABP_PlayerCapture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PlayerCapture_C*>(UABP_PlayerCapture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_PlayerCapture.ABP_PlayerCapture_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_PlayerCapture_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlayerCapture_C", "AnimGraph");

	Params::UABP_PlayerCapture_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_PlayerCapture.ABP_PlayerCapture_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PlayerCapture_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlayerCapture_C", "BlueprintUpdateAnimation");

	Params::UABP_PlayerCapture_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_PlayerCapture.ABP_PlayerCapture_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_PlayerCapture_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlayerCapture_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_PlayerCapture.ABP_PlayerCapture_C.ExecuteUbergraph_ABP_PlayerCapture
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PlayerCapture_C::ExecuteUbergraph_ABP_PlayerCapture(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTimeX, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlayerCapture_C", "ExecuteUbergraph_ABP_PlayerCapture");

	Params::UABP_PlayerCapture_C_ExecuteUbergraph_ABP_PlayerCapture_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


