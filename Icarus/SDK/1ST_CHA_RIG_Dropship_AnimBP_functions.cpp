#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C
// (None)

class UClass* UOneST_CHA_RIG_Dropship_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("1ST_CHA_RIG_Dropship_AnimBP_C");

	return Clss;
}


// 1ST_CHA_RIG_Dropship_AnimBP_C 1ST_CHA_RIG_Dropship_AnimBP.Default__1ST_CHA_RIG_Dropship_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOneST_CHA_RIG_Dropship_AnimBP_C* UOneST_CHA_RIG_Dropship_AnimBP_C::GetDefaultObj()
{
	static class UOneST_CHA_RIG_Dropship_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOneST_CHA_RIG_Dropship_AnimBP_C*>(UOneST_CHA_RIG_Dropship_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UOneST_CHA_RIG_Dropship_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_Dropship_AnimBP_C", "AnimGraph");

	Params::UOneST_CHA_RIG_Dropship_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOneST_CHA_RIG_Dropship_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_Dropship_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UOneST_CHA_RIG_Dropship_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C.ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Part_MID_MK1_C*          K2Node_DynamicCast_AsBP_Part_MID_MK1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOneST_CHA_RIG_Dropship_AnimBP_C::ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Part_MID_MK1_C* K2Node_DynamicCast_AsBP_Part_MID_MK1, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("1ST_CHA_RIG_Dropship_AnimBP_C", "ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP");

	Params::UOneST_CHA_RIG_Dropship_AnimBP_C_ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Part_MID_MK1 = K2Node_DynamicCast_AsBP_Part_MID_MK1;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


