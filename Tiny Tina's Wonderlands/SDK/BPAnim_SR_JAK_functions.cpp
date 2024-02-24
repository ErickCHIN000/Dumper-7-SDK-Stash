#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SR_JAK.BPAnim_SR_JAK_C
// (None)

class UClass* UBPAnim_SR_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SR_JAK_C");

	return Clss;
}


// BPAnim_SR_JAK_C BPAnim_SR_JAK.Default__BPAnim_SR_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SR_JAK_C* UBPAnim_SR_JAK_C::GetDefaultObj()
{
	static class UBPAnim_SR_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SR_JAK_C*>(UBPAnim_SR_JAK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_BlendListByBool_D2DD4BA7489F4A264CBE798CB17B4188
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_BlendListByBool_D2DD4BA7489F4A264CBE798CB17B4188()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_BlendListByBool_D2DD4BA7489F4A264CBE798CB17B4188");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SR_JAK_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_JAK_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.ExecuteUbergraph_BPAnim_SR_JAK
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_SR_JAK_C::ExecuteUbergraph_BPAnim_SR_JAK(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_JAK_C", "ExecuteUbergraph_BPAnim_SR_JAK");

	Params::UBPAnim_SR_JAK_C_ExecuteUbergraph_BPAnim_SR_JAK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


