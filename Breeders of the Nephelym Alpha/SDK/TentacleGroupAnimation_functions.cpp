#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass TentacleGroupAnimation.TentacleGroupAnimation_C
// (None)

class UClass* UTentacleGroupAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TentacleGroupAnimation_C");

	return Clss;
}


// TentacleGroupAnimation_C TentacleGroupAnimation.Default__TentacleGroupAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTentacleGroupAnimation_C* UTentacleGroupAnimation_C::GetDefaultObj()
{
	static class UTentacleGroupAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTentacleGroupAnimation_C*>(UTentacleGroupAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UTentacleGroupAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "AnimGraph");

	Params::UTentacleGroupAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_493B987542EC72C8788A12985F242601
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_493B987542EC72C8788A12985F242601()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_493B987542EC72C8788A12985F242601");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_F2C10204459BE8B681F4AF97735F627E
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_F2C10204459BE8B681F4AF97735F627E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_F2C10204459BE8B681F4AF97735F627E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_44CAD0CF4EE2DA065C99E4AAE52D3361
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_44CAD0CF4EE2DA065C99E4AAE52D3361()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_44CAD0CF4EE2DA065C99E4AAE52D3361");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_59B8C1DB4722583438BC86BD764FAB31
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_59B8C1DB4722583438BC86BD764FAB31()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_59B8C1DB4722583438BC86BD764FAB31");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_C446FEFC48BD65DE48F00BBD3E64FB8B
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_C446FEFC48BD65DE48F00BBD3E64FB8B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_C446FEFC48BD65DE48F00BBD3E64FB8B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A62043C14EB71A0C1FC7D0956B016B60
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A62043C14EB71A0C1FC7D0956B016B60()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A62043C14EB71A0C1FC7D0956B016B60");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_31F0EEB34A2D9405B3A69DBEF22A2D21
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_31F0EEB34A2D9405B3A69DBEF22A2D21()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_31F0EEB34A2D9405B3A69DBEF22A2D21");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_6526B43D4C01FBD84CEC5B996B026A80
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_6526B43D4C01FBD84CEC5B996B026A80()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_6526B43D4C01FBD84CEC5B996B026A80");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E0B779E742CF87B18BD86384537926E7
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E0B779E742CF87B18BD86384537926E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E0B779E742CF87B18BD86384537926E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_9B472A4140BBCB5A4C54E7BD06389AAE
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_9B472A4140BBCB5A4C54E7BD06389AAE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_9B472A4140BBCB5A4C54E7BD06389AAE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E6619E6E4F9C852B359695BAEEAC155C
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E6619E6E4F9C852B359695BAEEAC155C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E6619E6E4F9C852B359695BAEEAC155C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_053D280F4B469762387A3C926021229D
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_053D280F4B469762387A3C926021229D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_053D280F4B469762387A3C926021229D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_3BFDF81C4041F49D8D27809B9BEFCFF4
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_3BFDF81C4041F49D8D27809B9BEFCFF4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_3BFDF81C4041F49D8D27809B9BEFCFF4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A0E91C004F1B8D52D47B47ABC017C59E
// (BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A0E91C004F1B8D52D47B47ABC017C59E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A0E91C004F1B8D52D47B47ABC017C59E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.AnimNotify_EmergeComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::AnimNotify_EmergeComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "AnimNotify_EmergeComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.AnimNotify_SubmergeComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTentacleGroupAnimation_C::AnimNotify_SubmergeComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "AnimNotify_SubmergeComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TentacleGroupAnimation.TentacleGroupAnimation_C.ExecuteUbergraph_TentacleGroupAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTentacleGroupAnimation_C::ExecuteUbergraph_TentacleGroupAnimation(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool Temp_bool_IsClosed_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TentacleGroupAnimation_C", "ExecuteUbergraph_TentacleGroupAnimation");

	Params::UTentacleGroupAnimation_C_ExecuteUbergraph_TentacleGroupAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_8 = CallFunc_EqualEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_9 = CallFunc_EqualEqual_IntInt_ReturnValue_9;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


