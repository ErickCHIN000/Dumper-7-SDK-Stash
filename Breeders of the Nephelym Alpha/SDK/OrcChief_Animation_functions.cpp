#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass OrcChief_Animation.OrcChief_Animation_C
// (None)

class UClass* UOrcChief_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcChief_Animation_C");

	return Clss;
}


// OrcChief_Animation_C OrcChief_Animation.Default__OrcChief_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcChief_Animation_C* UOrcChief_Animation_C::GetDefaultObj()
{
	static class UOrcChief_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcChief_Animation_C*>(UOrcChief_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OrcChief_Animation.OrcChief_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UOrcChief_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "AnimGraph");

	Params::UOrcChief_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_A878EF6A47250A2B785274BF97693783
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_A878EF6A47250A2B785274BF97693783()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_A878EF6A47250A2B785274BF97693783");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_0AB20B104B99F44F93C7878B5A981E21
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_0AB20B104B99F44F93C7878B5A981E21()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_0AB20B104B99F44F93C7878B5A981E21");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_C5A30B8F44FA2EF144B5618FD83E392E
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_C5A30B8F44FA2EF144B5618FD83E392E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_C5A30B8F44FA2EF144B5618FD83E392E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_BD58B45243CF7A6385F9639ADFFBEF4C
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_BD58B45243CF7A6385F9639ADFFBEF4C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_BD58B45243CF7A6385F9639ADFFBEF4C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_08F4058A414C58A3EC24C9BB11D46FC5
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_08F4058A414C58A3EC24C9BB11D46FC5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_08F4058A414C58A3EC24C9BB11D46FC5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_3044E0AC40388230B4A752AC66A11FA5
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_3044E0AC40388230B4A752AC66A11FA5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_3044E0AC40388230B4A752AC66A11FA5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_B87EC79D46F58FD7629536A2EBCA82A7
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_B87EC79D46F58FD7629536A2EBCA82A7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_B87EC79D46F58FD7629536A2EBCA82A7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_F54EA4ED40F09887AEE286BBC855DFE0
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_F54EA4ED40F09887AEE286BBC855DFE0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_F54EA4ED40F09887AEE286BBC855DFE0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_9CE4621F42E702DCC4C966927A47390C
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_9CE4621F42E702DCC4C966927A47390C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_9CE4621F42E702DCC4C966927A47390C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_LookAt_C2DDB549449609237C178CBE699C027F
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_LookAt_C2DDB549449609237C178CBE699C027F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_LookAt_C2DDB549449609237C178CBE699C027F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_68166324470EF24589E1C590778F4F8A
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_68166324470EF24589E1C590778F4F8A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_68166324470EF24589E1C590778F4F8A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_415F2A8B4AC92633182AE9A653368E3B
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_415F2A8B4AC92633182AE9A653368E3B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_415F2A8B4AC92633182AE9A653368E3B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_5C5D843E4ACFCFABD4207FB771D8A776
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_5C5D843E4ACFCFABD4207FB771D8A776()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_5C5D843E4ACFCFABD4207FB771D8A776");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_4A35642E4BADACB0936902B5D2705F7D
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_4A35642E4BADACB0936902B5D2705F7D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_4A35642E4BADACB0936902B5D2705F7D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_7F8BD1FA431C48C2D199EAA8EFBAB6A1
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_7F8BD1FA431C48C2D199EAA8EFBAB6A1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_7F8BD1FA431C48C2D199EAA8EFBAB6A1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_635B70C24A8EEF1E35FAF8AC3A296CB3
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_635B70C24A8EEF1E35FAF8AC3A296CB3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_635B70C24A8EEF1E35FAF8AC3A296CB3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_C0A2E7E649D0CC977B9658B3854CAA43
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_C0A2E7E649D0CC977B9658B3854CAA43()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_C0A2E7E649D0CC977B9658B3854CAA43");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_4928D6754FA0A1FD8A44609B9B3A938A
// (BlueprintEvent)
// Parameters:

void UOrcChief_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_4928D6754FA0A1FD8A44609B9B3A938A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_4928D6754FA0A1FD8A44609B9B3A938A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OrcChief_Animation.OrcChief_Animation_C.ExecuteUbergraph_OrcChief_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOrcChief_Animation_C::ExecuteUbergraph_OrcChief_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OrcChief_Animation_C", "ExecuteUbergraph_OrcChief_Animation");

	Params::UOrcChief_Animation_C_ExecuteUbergraph_OrcChief_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


