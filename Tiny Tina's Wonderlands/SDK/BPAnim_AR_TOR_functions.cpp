#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_AR_TOR.BPAnim_AR_TOR_C
// (None)

class UClass* UBPAnim_AR_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_AR_TOR_C");

	return Clss;
}


// BPAnim_AR_TOR_C BPAnim_AR_TOR.Default__BPAnim_AR_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_AR_TOR_C* UBPAnim_AR_TOR_C::GetDefaultObj()
{
	static class UBPAnim_AR_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_AR_TOR_C*>(UBPAnim_AR_TOR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_BlendListByBool_1AE0AB25437224F76641F5B312790ECF
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_BlendListByBool_1AE0AB25437224F76641F5B312790ECF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_BlendListByBool_1AE0AB25437224F76641F5B312790ECF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_AR_TOR_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_TOR_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.ExecuteUbergraph_BPAnim_AR_TOR
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_AR_TOR_C::ExecuteUbergraph_BPAnim_AR_TOR(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_TOR_C", "ExecuteUbergraph_BPAnim_AR_TOR");

	Params::UBPAnim_AR_TOR_C_ExecuteUbergraph_BPAnim_AR_TOR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


