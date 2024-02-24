#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SG_JAK.BPAnim_SG_JAK_C
// (None)

class UClass* UBPAnim_SG_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SG_JAK_C");

	return Clss;
}


// BPAnim_SG_JAK_C BPAnim_SG_JAK.Default__BPAnim_SG_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SG_JAK_C* UBPAnim_SG_JAK_C::GetDefaultObj()
{
	static class UBPAnim_SG_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SG_JAK_C*>(UBPAnim_SG_JAK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_TwoWayBlend_77083F024CD159EB7EBA3F885D180D87
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_TwoWayBlend_77083F024CD159EB7EBA3F885D180D87()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_TwoWayBlend_77083F024CD159EB7EBA3F885D180D87");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_BlendListByBool_5A42184A41C414E0DDE2D082F2C3C313
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_BlendListByBool_5A42184A41C414E0DDE2D082F2C3C313()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_BlendListByBool_5A42184A41C414E0DDE2D082F2C3C313");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368
// (BlueprintEvent)
// Parameters:

void UBPAnim_SG_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_JAK_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_SG_JAK_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_JAK_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.ExecuteUbergraph_BPAnim_SG_JAK
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_SG_JAK_C::ExecuteUbergraph_BPAnim_SG_JAK(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SG_JAK_C", "ExecuteUbergraph_BPAnim_SG_JAK");

	Params::UBPAnim_SG_JAK_C_ExecuteUbergraph_BPAnim_SG_JAK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


