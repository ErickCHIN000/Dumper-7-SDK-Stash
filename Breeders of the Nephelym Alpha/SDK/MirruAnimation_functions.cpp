#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MirruAnimation.MirruAnimation_C
// (None)

class UClass* UMirruAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruAnimation_C");

	return Clss;
}


// MirruAnimation_C MirruAnimation.Default__MirruAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruAnimation_C* UMirruAnimation_C::GetDefaultObj()
{
	static class UMirruAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruAnimation_C*>(UMirruAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MirruAnimation.MirruAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMirruAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "AnimGraph");

	Params::UMirruAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_6102AEBC462872DC0EDE339E60AD2071
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_6102AEBC462872DC0EDE339E60AD2071()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_6102AEBC462872DC0EDE339E60AD2071");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_3DCC40724F712F28C98B6280C1624300
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_3DCC40724F712F28C98B6280C1624300()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_3DCC40724F712F28C98B6280C1624300");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_615FAF1B488A1D6D82786FA9D557E1B4
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_615FAF1B488A1D6D82786FA9D557E1B4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_615FAF1B488A1D6D82786FA9D557E1B4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E64A546A4D9CB182A7FF83B5705A65F2
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E64A546A4D9CB182A7FF83B5705A65F2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E64A546A4D9CB182A7FF83B5705A65F2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_9B1412A84A524FD79D5A03B9DB04CA5E
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_9B1412A84A524FD79D5A03B9DB04CA5E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_9B1412A84A524FD79D5A03B9DB04CA5E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_3EE40C424E76D83C4882CB8663A7067A
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_3EE40C424E76D83C4882CB8663A7067A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_3EE40C424E76D83C4882CB8663A7067A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E36C82B043EC83F27AC8BA892D93D756
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E36C82B043EC83F27AC8BA892D93D756()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E36C82B043EC83F27AC8BA892D93D756");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_BDEE899348F0F4854B5C3F9EBBC8AAE4
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_BDEE899348F0F4854B5C3F9EBBC8AAE4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_BDEE899348F0F4854B5C3F9EBBC8AAE4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_F5C8BCD74EDB4EF8DF1BFCB3AD36D266
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_F5C8BCD74EDB4EF8DF1BFCB3AD36D266()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_F5C8BCD74EDB4EF8DF1BFCB3AD36D266");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_LookAt_3053339A4D55160AA48997B8413DBAC0
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_LookAt_3053339A4D55160AA48997B8413DBAC0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_LookAt_3053339A4D55160AA48997B8413DBAC0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_FF1AE27D4C40BB221358D68A74F39FE1
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_FF1AE27D4C40BB221358D68A74F39FE1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_FF1AE27D4C40BB221358D68A74F39FE1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_CC45BE5C4AB8393268C50C8A74ADF8DE
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_CC45BE5C4AB8393268C50C8A74ADF8DE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_CC45BE5C4AB8393268C50C8A74ADF8DE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_4852E9204D69FD1233C726BFC9BB8F53
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_4852E9204D69FD1233C726BFC9BB8F53()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_4852E9204D69FD1233C726BFC9BB8F53");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_9373317D4A81D46BBDD8F98281CAE497
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_9373317D4A81D46BBDD8F98281CAE497()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_9373317D4A81D46BBDD8F98281CAE497");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_989754764F664842159AC897195D5622
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_989754764F664842159AC897195D5622()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_989754764F664842159AC897195D5622");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_57CB9ED9487809B0AA3B9FBFEC8E49DD
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_57CB9ED9487809B0AA3B9FBFEC8E49DD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_57CB9ED9487809B0AA3B9FBFEC8E49DD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_029C1EF14426BEF8DB8DC9B964DFF6C3
// (BlueprintEvent)
// Parameters:

void UMirruAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_029C1EF14426BEF8DB8DC9B964DFF6C3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_029C1EF14426BEF8DB8DC9B964DFF6C3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirruAnimation.MirruAnimation_C.ExecuteUbergraph_MirruAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMirruAnimation_C::ExecuteUbergraph_MirruAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirruAnimation_C", "ExecuteUbergraph_MirruAnimation");

	Params::UMirruAnimation_C_ExecuteUbergraph_MirruAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


