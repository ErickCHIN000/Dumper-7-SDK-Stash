#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SR_DAL.BPAnim_SR_DAL_C
// (None)

class UClass* UBPAnim_SR_DAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SR_DAL_C");

	return Clss;
}


// BPAnim_SR_DAL_C BPAnim_SR_DAL.Default__BPAnim_SR_DAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SR_DAL_C* UBPAnim_SR_DAL_C::GetDefaultObj()
{
	static class UBPAnim_SR_DAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SR_DAL_C*>(UBPAnim_SR_DAL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_BlendListByBool_1C4D0BD14BC310B82A6133A342FEC32A
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_BlendListByBool_1C4D0BD14BC310B82A6133A342FEC32A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_BlendListByBool_1C4D0BD14BC310B82A6133A342FEC32A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SR_DAL_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_DAL_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.ExecuteUbergraph_BPAnim_SR_DAL
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_SR_DAL_C::ExecuteUbergraph_BPAnim_SR_DAL(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_DAL_C", "ExecuteUbergraph_BPAnim_SR_DAL");

	Params::UBPAnim_SR_DAL_C_ExecuteUbergraph_BPAnim_SR_DAL_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


