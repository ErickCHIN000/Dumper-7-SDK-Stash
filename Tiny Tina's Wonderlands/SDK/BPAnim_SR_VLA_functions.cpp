#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SR_VLA.BPAnim_SR_VLA_C
// (None)

class UClass* UBPAnim_SR_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SR_VLA_C");

	return Clss;
}


// BPAnim_SR_VLA_C BPAnim_SR_VLA.Default__BPAnim_SR_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SR_VLA_C* UBPAnim_SR_VLA_C::GetDefaultObj()
{
	static class UBPAnim_SR_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SR_VLA_C*>(UBPAnim_SR_VLA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.SetIdleAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UseMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger1_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_SR_VLA_C::SetIdleAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger1_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "SetIdleAnim");

	Params::UBPAnim_SR_VLA_C_SetIdleAnim_Params Parms{};

	Parms.UseMode = UseMode;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_SwitchInteger1_CmpSuccess = K2Node_SwitchInteger1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_LayeredBoneBlend_4660B5874479757F1A7E57A8F99A793C
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_LayeredBoneBlend_4660B5874479757F1A7E57A8F99A793C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_LayeredBoneBlend_4660B5874479757F1A7E57A8F99A793C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_926B43AD4AB2D462D69E50AA74D61169
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_926B43AD4AB2D462D69E50AA74D61169()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_926B43AD4AB2D462D69E50AA74D61169");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_E448E8F94BD55E44A0FDA1AD3B261AC5
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_E448E8F94BD55E44A0FDA1AD3B261AC5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_E448E8F94BD55E44A0FDA1AD3B261AC5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_B22972354564BBB6987D87873DDBB3B6
// (BlueprintEvent)
// Parameters:

void UBPAnim_SR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_B22972354564BBB6987D87873DDBB3B6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_B22972354564BBB6987D87873DDBB3B6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SR_VLA_C::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "BlueprintSwitchedMode");

	Params::UBPAnim_SR_VLA_C_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SR_VLA_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SR_VLA.BPAnim_SR_VLA_C.ExecuteUbergraph_BPAnim_SR_VLA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NewMode                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SR_VLA_C::ExecuteUbergraph_BPAnim_SR_VLA(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SR_VLA_C", "ExecuteUbergraph_BPAnim_SR_VLA");

	Params::UBPAnim_SR_VLA_C_ExecuteUbergraph_BPAnim_SR_VLA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_NewMode = K2Node_Event_NewMode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


