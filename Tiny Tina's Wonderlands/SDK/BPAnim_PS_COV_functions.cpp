#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PS_COV.BPAnim_PS_COV_C
// (None)

class UClass* UBPAnim_PS_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PS_COV_C");

	return Clss;
}


// BPAnim_PS_COV_C BPAnim_PS_COV.Default__BPAnim_PS_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PS_COV_C* UBPAnim_PS_COV_C::GetDefaultObj()
{
	static class UBPAnim_PS_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PS_COV_C*>(UBPAnim_PS_COV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PS_COV.BPAnim_PS_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_BlendListByBool_5439CC454655B1B6FD5DC28F81E0B94A
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_BlendListByBool_5439CC454655B1B6FD5DC28F81E0B94A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_COV_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_BlendListByBool_5439CC454655B1B6FD5DC28F81E0B94A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_COV.BPAnim_PS_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_COV_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_COV.BPAnim_PS_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_COV_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_COV.BPAnim_PS_COV_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_PS_COV_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_COV_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_COV.BPAnim_PS_COV_C.ExecuteUbergraph_BPAnim_PS_COV
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_PS_COV_C::ExecuteUbergraph_BPAnim_PS_COV(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_COV_C", "ExecuteUbergraph_BPAnim_PS_COV");

	Params::UBPAnim_PS_COV_C_ExecuteUbergraph_BPAnim_PS_COV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


