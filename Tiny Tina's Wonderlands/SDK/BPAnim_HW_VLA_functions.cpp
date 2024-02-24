#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_HW_VLA.BPAnim_HW_VLA_C
// (None)

class UClass* UBPAnim_HW_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_HW_VLA_C");

	return Clss;
}


// BPAnim_HW_VLA_C BPAnim_HW_VLA.Default__BPAnim_HW_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_HW_VLA_C* UBPAnim_HW_VLA_C::GetDefaultObj()
{
	static class UBPAnim_HW_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_HW_VLA_C*>(UBPAnim_HW_VLA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_HW_VLA.BPAnim_HW_VLA_C.UpdateIdleAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UseMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger1_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_HW_VLA_C::UpdateIdleAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger1_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_VLA_C", "UpdateIdleAnim");

	Params::UBPAnim_HW_VLA_C_UpdateIdleAnim_Params Parms{};

	Parms.UseMode = UseMode;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_SwitchInteger1_CmpSuccess = K2Node_SwitchInteger1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_HW_VLA.BPAnim_HW_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_80B973BA490D96EC1A6863BBAAFE80D0
// (BlueprintEvent)
// Parameters:

void UBPAnim_HW_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_80B973BA490D96EC1A6863BBAAFE80D0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_80B973BA490D96EC1A6863BBAAFE80D0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_HW_VLA.BPAnim_HW_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_DD8E2BA748CADFB3FC227CB8DD499581
// (BlueprintEvent)
// Parameters:

void UBPAnim_HW_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_DD8E2BA748CADFB3FC227CB8DD499581()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_DD8E2BA748CADFB3FC227CB8DD499581");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_HW_VLA.BPAnim_HW_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_FFBDA08E4295C7EECEA95B9044BB5FC8
// (BlueprintEvent)
// Parameters:

void UBPAnim_HW_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_FFBDA08E4295C7EECEA95B9044BB5FC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_FFBDA08E4295C7EECEA95B9044BB5FC8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_HW_VLA.BPAnim_HW_VLA_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_HW_VLA_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_VLA_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_HW_VLA.BPAnim_HW_VLA_C.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_HW_VLA_C::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_VLA_C", "BlueprintSwitchedMode");

	Params::UBPAnim_HW_VLA_C_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_HW_VLA.BPAnim_HW_VLA_C.ExecuteUbergraph_BPAnim_HW_VLA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewMode                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_HW_VLA_C::ExecuteUbergraph_BPAnim_HW_VLA(int32 EntryPoint, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_HW_VLA_C", "ExecuteUbergraph_BPAnim_HW_VLA");

	Params::UBPAnim_HW_VLA_C_ExecuteUbergraph_BPAnim_HW_VLA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewMode = K2Node_Event_NewMode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


