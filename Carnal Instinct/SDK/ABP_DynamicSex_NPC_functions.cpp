#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DynamicSex_NPC.ABP_DynamicSex_NPC_C
// (None)

class UClass* UABP_DynamicSex_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DynamicSex_NPC_C");

	return Clss;
}


// ABP_DynamicSex_NPC_C ABP_DynamicSex_NPC.Default__ABP_DynamicSex_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DynamicSex_NPC_C* UABP_DynamicSex_NPC_C::GetDefaultObj()
{
	static class UABP_DynamicSex_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DynamicSex_NPC_C*>(UABP_DynamicSex_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DynamicSex_NPC.ABP_DynamicSex_NPC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_DynamicSex_NPC_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_NPC_C", "AnimGraph");

	Params::UABP_DynamicSex_NPC_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_DynamicSex_NPC.ABP_DynamicSex_NPC_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DynamicSex_NPC_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_NPC_C", "BlueprintUpdateAnimation");

	Params::UABP_DynamicSex_NPC_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_DynamicSex_NPC.ABP_DynamicSex_NPC_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_DynamicSex_NPC_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_NPC_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_DynamicSex_NPC.ABP_DynamicSex_NPC_C.ExecuteUbergraph_ABP_DynamicSex_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DynamicSex_Base_C*       CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_DynamicSex_NPC_C::ExecuteUbergraph_ABP_DynamicSex_NPC(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class ABP_DynamicSex_Base_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_NPC_C", "ExecuteUbergraph_ABP_DynamicSex_NPC");

	Params::UABP_DynamicSex_NPC_C_ExecuteUbergraph_ABP_DynamicSex_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


