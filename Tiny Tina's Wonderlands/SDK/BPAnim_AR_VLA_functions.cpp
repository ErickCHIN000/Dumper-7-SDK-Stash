#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_AR_VLA.BPAnim_AR_VLA_C
// (None)

class UClass* UBPAnim_AR_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_AR_VLA_C");

	return Clss;
}


// BPAnim_AR_VLA_C BPAnim_AR_VLA.Default__BPAnim_AR_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_AR_VLA_C* UBPAnim_AR_VLA_C::GetDefaultObj()
{
	static class UBPAnim_AR_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_AR_VLA_C*>(UBPAnim_AR_VLA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.UpdateBarrelPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              ModeType                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentUseMode                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_AR_VLA_C::UpdateBarrelPose(uint8 ModeType, int32 CurrentUseMode, uint8 Temp_byte_Variable, class UAnimSequence* Temp_object_Variable, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, class UAnimSequence* Temp_object_Variable3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimSequence* K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "UpdateBarrelPose");

	Params::UBPAnim_AR_VLA_C_UpdateBarrelPose_Params Parms{};

	Parms.ModeType = ModeType;
	Parms.CurrentUseMode = CurrentUseMode;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.UpdateForegripPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_AR_VLA_C::UpdateForegripPose(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "UpdateForegripPose");

	Params::UBPAnim_AR_VLA_C_UpdateForegripPose_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue5 = CallFunc_EqualEqual_ByteByte_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_LayeredBoneBlend_61A470F64FDDCBA1467609833C8883B7
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_LayeredBoneBlend_61A470F64FDDCBA1467609833C8883B7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_LayeredBoneBlend_61A470F64FDDCBA1467609833C8883B7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_2AFD3CDB48561E12A5B134AD40E0ED2F
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_2AFD3CDB48561E12A5B134AD40E0ED2F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_2AFD3CDB48561E12A5B134AD40E0ED2F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_196B83E448EF1A14456FB98276E2B794
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_196B83E448EF1A14456FB98276E2B794()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_196B83E448EF1A14456FB98276E2B794");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_8A91256A457E6BCDAD8D809F098BDAF1
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_8A91256A457E6BCDAD8D809F098BDAF1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_8A91256A457E6BCDAD8D809F098BDAF1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_AR_VLA_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_AR_VLA_C::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "BlueprintSwitchedMode");

	Params::UBPAnim_AR_VLA_C_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_AR_VLA.BPAnim_AR_VLA_C.ExecuteUbergraph_BPAnim_AR_VLA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NewMode                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_AR_VLA_C::ExecuteUbergraph_BPAnim_AR_VLA(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_Event_NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_VLA_C", "ExecuteUbergraph_BPAnim_AR_VLA");

	Params::UBPAnim_AR_VLA_C_ExecuteUbergraph_BPAnim_AR_VLA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_NewMode = K2Node_Event_NewMode;

	UObject::ProcessEvent(Func, &Parms);

}

}


