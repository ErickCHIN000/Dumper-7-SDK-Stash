#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SG_TED.BPAnim_SG_TED_C
// (None)

class UClass* UBPAnim_SG_TED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SG_TED_C");

	return Clss;
}


// BPAnim_SG_TED_C BPAnim_SG_TED.Default__BPAnim_SG_TED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SG_TED_C* UBPAnim_SG_TED_C::GetDefaultObj()
{
	static class UBPAnim_SG_TED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SG_TED_C*>(UBPAnim_SG_TED_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SG_TED.BPAnim_SG_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_BlendListByBool_75A16F2F4325207E8AEFE6A2C3064253
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_BlendListByBool_75A16F2F4325207E8AEFE6A2C3064253()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_TED_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_BlendListByBool_75A16F2F4325207E8AEFE6A2C3064253");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_TED.BPAnim_SG_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_TED_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_TED.BPAnim_SG_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_TED_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_TED.BPAnim_SG_TED_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SG_TED_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_TED_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_TED.BPAnim_SG_TED_C.ExecuteUbergraph_BPAnim_SG_TED
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_SG_TED_C::ExecuteUbergraph_BPAnim_SG_TED(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_TED_C", "ExecuteUbergraph_BPAnim_SG_TED");

	Params::UBPAnim_SG_TED_C_ExecuteUbergraph_BPAnim_SG_TED_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


