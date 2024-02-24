#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SM_Dahl.BPAnim_SM_Dahl_C
// (None)

class UClass* UBPAnim_SM_Dahl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SM_Dahl_C");

	return Clss;
}


// BPAnim_SM_Dahl_C BPAnim_SM_Dahl.Default__BPAnim_SM_Dahl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SM_Dahl_C* UBPAnim_SM_Dahl_C::GetDefaultObj()
{
	static class UBPAnim_SM_Dahl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SM_Dahl_C*>(UBPAnim_SM_Dahl_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.UpdateScopeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SM_Dahl_C::UpdateScopeAnim(uint8 Temp_byte_Variable, class UAnimSequence* Temp_object_Variable, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, class UAnimSequence* Temp_object_Variable3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimSequence* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "UpdateScopeAnim");

	Params::UBPAnim_SM_Dahl_C_UpdateScopeAnim_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_8A8EEF98420BDA318477CFB05548C308
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_Dahl_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_8A8EEF98420BDA318477CFB05548C308()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_8A8EEF98420BDA318477CFB05548C308");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_238ADA344A6389E30DD685B3F1FD9B47
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_Dahl_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_238ADA344A6389E30DD685B3F1FD9B47()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_238ADA344A6389E30DD685B3F1FD9B47");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_AA7807E8434F6DC42D04AE9189F49D67
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_Dahl_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_AA7807E8434F6DC42D04AE9189F49D67()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_AA7807E8434F6DC42D04AE9189F49D67");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_BlendListByBool_CFAE1CB94B838CB07657CCB879FE6A96
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_Dahl_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_BlendListByBool_CFAE1CB94B838CB07657CCB879FE6A96()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_BlendListByBool_CFAE1CB94B838CB07657CCB879FE6A96");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SM_Dahl_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SM_Dahl_C::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "BlueprintSwitchedMode");

	Params::UBPAnim_SM_Dahl_C_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_SM_Dahl.BPAnim_SM_Dahl_C.ExecuteUbergraph_BPAnim_SM_Dahl
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewMode                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SM_Dahl_C::ExecuteUbergraph_BPAnim_SM_Dahl(int32 EntryPoint, int32 K2Node_Event_NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Dahl_C", "ExecuteUbergraph_BPAnim_SM_Dahl");

	Params::UBPAnim_SM_Dahl_C_ExecuteUbergraph_BPAnim_SM_Dahl_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewMode = K2Node_Event_NewMode;

	UObject::ProcessEvent(Func, &Parms);

}

}


