#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DemoOuter_HeadAnimBP.DemoOuter_HeadAnimBP_C
// (None)

class UClass* UDemoOuter_HeadAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemoOuter_HeadAnimBP_C");

	return Clss;
}


// DemoOuter_HeadAnimBP_C DemoOuter_HeadAnimBP.Default__DemoOuter_HeadAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemoOuter_HeadAnimBP_C* UDemoOuter_HeadAnimBP_C::GetDefaultObj()
{
	static class UDemoOuter_HeadAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemoOuter_HeadAnimBP_C*>(UDemoOuter_HeadAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DemoOuter_HeadAnimBP.DemoOuter_HeadAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_LayeredBoneBlend_98F32FA44B20E92CCEB1309748941997
// (BlueprintEvent)
// Parameters:

void UDemoOuter_HeadAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_LayeredBoneBlend_98F32FA44B20E92CCEB1309748941997()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoOuter_HeadAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_LayeredBoneBlend_98F32FA44B20E92CCEB1309748941997");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoOuter_HeadAnimBP.DemoOuter_HeadAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_SequencePlayer_2AF334804DEA95D6BB5B1CA5872DB608
// (BlueprintEvent)
// Parameters:

void UDemoOuter_HeadAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_SequencePlayer_2AF334804DEA95D6BB5B1CA5872DB608()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoOuter_HeadAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_SequencePlayer_2AF334804DEA95D6BB5B1CA5872DB608");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DemoOuter_HeadAnimBP.DemoOuter_HeadAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDemoOuter_HeadAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoOuter_HeadAnimBP_C", "BlueprintUpdateAnimation");

	Params::UDemoOuter_HeadAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DemoOuter_HeadAnimBP.DemoOuter_HeadAnimBP_C.ExecuteUbergraph_DemoOuter_HeadAnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateParaameters_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDemoOuter_HeadAnimBP_C::ExecuteUbergraph_DemoOuter_HeadAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UpdateParaameters_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DemoOuter_HeadAnimBP_C", "ExecuteUbergraph_DemoOuter_HeadAnimBP");

	Params::UDemoOuter_HeadAnimBP_C_ExecuteUbergraph_DemoOuter_HeadAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_UpdateParaameters_ReturnValue = CallFunc_UpdateParaameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


