#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SG_Torgue.BPAnim_SG_Torgue_C
// (None)

class UClass* UBPAnim_SG_Torgue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SG_Torgue_C");

	return Clss;
}


// BPAnim_SG_Torgue_C BPAnim_SG_Torgue.Default__BPAnim_SG_Torgue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SG_Torgue_C* UBPAnim_SG_Torgue_C::GetDefaultObj()
{
	static class UBPAnim_SG_Torgue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SG_Torgue_C*>(UBPAnim_SG_Torgue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_BlendListByBool_95D159304401C6DD37D1B0AB87E5FB2E
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_Torgue_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_BlendListByBool_95D159304401C6DD37D1B0AB87E5FB2E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_Torgue_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_BlendListByBool_95D159304401C6DD37D1B0AB87E5FB2E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_Torgue_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_Torgue_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_Torgue_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_Torgue_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SG_Torgue_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_Torgue_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.ExecuteUbergraph_BPAnim_SG_Torgue
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_SG_Torgue_C::ExecuteUbergraph_BPAnim_SG_Torgue(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_Torgue_C", "ExecuteUbergraph_BPAnim_SG_Torgue");

	Params::UBPAnim_SG_Torgue_C_ExecuteUbergraph_BPAnim_SG_Torgue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


