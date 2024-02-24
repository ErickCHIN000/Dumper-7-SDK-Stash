#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass KybeleAnimation.KybeleAnimation_C
// (None)

class UClass* UKybeleAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleAnimation_C");

	return Clss;
}


// KybeleAnimation_C KybeleAnimation.Default__KybeleAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleAnimation_C* UKybeleAnimation_C::GetDefaultObj()
{
	static class UKybeleAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleAnimation_C*>(UKybeleAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KybeleAnimation.KybeleAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UKybeleAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "AnimGraph");

	Params::UKybeleAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_00B9A7CB41DB18DDADAE6CBC3B6BA5ED
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_00B9A7CB41DB18DDADAE6CBC3B6BA5ED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_00B9A7CB41DB18DDADAE6CBC3B6BA5ED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_95AA81C24763F57C82FAB9AA7EC9C006
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_95AA81C24763F57C82FAB9AA7EC9C006()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_95AA81C24763F57C82FAB9AA7EC9C006");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_7357170C4E0DBC688E414D8DE6394B1C
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_7357170C4E0DBC688E414D8DE6394B1C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_7357170C4E0DBC688E414D8DE6394B1C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_13578D7D4B77CD9933F74DA3AA48DD94
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_13578D7D4B77CD9933F74DA3AA48DD94()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_13578D7D4B77CD9933F74DA3AA48DD94");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F1FB1B34415157DC828BEAB9A5C22157
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F1FB1B34415157DC828BEAB9A5C22157()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F1FB1B34415157DC828BEAB9A5C22157");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F41449FA49314C56C316B5979A79F17C
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F41449FA49314C56C316B5979A79F17C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F41449FA49314C56C316B5979A79F17C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_75B81E5F4C148A53AD1799A6AC87716C
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_75B81E5F4C148A53AD1799A6AC87716C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_75B81E5F4C148A53AD1799A6AC87716C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_262D9DF54AF1E7E74585EDBD4C1086B0
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_262D9DF54AF1E7E74585EDBD4C1086B0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_262D9DF54AF1E7E74585EDBD4C1086B0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_B40DCB534B367660694009BFDEBCD0DA
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_B40DCB534B367660694009BFDEBCD0DA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_B40DCB534B367660694009BFDEBCD0DA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_LookAt_F981A81747B3F8270680A39A1364E32A
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_LookAt_F981A81747B3F8270680A39A1364E32A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_LookAt_F981A81747B3F8270680A39A1364E32A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_BEA26E11454C3943F6A26F859A7DB24A
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_BEA26E11454C3943F6A26F859A7DB24A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_BEA26E11454C3943F6A26F859A7DB24A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_69AFF85B41E7E949DCCB3BBBB03B6293
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_69AFF85B41E7E949DCCB3BBBB03B6293()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_69AFF85B41E7E949DCCB3BBBB03B6293");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_B414872F4BA4979BFE6A3B9702FC7F31
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_B414872F4BA4979BFE6A3B9702FC7F31()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_B414872F4BA4979BFE6A3B9702FC7F31");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_4A25333044683DD295BF56BDD46AE1F0
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_4A25333044683DD295BF56BDD46AE1F0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_4A25333044683DD295BF56BDD46AE1F0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_5084BA6740BDD61C75EA3EB12F5128AA
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_5084BA6740BDD61C75EA3EB12F5128AA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_5084BA6740BDD61C75EA3EB12F5128AA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_DE7FDAE142A694A7799BD8B40F6E217A
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_DE7FDAE142A694A7799BD8B40F6E217A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_DE7FDAE142A694A7799BD8B40F6E217A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_6DC1557A4EED7A3FCA15DE9C30C6E171
// (BlueprintEvent)
// Parameters:

void UKybeleAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_6DC1557A4EED7A3FCA15DE9C30C6E171()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_6DC1557A4EED7A3FCA15DE9C30C6E171");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KybeleAnimation.KybeleAnimation_C.ExecuteUbergraph_KybeleAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKybeleAnimation_C::ExecuteUbergraph_KybeleAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KybeleAnimation_C", "ExecuteUbergraph_KybeleAnimation");

	Params::UKybeleAnimation_C_ExecuteUbergraph_KybeleAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


