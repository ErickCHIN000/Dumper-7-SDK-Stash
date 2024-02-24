#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DryadAnimation.DryadAnimation_C
// (None)

class UClass* UDryadAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadAnimation_C");

	return Clss;
}


// DryadAnimation_C DryadAnimation.Default__DryadAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadAnimation_C* UDryadAnimation_C::GetDefaultObj()
{
	static class UDryadAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadAnimation_C*>(UDryadAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DryadAnimation.DryadAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDryadAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "AnimGraph");

	Params::UDryadAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_5F4AEDBE4495769984395C8CFB2763B7
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_5F4AEDBE4495769984395C8CFB2763B7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_5F4AEDBE4495769984395C8CFB2763B7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_C47660BC45ECE7765EF21BB2C528C0C3
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_C47660BC45ECE7765EF21BB2C528C0C3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_C47660BC45ECE7765EF21BB2C528C0C3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_0B4CB4814F7023782A1859BB18BD325A
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_0B4CB4814F7023782A1859BB18BD325A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_0B4CB4814F7023782A1859BB18BD325A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_91A9BD28444FB563077F7593A11CA428
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_91A9BD28444FB563077F7593A11CA428()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_91A9BD28444FB563077F7593A11CA428");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B2AE6FDB4CF3111A4ED9F3B198F88B47
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B2AE6FDB4CF3111A4ED9F3B198F88B47()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B2AE6FDB4CF3111A4ED9F3B198F88B47");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_AF09E6044A49C914A7B175B23D3DF78A
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_AF09E6044A49C914A7B175B23D3DF78A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_AF09E6044A49C914A7B175B23D3DF78A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_41541D1A4B740F51FA5078B06883E706
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_41541D1A4B740F51FA5078B06883E706()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_41541D1A4B740F51FA5078B06883E706");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B5A0D27A49ED933390D69FB740812A7F
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B5A0D27A49ED933390D69FB740812A7F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B5A0D27A49ED933390D69FB740812A7F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_38A46A2D4110117F3246E8BCD24D1171
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_38A46A2D4110117F3246E8BCD24D1171()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_38A46A2D4110117F3246E8BCD24D1171");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_LookAt_9C49DD51432C4D9D251D4C8831862EBB
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_LookAt_9C49DD51432C4D9D251D4C8831862EBB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_LookAt_9C49DD51432C4D9D251D4C8831862EBB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_8D07E90B4E04BDF3A31A0D90A5679424
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_8D07E90B4E04BDF3A31A0D90A5679424()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_8D07E90B4E04BDF3A31A0D90A5679424");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_FD7CA4BC484A0FE10EF554B9135CDA9B
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_FD7CA4BC484A0FE10EF554B9135CDA9B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_FD7CA4BC484A0FE10EF554B9135CDA9B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_B380752C46AE47486E3C92908F1FBC40
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_B380752C46AE47486E3C92908F1FBC40()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_B380752C46AE47486E3C92908F1FBC40");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_07E0EBB14EB06E1E7CDFCE8DCCE56943
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_07E0EBB14EB06E1E7CDFCE8DCCE56943()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_07E0EBB14EB06E1E7CDFCE8DCCE56943");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_BBB8FDEB4683C395DAED4C8E9F1BF20C
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_BBB8FDEB4683C395DAED4C8E9F1BF20C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_BBB8FDEB4683C395DAED4C8E9F1BF20C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_6A36C4A349FC0A700294D59912C86526
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_6A36C4A349FC0A700294D59912C86526()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_6A36C4A349FC0A700294D59912C86526");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_1C3B5EF9400EF44B1A8AE1A0C78B3993
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_1C3B5EF9400EF44B1A8AE1A0C78B3993()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_1C3B5EF9400EF44B1A8AE1A0C78B3993");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_63B9F1664DD33CBBE68C50B36B6334EC
// (BlueprintEvent)
// Parameters:

void UDryadAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_63B9F1664DD33CBBE68C50B36B6334EC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_63B9F1664DD33CBBE68C50B36B6334EC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DryadAnimation.DryadAnimation_C.ExecuteUbergraph_DryadAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDryadAnimation_C::ExecuteUbergraph_DryadAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DryadAnimation_C", "ExecuteUbergraph_DryadAnimation");

	Params::UDryadAnimation_C_ExecuteUbergraph_DryadAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


