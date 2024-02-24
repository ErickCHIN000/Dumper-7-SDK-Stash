#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PS_TOR.BPAnim_PS_TOR_C
// (None)

class UClass* UBPAnim_PS_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PS_TOR_C");

	return Clss;
}


// BPAnim_PS_TOR_C BPAnim_PS_TOR.Default__BPAnim_PS_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PS_TOR_C* UBPAnim_PS_TOR_C::GetDefaultObj()
{
	static class UBPAnim_PS_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PS_TOR_C*>(UBPAnim_PS_TOR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_BlendListByBool_6889D92C4AE733A3490B6F9362F46C93
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_BlendListByBool_6889D92C4AE733A3490B6F9362F46C93()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_BlendListByBool_6889D92C4AE733A3490B6F9362F46C93");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_TOR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_PS_TOR_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_TOR_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.ExecuteUbergraph_BPAnim_PS_TOR
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_PS_TOR_C::ExecuteUbergraph_BPAnim_PS_TOR(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_TOR_C", "ExecuteUbergraph_BPAnim_PS_TOR");

	Params::UBPAnim_PS_TOR_C_ExecuteUbergraph_BPAnim_PS_TOR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


