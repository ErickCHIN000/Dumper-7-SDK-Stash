#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DemoOuter_HairAnimBP.DemoOuter_HairAnimBP_C
// (None)

class UClass* UDemoOuter_HairAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemoOuter_HairAnimBP_C");

	return Clss;
}


// DemoOuter_HairAnimBP_C DemoOuter_HairAnimBP.Default__DemoOuter_HairAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemoOuter_HairAnimBP_C* UDemoOuter_HairAnimBP_C::GetDefaultObj()
{
	static class UDemoOuter_HairAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemoOuter_HairAnimBP_C*>(UDemoOuter_HairAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DemoOuter_HairAnimBP.DemoOuter_HairAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HairAnimBP_AnimGraphNode_BlendListByBool_664B13574790882F6CCC768645238CC8
// (BlueprintEvent)
// Parameters:

void UDemoOuter_HairAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HairAnimBP_AnimGraphNode_BlendListByBool_664B13574790882F6CCC768645238CC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoOuter_HairAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HairAnimBP_AnimGraphNode_BlendListByBool_664B13574790882F6CCC768645238CC8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoOuter_HairAnimBP.DemoOuter_HairAnimBP_C.ExecuteUbergraph_DemoOuter_HairAnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDemoOuter_HairAnimBP_C::ExecuteUbergraph_DemoOuter_HairAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoOuter_HairAnimBP_C", "ExecuteUbergraph_DemoOuter_HairAnimBP");

	Params::UDemoOuter_HairAnimBP_C_ExecuteUbergraph_DemoOuter_HairAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


