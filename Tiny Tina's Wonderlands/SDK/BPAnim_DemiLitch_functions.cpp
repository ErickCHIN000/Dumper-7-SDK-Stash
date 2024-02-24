#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_DemiLitch.BPAnim_DemiLitch_C
// (None)

class UClass* UBPAnim_DemiLitch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_DemiLitch_C");

	return Clss;
}


// BPAnim_DemiLitch_C BPAnim_DemiLitch.Default__BPAnim_DemiLitch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_DemiLitch_C* UBPAnim_DemiLitch_C::GetDefaultObj()
{
	static class UBPAnim_DemiLitch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_DemiLitch_C*>(UBPAnim_DemiLitch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_DemiLitch.BPAnim_DemiLitch_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_BlendSpacePlayer_F9D0513A4B3EC82371A2908DCD21FD1B
// (BlueprintEvent)
// Parameters:

void UBPAnim_DemiLitch_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_BlendSpacePlayer_F9D0513A4B3EC82371A2908DCD21FD1B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DemiLitch_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_BlendSpacePlayer_F9D0513A4B3EC82371A2908DCD21FD1B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DemiLitch.BPAnim_DemiLitch_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_ApplyAdditive_79B0020C4EAECA9170F379B56A434EEB
// (BlueprintEvent)
// Parameters:

void UBPAnim_DemiLitch_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_ApplyAdditive_79B0020C4EAECA9170F379B56A434EEB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DemiLitch_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_ApplyAdditive_79B0020C4EAECA9170F379B56A434EEB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_DemiLitch.BPAnim_DemiLitch_C.ExecuteUbergraph_BPAnim_DemiLitch
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_DemiLitch_C::ExecuteUbergraph_BPAnim_DemiLitch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_DemiLitch_C", "ExecuteUbergraph_BPAnim_DemiLitch");

	Params::UBPAnim_DemiLitch_C_ExecuteUbergraph_BPAnim_DemiLitch_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


