#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Leylanna_Animation.Leylanna_Animation_C
// (None)

class UClass* ULeylanna_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Leylanna_Animation_C");

	return Clss;
}


// Leylanna_Animation_C Leylanna_Animation.Default__Leylanna_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylanna_Animation_C* ULeylanna_Animation_C::GetDefaultObj()
{
	static class ULeylanna_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylanna_Animation_C*>(ULeylanna_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Leylanna_Animation.Leylanna_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void ULeylanna_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "AnimGraph");

	Params::ULeylanna_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_A90C8F8F4C138C694916908C1D3C3C02
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_A90C8F8F4C138C694916908C1D3C3C02()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_A90C8F8F4C138C694916908C1D3C3C02");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_57E20DFD429D3CAC85E9B79E409C2CED
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_57E20DFD429D3CAC85E9B79E409C2CED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_57E20DFD429D3CAC85E9B79E409C2CED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_F9BD4A1248920FCF9E7918AAC8C5819F
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_F9BD4A1248920FCF9E7918AAC8C5819F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_F9BD4A1248920FCF9E7918AAC8C5819F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_C4C7BDE947F03F910AC5CFB9DEF82557
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_C4C7BDE947F03F910AC5CFB9DEF82557()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_C4C7BDE947F03F910AC5CFB9DEF82557");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_AFBF2B08435336CC444B438B966F8A3C
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_AFBF2B08435336CC444B438B966F8A3C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_AFBF2B08435336CC444B438B966F8A3C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_A423EAB2446C9230956C9E8FF748A06D
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_A423EAB2446C9230956C9E8FF748A06D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_A423EAB2446C9230956C9E8FF748A06D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_20E617614989F195C3C16386E45A72BF
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_20E617614989F195C3C16386E45A72BF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_20E617614989F195C3C16386E45A72BF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_D243C64F421F43997AC5B7A9DDE9A23A
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_D243C64F421F43997AC5B7A9DDE9A23A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_D243C64F421F43997AC5B7A9DDE9A23A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_92B9EC544146B3AD69AD34A92FA744F9
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_92B9EC544146B3AD69AD34A92FA744F9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_92B9EC544146B3AD69AD34A92FA744F9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_LookAt_113BDFFA416479535D3C5CBC0532A5D9
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_LookAt_113BDFFA416479535D3C5CBC0532A5D9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_LookAt_113BDFFA416479535D3C5CBC0532A5D9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_5450B2CB48876052432E0FBA53C48B31
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_5450B2CB48876052432E0FBA53C48B31()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_5450B2CB48876052432E0FBA53C48B31");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_FCD8BF8E4285BE785C7FD3A365EDFEC6
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_FCD8BF8E4285BE785C7FD3A365EDFEC6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_FCD8BF8E4285BE785C7FD3A365EDFEC6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_E0EE521A4433E41D66F0F68B80598E80
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_E0EE521A4433E41D66F0F68B80598E80()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_E0EE521A4433E41D66F0F68B80598E80");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_BAD671F34844B0A54BD5F4BE7C377DFB
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_BAD671F34844B0A54BD5F4BE7C377DFB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_BAD671F34844B0A54BD5F4BE7C377DFB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_A7F5943C4B8CE1555FB948A8AA5FAAAF
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_A7F5943C4B8CE1555FB948A8AA5FAAAF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_A7F5943C4B8CE1555FB948A8AA5FAAAF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_D6082C054EDFC3B5D227FD8C0DD08BE6
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_D6082C054EDFC3B5D227FD8C0DD08BE6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_D6082C054EDFC3B5D227FD8C0DD08BE6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_F5BFAB3145AEB041D79599B36B74D3E1
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_F5BFAB3145AEB041D79599B36B74D3E1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_F5BFAB3145AEB041D79599B36B74D3E1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_230F478746CCC1B6B6556FA38F19A977
// (BlueprintEvent)
// Parameters:

void ULeylanna_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_230F478746CCC1B6B6556FA38F19A977()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_230F478746CCC1B6B6556FA38F19A977");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Leylanna_Animation.Leylanna_Animation_C.ExecuteUbergraph_Leylanna_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeylanna_Animation_C::ExecuteUbergraph_Leylanna_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Leylanna_Animation_C", "ExecuteUbergraph_Leylanna_Animation");

	Params::ULeylanna_Animation_C_ExecuteUbergraph_Leylanna_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


