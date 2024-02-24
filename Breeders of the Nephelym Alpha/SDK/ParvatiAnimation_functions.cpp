#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ParvatiAnimation.ParvatiAnimation_C
// (None)

class UClass* UParvatiAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiAnimation_C");

	return Clss;
}


// ParvatiAnimation_C ParvatiAnimation.Default__ParvatiAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiAnimation_C* UParvatiAnimation_C::GetDefaultObj()
{
	static class UParvatiAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiAnimation_C*>(UParvatiAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ParvatiAnimation.ParvatiAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UParvatiAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "AnimGraph");

	Params::UParvatiAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_FCB0C17144EB82E3F00AA88F96B720ED
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_FCB0C17144EB82E3F00AA88F96B720ED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_FCB0C17144EB82E3F00AA88F96B720ED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_B9F7E6FA41AFD750F1223480BF275526
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_B9F7E6FA41AFD750F1223480BF275526()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_B9F7E6FA41AFD750F1223480BF275526");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_600120374C8F90F47B2AA78DCC7C7770
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_600120374C8F90F47B2AA78DCC7C7770()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_600120374C8F90F47B2AA78DCC7C7770");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_5791162847B95E23E66228BBD9E7BF7A
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_5791162847B95E23E66228BBD9E7BF7A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_5791162847B95E23E66228BBD9E7BF7A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_EBBBA1AA4E20E0DAEA2ED699BEB06544
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_EBBBA1AA4E20E0DAEA2ED699BEB06544()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_EBBBA1AA4E20E0DAEA2ED699BEB06544");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_CEBE3A66499A3F6200377A8512220F36
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_CEBE3A66499A3F6200377A8512220F36()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_CEBE3A66499A3F6200377A8512220F36");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_BB9C0EEB4C985FECCCD9358DE66EBC6A
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_BB9C0EEB4C985FECCCD9358DE66EBC6A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_BB9C0EEB4C985FECCCD9358DE66EBC6A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_4ADB297E475F571DDC83C0A81F6197D3
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_4ADB297E475F571DDC83C0A81F6197D3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_4ADB297E475F571DDC83C0A81F6197D3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_489480A04712916A580028907E978EED
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_489480A04712916A580028907E978EED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_489480A04712916A580028907E978EED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_LookAt_170D259A421C30F0FF4A92B1D7B85354
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_LookAt_170D259A421C30F0FF4A92B1D7B85354()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_LookAt_170D259A421C30F0FF4A92B1D7B85354");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_40F1942348A9928895C0D58CED9C2DE7
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_40F1942348A9928895C0D58CED9C2DE7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_40F1942348A9928895C0D58CED9C2DE7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_63810C7F4DA6A09768BB81920D025B21
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_63810C7F4DA6A09768BB81920D025B21()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_63810C7F4DA6A09768BB81920D025B21");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_5D9EF76A4C911766CA53D3AA988B5735
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_5D9EF76A4C911766CA53D3AA988B5735()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_5D9EF76A4C911766CA53D3AA988B5735");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_B20CD9EE4BBE72539AD0978528562146
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_B20CD9EE4BBE72539AD0978528562146()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_B20CD9EE4BBE72539AD0978528562146");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_C29B2A864EE9524FC65FC5A0224267A6
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_C29B2A864EE9524FC65FC5A0224267A6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_C29B2A864EE9524FC65FC5A0224267A6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_2E0B56C5425594DB421C58BAD06A8478
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_2E0B56C5425594DB421C58BAD06A8478()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_2E0B56C5425594DB421C58BAD06A8478");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_7325D4B2480CA7420B09B0BD19309A97
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_7325D4B2480CA7420B09B0BD19309A97()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_7325D4B2480CA7420B09B0BD19309A97");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_5A59CE7A47D4836C8CF2A08222F0409D
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_5A59CE7A47D4836C8CF2A08222F0409D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_5A59CE7A47D4836C8CF2A08222F0409D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_BB017D274CBA0241CF140F9D6F591588
// (BlueprintEvent)
// Parameters:

void UParvatiAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_BB017D274CBA0241CF140F9D6F591588()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_BB017D274CBA0241CF140F9D6F591588");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParvatiAnimation.ParvatiAnimation_C.ExecuteUbergraph_ParvatiAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UParvatiAnimation_C::ExecuteUbergraph_ParvatiAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParvatiAnimation_C", "ExecuteUbergraph_ParvatiAnimation");

	Params::UParvatiAnimation_C_ExecuteUbergraph_ParvatiAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


