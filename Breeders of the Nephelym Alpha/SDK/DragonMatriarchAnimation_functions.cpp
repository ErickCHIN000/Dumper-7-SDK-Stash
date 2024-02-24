#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DragonMatriarchAnimation.DragonMatriarchAnimation_C
// (None)

class UClass* UDragonMatriarchAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonMatriarchAnimation_C");

	return Clss;
}


// DragonMatriarchAnimation_C DragonMatriarchAnimation.Default__DragonMatriarchAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragonMatriarchAnimation_C* UDragonMatriarchAnimation_C::GetDefaultObj()
{
	static class UDragonMatriarchAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonMatriarchAnimation_C*>(UDragonMatriarchAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDragonMatriarchAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "AnimGraph");

	Params::UDragonMatriarchAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_6CD6A25D4622CDFD5076748BBF47B282
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_6CD6A25D4622CDFD5076748BBF47B282()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_6CD6A25D4622CDFD5076748BBF47B282");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_C112842A44D606C5421B94BB3FA2B322
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_C112842A44D606C5421B94BB3FA2B322()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_C112842A44D606C5421B94BB3FA2B322");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_181D4FBA4D440B525AF7A7B44D988814
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_181D4FBA4D440B525AF7A7B44D988814()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_181D4FBA4D440B525AF7A7B44D988814");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_7CA78EAB4F3DDE64C8897F9263FC41FA
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_7CA78EAB4F3DDE64C8897F9263FC41FA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_7CA78EAB4F3DDE64C8897F9263FC41FA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_E04762F44D0364C0921BD48987F2F344
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_E04762F44D0364C0921BD48987F2F344()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_E04762F44D0364C0921BD48987F2F344");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_51DB73544EC8126033A749BF5EDC8BD9
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_51DB73544EC8126033A749BF5EDC8BD9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_51DB73544EC8126033A749BF5EDC8BD9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_67E512CD402ADC73BCB4F785C1268AEE
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_67E512CD402ADC73BCB4F785C1268AEE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_67E512CD402ADC73BCB4F785C1268AEE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_31F6F6D842A6249B47739899C43F756B
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_31F6F6D842A6249B47739899C43F756B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_31F6F6D842A6249B47739899C43F756B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_D1E71B4F479EE29F250A3FA42DD558BF
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_D1E71B4F479EE29F250A3FA42DD558BF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_D1E71B4F479EE29F250A3FA42DD558BF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_LookAt_11D11534417F09DE49C386B2D803A997
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_LookAt_11D11534417F09DE49C386B2D803A997()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_LookAt_11D11534417F09DE49C386B2D803A997");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_A68F888B42B41599F2529C8CCA36120D
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_A68F888B42B41599F2529C8CCA36120D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_A68F888B42B41599F2529C8CCA36120D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_6F62E97A4D8C906B5EDF66B4DCC88F6F
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_6F62E97A4D8C906B5EDF66B4DCC88F6F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_6F62E97A4D8C906B5EDF66B4DCC88F6F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_0052BA174E71C664D4E371A69833CDDB
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_0052BA174E71C664D4E371A69833CDDB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_0052BA174E71C664D4E371A69833CDDB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_9175AA2A46C215437FBABBA59F00281C
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_9175AA2A46C215437FBABBA59F00281C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_9175AA2A46C215437FBABBA59F00281C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_37291D1544A364A686E731A267811472
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_37291D1544A364A686E731A267811472()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_37291D1544A364A686E731A267811472");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_A952FC9047DFB4ECB06578B24FCA5DCE
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_A952FC9047DFB4ECB06578B24FCA5DCE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_A952FC9047DFB4ECB06578B24FCA5DCE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_AB13193443D213CA47AAA7B618ACA10D
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_AB13193443D213CA47AAA7B618ACA10D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_AB13193443D213CA47AAA7B618ACA10D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_8960F5C9406B8A325CC0B9BB7D20C584
// (BlueprintEvent)
// Parameters:

void UDragonMatriarchAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_8960F5C9406B8A325CC0B9BB7D20C584()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_8960F5C9406B8A325CC0B9BB7D20C584");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarchAnimation.DragonMatriarchAnimation_C.ExecuteUbergraph_DragonMatriarchAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDragonMatriarchAnimation_C::ExecuteUbergraph_DragonMatriarchAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarchAnimation_C", "ExecuteUbergraph_DragonMatriarchAnimation");

	Params::UDragonMatriarchAnimation_C_ExecuteUbergraph_DragonMatriarchAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


