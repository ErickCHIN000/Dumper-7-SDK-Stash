#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_AR_DAL.BPAnim_AR_DAL_C
// (None)

class UClass* UBPAnim_AR_DAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_AR_DAL_C");

	return Clss;
}


// BPAnim_AR_DAL_C BPAnim_AR_DAL.Default__BPAnim_AR_DAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_AR_DAL_C* UBPAnim_AR_DAL_C::GetDefaultObj()
{
	static class UBPAnim_AR_DAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_AR_DAL_C*>(UBPAnim_AR_DAL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.UpdateIdleAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_AR_DAL_C::UpdateIdleAnim(uint8 NewParam, int32 A, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "UpdateIdleAnim");

	Params::UBPAnim_AR_DAL_C_UpdateIdleAnim_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.A = A;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_A2B946B44DBA3428CCD5AC99C397CD35
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_A2B946B44DBA3428CCD5AC99C397CD35()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_A2B946B44DBA3428CCD5AC99C397CD35");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_458D294A4694F5F47439D9A5AC7F679B
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_458D294A4694F5F47439D9A5AC7F679B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_458D294A4694F5F47439D9A5AC7F679B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_BlendListByBool_EED8E2BD4F731B79B5A5A4BB3BB6D442
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_BlendListByBool_EED8E2BD4F731B79B5A5A4BB3BB6D442()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_BlendListByBool_EED8E2BD4F731B79B5A5A4BB3BB6D442");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_308E125F4CC2589932DDAEAA57D4564C
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_308E125F4CC2589932DDAEAA57D4564C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_308E125F4CC2589932DDAEAA57D4564C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_LayeredBoneBlend_3A3C880842D6AC29280BB3B5572E8EA2
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_LayeredBoneBlend_3A3C880842D6AC29280BB3B5572E8EA2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_LayeredBoneBlend_3A3C880842D6AC29280BB3B5572E8EA2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_AC8A6AD2472A5B52B698D49E29A9F01F
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_AC8A6AD2472A5B52B698D49E29A9F01F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_AC8A6AD2472A5B52B698D49E29A9F01F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_E2D4D9B04782D34B2B82038AF2655238
// (BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_E2D4D9B04782D34B2B82038AF2655238()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_E2D4D9B04782D34B2B82038AF2655238");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_AR_DAL_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_AR_DAL_C::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "BlueprintSwitchedMode");

	Params::UBPAnim_AR_DAL_C_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_AR_DAL.BPAnim_AR_DAL_C.ExecuteUbergraph_BPAnim_AR_DAL
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewMode                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_AR_DAL_C::ExecuteUbergraph_BPAnim_AR_DAL(int32 EntryPoint, class UAnimSequence* Temp_object_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, bool CallFunc_Not_PreBool_ReturnValue, class UAnimSequence* Temp_object_Variable3, uint8 Temp_byte_Variable, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, class UAnimSequence* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_AR_DAL_C", "ExecuteUbergraph_BPAnim_AR_DAL");

	Params::UBPAnim_AR_DAL_C_ExecuteUbergraph_BPAnim_AR_DAL_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewMode = K2Node_Event_NewMode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


