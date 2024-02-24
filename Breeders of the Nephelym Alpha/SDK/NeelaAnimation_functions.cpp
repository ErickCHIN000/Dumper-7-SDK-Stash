#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass NeelaAnimation.NeelaAnimation_C
// (None)

class UClass* UNeelaAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaAnimation_C");

	return Clss;
}


// NeelaAnimation_C NeelaAnimation.Default__NeelaAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaAnimation_C* UNeelaAnimation_C::GetDefaultObj()
{
	static class UNeelaAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaAnimation_C*>(UNeelaAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NeelaAnimation.NeelaAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNeelaAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "AnimGraph");

	Params::UNeelaAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_8228908049CAC686CB200DA66EF58661
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_8228908049CAC686CB200DA66EF58661()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_8228908049CAC686CB200DA66EF58661");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_CA5665C248145D51E60608BB57689C14
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_CA5665C248145D51E60608BB57689C14()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_CA5665C248145D51E60608BB57689C14");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_2DB6BED940CAA019E23C0F9A4456CF7A
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_2DB6BED940CAA019E23C0F9A4456CF7A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_2DB6BED940CAA019E23C0F9A4456CF7A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_5F4CA1034E5D2672789E398BE740EE6E
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_5F4CA1034E5D2672789E398BE740EE6E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_5F4CA1034E5D2672789E398BE740EE6E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_00591C6C477CD38A58A4D78C31A21402
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_00591C6C477CD38A58A4D78C31A21402()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_00591C6C477CD38A58A4D78C31A21402");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_97AE0922418856D73914698C7A86D985
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_97AE0922418856D73914698C7A86D985()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_97AE0922418856D73914698C7A86D985");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_FA0AD50945D4811B1415FD9FFB7A7E9E
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_FA0AD50945D4811B1415FD9FFB7A7E9E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_FA0AD50945D4811B1415FD9FFB7A7E9E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_92301340462E52716A0FC2AED0524A69
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_92301340462E52716A0FC2AED0524A69()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_92301340462E52716A0FC2AED0524A69");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_A5D80BC944ED25376FC9A998A317FF7D
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_A5D80BC944ED25376FC9A998A317FF7D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_A5D80BC944ED25376FC9A998A317FF7D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_LookAt_B217174A4F9923FFB91E96BD1009A9FA
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_LookAt_B217174A4F9923FFB91E96BD1009A9FA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_LookAt_B217174A4F9923FFB91E96BD1009A9FA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_74103F824948D350842355ACD0E0439B
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_74103F824948D350842355ACD0E0439B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_74103F824948D350842355ACD0E0439B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_A9BE8479457079A356F7B9902CBD51F1
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_A9BE8479457079A356F7B9902CBD51F1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_A9BE8479457079A356F7B9902CBD51F1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_6001B1D54BB01DB439508F854EDDD9E2
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_6001B1D54BB01DB439508F854EDDD9E2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_6001B1D54BB01DB439508F854EDDD9E2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_BE42B70446D93689251D66B8FC677C2D
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_BE42B70446D93689251D66B8FC677C2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_BE42B70446D93689251D66B8FC677C2D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_30FCC6ED45D0509022BF3F9A24C430BB
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_30FCC6ED45D0509022BF3F9A24C430BB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_30FCC6ED45D0509022BF3F9A24C430BB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C40D6D094A84CAEF5E7CBAAA3B2A25E3
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C40D6D094A84CAEF5E7CBAAA3B2A25E3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C40D6D094A84CAEF5E7CBAAA3B2A25E3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C87F0A4B46F84C5C382749BBC639F37C
// (BlueprintEvent)
// Parameters:

void UNeelaAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C87F0A4B46F84C5C382749BBC639F37C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C87F0A4B46F84C5C382749BBC639F37C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NeelaAnimation.NeelaAnimation_C.ExecuteUbergraph_NeelaAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNeelaAnimation_C::ExecuteUbergraph_NeelaAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NeelaAnimation_C", "ExecuteUbergraph_NeelaAnimation");

	Params::UNeelaAnimation_C_ExecuteUbergraph_NeelaAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


