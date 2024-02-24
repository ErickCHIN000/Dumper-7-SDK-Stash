#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SlothAnimation.SlothAnimation_C
// (None)

class UClass* USlothAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothAnimation_C");

	return Clss;
}


// SlothAnimation_C SlothAnimation.Default__SlothAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothAnimation_C* USlothAnimation_C::GetDefaultObj()
{
	static class USlothAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothAnimation_C*>(USlothAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SlothAnimation.SlothAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USlothAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "AnimGraph");

	Params::USlothAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_2E23465449B296D4D27CCE9EBBBCF6FA
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_2E23465449B296D4D27CCE9EBBBCF6FA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_2E23465449B296D4D27CCE9EBBBCF6FA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_755C625D4123201527497A8CA60E11CF
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_755C625D4123201527497A8CA60E11CF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_755C625D4123201527497A8CA60E11CF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_B0A78881480A78B010DFC28038209C35
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_B0A78881480A78B010DFC28038209C35()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_B0A78881480A78B010DFC28038209C35");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_LookAt_735566C343F3AA5DF52AA3A321C7AB91
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_LookAt_735566C343F3AA5DF52AA3A321C7AB91()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_LookAt_735566C343F3AA5DF52AA3A321C7AB91");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_D7F9601D4587628F3DD2BFB88F04E844
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_D7F9601D4587628F3DD2BFB88F04E844()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_D7F9601D4587628F3DD2BFB88F04E844");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_6479A24741BE831CDCABA29DDDDF583C
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_6479A24741BE831CDCABA29DDDDF583C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_6479A24741BE831CDCABA29DDDDF583C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_ABE726CA4673DEA917586496C1476DF0
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_ABE726CA4673DEA917586496C1476DF0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_ABE726CA4673DEA917586496C1476DF0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CF179CF745790CB65A3A159F0B999F4B
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CF179CF745790CB65A3A159F0B999F4B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CF179CF745790CB65A3A159F0B999F4B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_988389454A2917C5A6599587E0F3624B
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_988389454A2917C5A6599587E0F3624B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_988389454A2917C5A6599587E0F3624B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CD3D830A4AE444114A0C88A6F8ABA5DA
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CD3D830A4AE444114A0C88A6F8ABA5DA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CD3D830A4AE444114A0C88A6F8ABA5DA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_66C73AE44BC90136375E53834935AE24
// (BlueprintEvent)
// Parameters:

void USlothAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_66C73AE44BC90136375E53834935AE24()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_66C73AE44BC90136375E53834935AE24");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlothAnimation.SlothAnimation_C.ExecuteUbergraph_SlothAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USlothAnimation_C::ExecuteUbergraph_SlothAnimation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlothAnimation_C", "ExecuteUbergraph_SlothAnimation");

	Params::USlothAnimation_C_ExecuteUbergraph_SlothAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


