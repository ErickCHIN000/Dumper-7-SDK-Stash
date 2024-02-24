#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_RP_Command_AnimBP.BP_RP_Command_AnimBP_C
// (None)

class UClass* UBP_RP_Command_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RP_Command_AnimBP_C");

	return Clss;
}


// BP_RP_Command_AnimBP_C BP_RP_Command_AnimBP.Default__BP_RP_Command_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RP_Command_AnimBP_C* UBP_RP_Command_AnimBP_C::GetDefaultObj()
{
	static class UBP_RP_Command_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RP_Command_AnimBP_C*>(UBP_RP_Command_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RP_Command_AnimBP.BP_RP_Command_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_RP_Command_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_AnimBP_C", "AnimGraph");

	Params::UBP_RP_Command_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_RP_Command_AnimBP.BP_RP_Command_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RP_Command_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UBP_RP_Command_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RP_Command_AnimBP.BP_RP_Command_AnimBP_C.ExecuteUbergraph_BP_RP_Command_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RP_Command_Base_C*       K2Node_DynamicCast_AsBP_RP_Command_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RP_Command_AnimBP_C::ExecuteUbergraph_BP_RP_Command_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_RP_Command_Base_C* K2Node_DynamicCast_AsBP_RP_Command_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RP_Command_AnimBP_C", "ExecuteUbergraph_BP_RP_Command_AnimBP");

	Params::UBP_RP_Command_AnimBP_C_ExecuteUbergraph_BP_RP_Command_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_RP_Command_Base = K2Node_DynamicCast_AsBP_RP_Command_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


