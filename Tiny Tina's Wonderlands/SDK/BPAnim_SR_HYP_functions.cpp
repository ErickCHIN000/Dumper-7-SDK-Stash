#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SR_HYP.BPAnim_SR_HYP_C
// (None)

class UClass* UBPAnim_SR_HYP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SR_HYP_C");

	return Clss;
}


// BPAnim_SR_HYP_C BPAnim_SR_HYP.Default__BPAnim_SR_HYP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SR_HYP_C* UBPAnim_SR_HYP_C::GetDefaultObj()
{
	static class UBPAnim_SR_HYP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SR_HYP_C*>(UBPAnim_SR_HYP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_HYP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_HYP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_BlendListByBool_14EDDD1E433697255DF0ACA035D07B31
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_HYP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_BlendListByBool_14EDDD1E433697255DF0ACA035D07B31()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_HYP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_BlendListByBool_14EDDD1E433697255DF0ACA035D07B31");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_HYP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_HYP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SR_HYP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_HYP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.ExecuteUbergraph_BPAnim_SR_HYP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_SR_HYP_C::ExecuteUbergraph_BPAnim_SR_HYP(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_HYP_C", "ExecuteUbergraph_BPAnim_SR_HYP");

	Params::UBPAnim_SR_HYP_C_ExecuteUbergraph_BPAnim_SR_HYP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


