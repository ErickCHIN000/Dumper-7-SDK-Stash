#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C
// (None)

class UClass* UBPAnim_SM_Hyperion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_SM_Hyperion_C");

	return Clss;
}


// BPAnim_SM_Hyperion_C BPAnim_SM_Hyperion.Default__BPAnim_SM_Hyperion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_SM_Hyperion_C* UBPAnim_SM_Hyperion_C::GetDefaultObj()
{
	static class UBPAnim_SM_Hyperion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_SM_Hyperion_C*>(UBPAnim_SM_Hyperion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_Hyperion_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Hyperion_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993
// (BlueprintEvent)
// Parameters:

void UBPAnim_SM_Hyperion_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Hyperion_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.ExecuteUbergraph_BPAnim_SM_Hyperion
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SM_Hyperion_C::ExecuteUbergraph_BPAnim_SM_Hyperion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_SM_Hyperion_C", "ExecuteUbergraph_BPAnim_SM_Hyperion");

	Params::UBPAnim_SM_Hyperion_C_ExecuteUbergraph_BPAnim_SM_Hyperion_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


