#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Romy_Animation.Romy_Animation_C
// (None)

class UClass* URomy_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Romy_Animation_C");

	return Clss;
}


// Romy_Animation_C Romy_Animation.Default__Romy_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomy_Animation_C* URomy_Animation_C::GetDefaultObj()
{
	static class URomy_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomy_Animation_C*>(URomy_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Romy_Animation.Romy_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URomy_Animation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "AnimGraph");

	Params::URomy_Animation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_72AD905942B723257BFA1A92CAE67E01
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_72AD905942B723257BFA1A92CAE67E01()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_72AD905942B723257BFA1A92CAE67E01");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_8116480C4883BB4E61C1D198932B1660
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_8116480C4883BB4E61C1D198932B1660()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_8116480C4883BB4E61C1D198932B1660");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_1909E2C04C1283C5EDF63C8B5948ACB7
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_1909E2C04C1283C5EDF63C8B5948ACB7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_1909E2C04C1283C5EDF63C8B5948ACB7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_8E0D7C90417624F01F4146A9B5D70E49
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_8E0D7C90417624F01F4146A9B5D70E49()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_8E0D7C90417624F01F4146A9B5D70E49");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_14E9164F419FD3ABACEB5E8B79BADE8F
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_14E9164F419FD3ABACEB5E8B79BADE8F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_14E9164F419FD3ABACEB5E8B79BADE8F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_93871D634989E174B12CC2B36808D101
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_93871D634989E174B12CC2B36808D101()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_93871D634989E174B12CC2B36808D101");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_C92C46A347469857A25FE9AAED74970F
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_C92C46A347469857A25FE9AAED74970F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_C92C46A347469857A25FE9AAED74970F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_CE99346B4AB87A666DE31D877B05FDB7
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_CE99346B4AB87A666DE31D877B05FDB7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_CE99346B4AB87A666DE31D877B05FDB7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_E8841402412DD43B27FB2082303B7345
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_E8841402412DD43B27FB2082303B7345()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_E8841402412DD43B27FB2082303B7345");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_LookAt_2305DB1346434BBA0F1544B8584E02C0
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_LookAt_2305DB1346434BBA0F1544B8584E02C0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_LookAt_2305DB1346434BBA0F1544B8584E02C0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_829D8584407C9321C30939874546C62F
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_829D8584407C9321C30939874546C62F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_829D8584407C9321C30939874546C62F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_B028EA70430B368DE26AF7A05AE6D864
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_B028EA70430B368DE26AF7A05AE6D864()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_B028EA70430B368DE26AF7A05AE6D864");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_C1B5564C45F8C9A87F38B9A812CEC38F
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_C1B5564C45F8C9A87F38B9A812CEC38F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_C1B5564C45F8C9A87F38B9A812CEC38F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_119C66CF442936AD837C4FA7053C44B9
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_119C66CF442936AD837C4FA7053C44B9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_119C66CF442936AD837C4FA7053C44B9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_CC9308C4472BB9B096A2E7A2F5A70CEA
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_CC9308C4472BB9B096A2E7A2F5A70CEA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_CC9308C4472BB9B096A2E7A2F5A70CEA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_ADD73CFD4A1162DB89C80CA4F37B9708
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_ADD73CFD4A1162DB89C80CA4F37B9708()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_ADD73CFD4A1162DB89C80CA4F37B9708");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_AE327FD6466FA31CF755F881D4CF874E
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_AE327FD6466FA31CF755F881D4CF874E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_AE327FD6466FA31CF755F881D4CF874E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_A185C6F548EF75E3061D29B00643B531
// (BlueprintEvent)
// Parameters:

void URomy_Animation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_A185C6F548EF75E3061D29B00643B531()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_A185C6F548EF75E3061D29B00643B531");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Romy_Animation.Romy_Animation_C.ExecuteUbergraph_Romy_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URomy_Animation_C::ExecuteUbergraph_Romy_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Romy_Animation_C", "ExecuteUbergraph_Romy_Animation");

	Params::URomy_Animation_C_ExecuteUbergraph_Romy_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


