#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_ch_nagantAttBase.abp_ch_nagantAttBase_C
// (None)

class UClass* UAbp_ch_nagantAttBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_ch_nagantAttBase_C");

	return Clss;
}


// abp_ch_nagantAttBase_C abp_ch_nagantAttBase.Default__abp_ch_nagantAttBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_ch_nagantAttBase_C* UAbp_ch_nagantAttBase_C::GetDefaultObj()
{
	static class UAbp_ch_nagantAttBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_ch_nagantAttBase_C*>(UAbp_ch_nagantAttBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_ch_nagantAttBase.abp_ch_nagantAttBase_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_ch_nagantAttBase_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagantAttBase_C", "AnimGraph");

	Params::UAbp_ch_nagantAttBase_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_ch_nagantAttBase.abp_ch_nagantAttBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_ch_nagantAttBase_AnimGraphNode_ModifyBone_8B7BE86549836B7EDD356F94666A48F6
// (BlueprintEvent)
// Parameters:

void UAbp_ch_nagantAttBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_ch_nagantAttBase_AnimGraphNode_ModifyBone_8B7BE86549836B7EDD356F94666A48F6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagantAttBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_ch_nagantAttBase_AnimGraphNode_ModifyBone_8B7BE86549836B7EDD356F94666A48F6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_ch_nagantAttBase.abp_ch_nagantAttBase_C.AnimNotify_BarrelRollOnShoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_ch_nagantAttBase_C::AnimNotify_BarrelRollOnShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagantAttBase_C", "AnimNotify_BarrelRollOnShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_ch_nagantAttBase.abp_ch_nagantAttBase_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_ch_nagantAttBase_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagantAttBase_C", "BlueprintUpdateAnimation");

	Params::UAbp_ch_nagantAttBase_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_ch_nagantAttBase.abp_ch_nagantAttBase_C.ExecuteUbergraph_abp_ch_nagantAttBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_ch_nagantAttBase_C::ExecuteUbergraph_abp_ch_nagantAttBase(int32 EntryPoint, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagantAttBase_C", "ExecuteUbergraph_abp_ch_nagantAttBase");

	Params::UAbp_ch_nagantAttBase_C_ExecuteUbergraph_abp_ch_nagantAttBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_ch_nagantAttBase.abp_ch_nagantAttBase_C.StartOnShotBarrelRoll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_ch_nagantAttBase_C::StartOnShotBarrelRoll__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagantAttBase_C", "StartOnShotBarrelRoll__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


