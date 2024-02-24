#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PolymorphCritter.BPAnim_PolymorphCritter_C
// (None)

class UClass* UBPAnim_PolymorphCritter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PolymorphCritter_C");

	return Clss;
}


// BPAnim_PolymorphCritter_C BPAnim_PolymorphCritter.Default__BPAnim_PolymorphCritter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PolymorphCritter_C* UBPAnim_PolymorphCritter_C::GetDefaultObj()
{
	static class UBPAnim_PolymorphCritter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PolymorphCritter_C*>(UBPAnim_PolymorphCritter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PolymorphCritter.BPAnim_PolymorphCritter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PolymorphCritter_GbxAnimGraphNode_BlendListByFloatInRange_16FA8F8E4E183DDB74777D96D632ACD7
// (BlueprintEvent)
// Parameters:

void UBPAnim_PolymorphCritter_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PolymorphCritter_GbxAnimGraphNode_BlendListByFloatInRange_16FA8F8E4E183DDB74777D96D632ACD7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PolymorphCritter_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PolymorphCritter_GbxAnimGraphNode_BlendListByFloatInRange_16FA8F8E4E183DDB74777D96D632ACD7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PolymorphCritter.BPAnim_PolymorphCritter_C.ExecuteUbergraph_BPAnim_PolymorphCritter
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_PolymorphCritter_C::ExecuteUbergraph_BPAnim_PolymorphCritter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PolymorphCritter_C", "ExecuteUbergraph_BPAnim_PolymorphCritter");

	Params::UBPAnim_PolymorphCritter_C_ExecuteUbergraph_BPAnim_PolymorphCritter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


