#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALS_AnimBP_Sitting.ALS_AnimBP_Sitting_C
// (None)

class UClass* UALS_AnimBP_Sitting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_AnimBP_Sitting_C");

	return Clss;
}


// ALS_AnimBP_Sitting_C ALS_AnimBP_Sitting.Default__ALS_AnimBP_Sitting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_AnimBP_Sitting_C* UALS_AnimBP_Sitting_C::GetDefaultObj()
{
	static class UALS_AnimBP_Sitting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_AnimBP_Sitting_C*>(UALS_AnimBP_Sitting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_AnimBP_Sitting.ALS_AnimBP_Sitting_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UALS_AnimBP_Sitting_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_Sitting_C", "AnimGraph");

	Params::UALS_AnimBP_Sitting_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ALS_AnimBP_Sitting.ALS_AnimBP_Sitting_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_AnimBP_Sitting_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_Sitting_C", "BlueprintUpdateAnimation");

	Params::UALS_AnimBP_Sitting_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_AnimBP_Sitting.ALS_AnimBP_Sitting_C.ExecuteUbergraph_ALS_AnimBP_Sitting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UALS_AnimBP_Sitting_C::ExecuteUbergraph_ALS_AnimBP_Sitting(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_Sitting_C", "ExecuteUbergraph_ALS_AnimBP_Sitting");

	Params::UALS_AnimBP_Sitting_C_ExecuteUbergraph_ALS_AnimBP_Sitting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


