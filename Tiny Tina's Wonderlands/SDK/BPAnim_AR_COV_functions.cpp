#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_AR_COV.BPAnim_AR_COV_C
// (None)

class UClass* UBPAnim_AR_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_AR_COV_C");

	return Clss;
}


// BPAnim_AR_COV_C BPAnim_AR_COV.Default__BPAnim_AR_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_AR_COV_C* UBPAnim_AR_COV_C::GetDefaultObj()
{
	static class UBPAnim_AR_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_AR_COV_C*>(UBPAnim_AR_COV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_AR_COV.BPAnim_AR_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_BlendListByBool_874A026C41AAEB331B5DD5B689F17C23
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_BlendListByBool_874A026C41AAEB331B5DD5B689F17C23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_COV_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_BlendListByBool_874A026C41AAEB331B5DD5B689F17C23");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_COV.BPAnim_AR_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_COV_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_COV.BPAnim_AR_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_COV_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_COV.BPAnim_AR_COV_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_AR_COV_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_COV_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_COV.BPAnim_AR_COV_C.ExecuteUbergraph_BPAnim_AR_COV
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_AR_COV_C::ExecuteUbergraph_BPAnim_AR_COV(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_COV_C", "ExecuteUbergraph_BPAnim_AR_COV");

	Params::UBPAnim_AR_COV_C_ExecuteUbergraph_BPAnim_AR_COV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


