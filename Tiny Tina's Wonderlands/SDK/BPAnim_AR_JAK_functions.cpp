#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_AR_JAK.BPAnim_AR_JAK_C
// (None)

class UClass* UBPAnim_AR_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_AR_JAK_C");

	return Clss;
}


// BPAnim_AR_JAK_C BPAnim_AR_JAK.Default__BPAnim_AR_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_AR_JAK_C* UBPAnim_AR_JAK_C::GetDefaultObj()
{
	static class UBPAnim_AR_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_AR_JAK_C*>(UBPAnim_AR_JAK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_AR_JAK.BPAnim_AR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_613EC15D49888B7414BA309F4687CD9E
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_613EC15D49888B7414BA309F4687CD9E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_613EC15D49888B7414BA309F4687CD9E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_JAK.BPAnim_AR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_1FD2F75841D91445643045A38773FE25
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_1FD2F75841D91445643045A38773FE25()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_1FD2F75841D91445643045A38773FE25");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_JAK.BPAnim_AR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_B23BAB3F4420E8E52A34939016E61FF4
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_B23BAB3F4420E8E52A34939016E61FF4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_B23BAB3F4420E8E52A34939016E61FF4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_JAK.BPAnim_AR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_F145DE1F44F4CBFF5D8BC6BE2B27E27A
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_F145DE1F44F4CBFF5D8BC6BE2B27E27A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_F145DE1F44F4CBFF5D8BC6BE2B27E27A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_JAK.BPAnim_AR_JAK_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_AR_JAK_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_JAK_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_JAK.BPAnim_AR_JAK_C.ExecuteUbergraph_BPAnim_AR_JAK
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_AR_JAK_C::ExecuteUbergraph_BPAnim_AR_JAK(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_JAK_C", "ExecuteUbergraph_BPAnim_AR_JAK");

	Params::UBPAnim_AR_JAK_C_ExecuteUbergraph_BPAnim_AR_JAK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


