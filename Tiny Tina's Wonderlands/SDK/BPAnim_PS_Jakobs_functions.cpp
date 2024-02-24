#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C
// (None)

class UClass* UBPAnim_PS_Jakobs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PS_Jakobs_C");

	return Clss;
}


// BPAnim_PS_Jakobs_C BPAnim_PS_Jakobs.Default__BPAnim_PS_Jakobs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PS_Jakobs_C* UBPAnim_PS_Jakobs_C::GetDefaultObj()
{
	static class UBPAnim_PS_Jakobs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PS_Jakobs_C*>(UBPAnim_PS_Jakobs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_BlendListByBool_5F6FA0ED4BDC4E25811C6086CB176E24
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_Jakobs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_BlendListByBool_5F6FA0ED4BDC4E25811C6086CB176E24()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Jakobs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_BlendListByBool_5F6FA0ED4BDC4E25811C6086CB176E24");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_Jakobs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Jakobs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_Jakobs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Jakobs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_PS_Jakobs_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Jakobs_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.ExecuteUbergraph_BPAnim_PS_Jakobs
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_PS_Jakobs_C::ExecuteUbergraph_BPAnim_PS_Jakobs(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Jakobs_C", "ExecuteUbergraph_BPAnim_PS_Jakobs");

	Params::UBPAnim_PS_Jakobs_C_ExecuteUbergraph_BPAnim_PS_Jakobs_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


