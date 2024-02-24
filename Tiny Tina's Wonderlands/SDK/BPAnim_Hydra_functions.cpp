#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_Hydra.BPAnim_Hydra_C
// (None)

class UClass* UBPAnim_Hydra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_Hydra_C");

	return Clss;
}


// BPAnim_Hydra_C BPAnim_Hydra.Default__BPAnim_Hydra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_Hydra_C* UBPAnim_Hydra_C::GetDefaultObj()
{
	static class UBPAnim_Hydra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_Hydra_C*>(UBPAnim_Hydra_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_Hydra.BPAnim_Hydra_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_Hydra_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Hydra_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Hydra.BPAnim_Hydra_C.OnAnimStyleChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_Hydra_C::OnAnimStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Hydra_C", "OnAnimStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Hydra.BPAnim_Hydra_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Hydra_AnimGraphNode_RotationOffsetBlendSpace_C5AD4A2E435CB0416DF76C8AD28B850B
// (BlueprintEvent)
// Parameters:

void UBPAnim_Hydra_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Hydra_AnimGraphNode_RotationOffsetBlendSpace_C5AD4A2E435CB0416DF76C8AD28B850B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Hydra_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Hydra_AnimGraphNode_RotationOffsetBlendSpace_C5AD4A2E435CB0416DF76C8AD28B850B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Hydra.BPAnim_Hydra_C.ExecuteUbergraph_BPAnim_Hydra
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Hydra_C::ExecuteUbergraph_BPAnim_Hydra(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Hydra_C", "ExecuteUbergraph_BPAnim_Hydra");

	Params::UBPAnim_Hydra_C_ExecuteUbergraph_BPAnim_Hydra_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


