#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C
// (None)

class UClass* USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C");

	return Clss;
}


// SK_BLD_TrapDoorHatch_Concrete_AnimBP_C SK_BLD_TrapDoorHatch_Concrete_AnimBP.Default__SK_BLD_TrapDoorHatch_Concrete_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_BLD_TrapDoorHatch_Concrete_AnimBP_C* USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::GetDefaultObj()
{
	static class USK_BLD_TrapDoorHatch_Concrete_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_BLD_TrapDoorHatch_Concrete_AnimBP_C*>(USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C", "AnimGraph");

	Params::USK_BLD_TrapDoorHatch_Concrete_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_6D97017C4BA4954588CE56A47C4B5D2B
// (BlueprintEvent)
// Parameters:

void USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_6D97017C4BA4954588CE56A47C4B5D2B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_6D97017C4BA4954588CE56A47C4B5D2B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_0E79621146D94A070666E9A2FCC114F0
// (BlueprintEvent)
// Parameters:

void USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_0E79621146D94A070666E9A2FCC114F0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_0E79621146D94A070666E9A2FCC114F0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_42EC7314424818BF939070BF8ECDDC87
// (BlueprintEvent)
// Parameters:

void USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_42EC7314424818BF939070BF8ECDDC87()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_42EC7314424818BF939070BF8ECDDC87");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_05F91A784EC632CFCB7A40A3A13FB7A9
// (BlueprintEvent)
// Parameters:

void USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_05F91A784EC632CFCB7A40A3A13FB7A9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_AnimGraphNode_TransitionResult_05F91A784EC632CFCB7A40A3A13FB7A9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_BLD_TrapDoorHatch_Concrete_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BLD_TrapDoorHatch_Concrete_AnimBP.SK_BLD_TrapDoorHatch_Concrete_AnimBP_C.ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Door_Base_C*             K2Node_DynamicCast_AsBP_Door_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BLD_TrapDoorHatch_Concrete_AnimBP_C::ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Door_Base_C* K2Node_DynamicCast_AsBP_Door_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_TrapDoorHatch_Concrete_AnimBP_C", "ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP");

	Params::USK_BLD_TrapDoorHatch_Concrete_AnimBP_C_ExecuteUbergraph_SK_BLD_TrapDoorHatch_Concrete_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Door_Base = K2Node_DynamicCast_AsBP_Door_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


