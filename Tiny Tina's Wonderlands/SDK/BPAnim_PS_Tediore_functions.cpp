#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PS_Tediore.BPAnim_PS_Tediore_C
// (None)

class UClass* UBPAnim_PS_Tediore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PS_Tediore_C");

	return Clss;
}


// BPAnim_PS_Tediore_C BPAnim_PS_Tediore.Default__BPAnim_PS_Tediore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PS_Tediore_C* UBPAnim_PS_Tediore_C::GetDefaultObj()
{
	static class UBPAnim_PS_Tediore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PS_Tediore_C*>(UBPAnim_PS_Tediore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_BlendListByBool_BF6DB7404B3B1CA77EF88DAA53125536
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_Tediore_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_BlendListByBool_BF6DB7404B3B1CA77EF88DAA53125536()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Tediore_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_BlendListByBool_BF6DB7404B3B1CA77EF88DAA53125536");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_Tediore_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Tediore_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_Tediore_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Tediore_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_PS_Tediore_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Tediore_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.ExecuteUbergraph_BPAnim_PS_Tediore
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_PS_Tediore_C::ExecuteUbergraph_BPAnim_PS_Tediore(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_Tediore_C", "ExecuteUbergraph_BPAnim_PS_Tediore");

	Params::UBPAnim_PS_Tediore_C_ExecuteUbergraph_BPAnim_PS_Tediore_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


