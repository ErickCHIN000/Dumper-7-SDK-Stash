#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C
// (None)

class UClass* USK_DEP_WindTurbine_Metal_V2_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_DEP_WindTurbine_Metal_V2_AnimBP_C");

	return Clss;
}


// SK_DEP_WindTurbine_Metal_V2_AnimBP_C SK_DEP_WindTurbine_Metal_V2_AnimBP.Default__SK_DEP_WindTurbine_Metal_V2_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_DEP_WindTurbine_Metal_V2_AnimBP_C* USK_DEP_WindTurbine_Metal_V2_AnimBP_C::GetDefaultObj()
{
	static class USK_DEP_WindTurbine_Metal_V2_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_DEP_WindTurbine_Metal_V2_AnimBP_C*>(USK_DEP_WindTurbine_Metal_V2_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_DEP_WindTurbine_Metal_V2_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_WindTurbine_Metal_V2_AnimBP_C", "AnimGraph");

	Params::USK_DEP_WindTurbine_Metal_V2_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP_AnimGraphNode_ModifyBone_9BEC68FC4FB55FF3D6061F87DC058B1E
// (BlueprintEvent)
// Parameters:

void USK_DEP_WindTurbine_Metal_V2_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP_AnimGraphNode_ModifyBone_9BEC68FC4FB55FF3D6061F87DC058B1E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_WindTurbine_Metal_V2_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP_AnimGraphNode_ModifyBone_9BEC68FC4FB55FF3D6061F87DC058B1E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_DEP_WindTurbine_Metal_V2_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_WindTurbine_Metal_V2_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_DEP_WindTurbine_Metal_V2_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C.ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WindTurbine_C*           K2Node_DynamicCast_AsBP_Wind_Turbine                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_DEP_WindTurbine_Metal_V2_AnimBP_C::ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_WindTurbine_C* K2Node_DynamicCast_AsBP_Wind_Turbine, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_WindTurbine_Metal_V2_AnimBP_C", "ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP");

	Params::USK_DEP_WindTurbine_Metal_V2_AnimBP_C_ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Wind_Turbine = K2Node_DynamicCast_AsBP_Wind_Turbine;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


