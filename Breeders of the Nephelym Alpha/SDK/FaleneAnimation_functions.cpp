#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FaleneAnimation.FaleneAnimation_C
// (None)

class UClass* UFaleneAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneAnimation_C");

	return Clss;
}


// FaleneAnimation_C FaleneAnimation.Default__FaleneAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneAnimation_C* UFaleneAnimation_C::GetDefaultObj()
{
	static class UFaleneAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneAnimation_C*>(UFaleneAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FaleneAnimation.FaleneAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFaleneAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "AnimGraph");

	Params::UFaleneAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_0969A25045FB696B26F370B8BD17DDC4
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_0969A25045FB696B26F370B8BD17DDC4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_0969A25045FB696B26F370B8BD17DDC4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_2304297B40FBD647690F8F9AAE35EC6B
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_2304297B40FBD647690F8F9AAE35EC6B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_2304297B40FBD647690F8F9AAE35EC6B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_B037F9A947741F2C63CB638932139D70
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_B037F9A947741F2C63CB638932139D70()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_B037F9A947741F2C63CB638932139D70");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_B40B879F4AB3A45D223B9AB5C88F8A4C
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_B40B879F4AB3A45D223B9AB5C88F8A4C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_B40B879F4AB3A45D223B9AB5C88F8A4C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_098D97CA44B56076A80B499E422100B6
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_098D97CA44B56076A80B499E422100B6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_098D97CA44B56076A80B499E422100B6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_AB7A64FD4DDFD7C3A7FC70ABB001DB3A
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_AB7A64FD4DDFD7C3A7FC70ABB001DB3A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_AB7A64FD4DDFD7C3A7FC70ABB001DB3A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_559CCC034760328A286ADBAA6F13E983
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_559CCC034760328A286ADBAA6F13E983()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_559CCC034760328A286ADBAA6F13E983");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_DA0ED36F40C16B2ADB7D9AB7D364BF4A
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_DA0ED36F40C16B2ADB7D9AB7D364BF4A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_DA0ED36F40C16B2ADB7D9AB7D364BF4A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_360768004BA9B2846049628D37733AF6
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_360768004BA9B2846049628D37733AF6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_360768004BA9B2846049628D37733AF6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_LookAt_F01A067743E5872446EB65B7230F4112
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_LookAt_F01A067743E5872446EB65B7230F4112()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_LookAt_F01A067743E5872446EB65B7230F4112");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_D274434F4DF2BBC0E73E68B4153C7552
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_D274434F4DF2BBC0E73E68B4153C7552()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_D274434F4DF2BBC0E73E68B4153C7552");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_83412A0E42FF76D60A24A8AF733E1DB3
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_83412A0E42FF76D60A24A8AF733E1DB3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_83412A0E42FF76D60A24A8AF733E1DB3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_83AA146F4FE9E8204089038DA7FBD4EC
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_83AA146F4FE9E8204089038DA7FBD4EC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_83AA146F4FE9E8204089038DA7FBD4EC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_A2C9D7764A087C107D7A20BA95C2B02F
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_A2C9D7764A087C107D7A20BA95C2B02F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_A2C9D7764A087C107D7A20BA95C2B02F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_B28A3C684D5D613D0611F8B585E51EAF
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_B28A3C684D5D613D0611F8B585E51EAF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_B28A3C684D5D613D0611F8B585E51EAF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_2E0767744F91F32E8C30F98F6CAC32D7
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_2E0767744F91F32E8C30F98F6CAC32D7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_2E0767744F91F32E8C30F98F6CAC32D7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_513075B9464D697B1CC2A494C4AB62DF
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_513075B9464D697B1CC2A494C4AB62DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_513075B9464D697B1CC2A494C4AB62DF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_C0C593F34980F239CC98C69630E9A186
// (BlueprintEvent)
// Parameters:

void UFaleneAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_C0C593F34980F239CC98C69630E9A186()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_C0C593F34980F239CC98C69630E9A186");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FaleneAnimation.FaleneAnimation_C.ExecuteUbergraph_FaleneAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFaleneAnimation_C::ExecuteUbergraph_FaleneAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaleneAnimation_C", "ExecuteUbergraph_FaleneAnimation");

	Params::UFaleneAnimation_C_ExecuteUbergraph_FaleneAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


