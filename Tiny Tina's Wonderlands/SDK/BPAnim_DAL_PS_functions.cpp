#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_DAL_PS.BPAnim_DAL_PS_C
// (None)

class UClass* UBPAnim_DAL_PS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_DAL_PS_C");

	return Clss;
}


// BPAnim_DAL_PS_C BPAnim_DAL_PS.Default__BPAnim_DAL_PS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_DAL_PS_C* UBPAnim_DAL_PS_C::GetDefaultObj()
{
	static class UBPAnim_DAL_PS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_DAL_PS_C*>(UBPAnim_DAL_PS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.UpdateScopeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UseMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_DAL_PS_C::UpdateScopeAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "UpdateScopeAnim");

	Params::UBPAnim_DAL_PS_C_UpdateScopeAnim_Params Parms{};

	Parms.UseMode = UseMode;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_LayeredBoneBlend_C21B448F40475160E71153BB52371B18
// (BlueprintEvent)
// Parameters:

void UBPAnim_DAL_PS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_LayeredBoneBlend_C21B448F40475160E71153BB52371B18()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_LayeredBoneBlend_C21B448F40475160E71153BB52371B18");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_A23C65D94FC1D8230C9CD4BAACA4966C
// (BlueprintEvent)
// Parameters:

void UBPAnim_DAL_PS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_A23C65D94FC1D8230C9CD4BAACA4966C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_A23C65D94FC1D8230C9CD4BAACA4966C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_EE2C9E80403DF08149DACF8093B4DF2D
// (BlueprintEvent)
// Parameters:

void UBPAnim_DAL_PS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_EE2C9E80403DF08149DACF8093B4DF2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_EE2C9E80403DF08149DACF8093B4DF2D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_DF7A19C44E53FC736AA49D832CC01C9C
// (BlueprintEvent)
// Parameters:

void UBPAnim_DAL_PS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_DF7A19C44E53FC736AA49D832CC01C9C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_DF7A19C44E53FC736AA49D832CC01C9C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_A1742C5342CA246F7B3CFB8824862FA3
// (BlueprintEvent)
// Parameters:

void UBPAnim_DAL_PS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_A1742C5342CA246F7B3CFB8824862FA3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_A1742C5342CA246F7B3CFB8824862FA3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_9F937ABE43ED95715D41FF975123D1B0
// (BlueprintEvent)
// Parameters:

void UBPAnim_DAL_PS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_9F937ABE43ED95715D41FF975123D1B0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_9F937ABE43ED95715D41FF975123D1B0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_DAL_PS_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_DAL_PS_C::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "BlueprintSwitchedMode");

	Params::UBPAnim_DAL_PS_C_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_DAL_PS.BPAnim_DAL_PS_C.ExecuteUbergraph_BPAnim_DAL_PS
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewMode                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_DAL_PS_C::ExecuteUbergraph_BPAnim_DAL_PS(int32 EntryPoint, class UAnimSequence* Temp_object_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, class UAnimSequence* Temp_object_Variable3, uint8 Temp_byte_Variable, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, class UAnimSequence* K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DAL_PS_C", "ExecuteUbergraph_BPAnim_DAL_PS");

	Params::UBPAnim_DAL_PS_C_ExecuteUbergraph_BPAnim_DAL_PS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewMode = K2Node_Event_NewMode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


