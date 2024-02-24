#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass frog_king_v2_Skeleton_AnimBlueprint.frog_king_v2_Skeleton_AnimBlueprint_C
// (None)

class UClass* UFrog_king_v2_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("frog_king_v2_Skeleton_AnimBlueprint_C");

	return Clss;
}


// frog_king_v2_Skeleton_AnimBlueprint_C frog_king_v2_Skeleton_AnimBlueprint.Default__frog_king_v2_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrog_king_v2_Skeleton_AnimBlueprint_C* UFrog_king_v2_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UFrog_king_v2_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrog_king_v2_Skeleton_AnimBlueprint_C*>(UFrog_king_v2_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function frog_king_v2_Skeleton_AnimBlueprint.frog_king_v2_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFrog_king_v2_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("frog_king_v2_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UFrog_king_v2_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function frog_king_v2_Skeleton_AnimBlueprint.frog_king_v2_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_E75518844285A2B68D3D9D82E57B041E
// (BlueprintEvent)
// Parameters:

void UFrog_king_v2_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_E75518844285A2B68D3D9D82E57B041E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("frog_king_v2_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_E75518844285A2B68D3D9D82E57B041E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function frog_king_v2_Skeleton_AnimBlueprint.frog_king_v2_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrog_king_v2_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("frog_king_v2_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UFrog_king_v2_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function frog_king_v2_Skeleton_AnimBlueprint.frog_king_v2_Skeleton_AnimBlueprint_C.ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrog_NPC_C*                 K2Node_DynamicCast_AsFrog_NPC                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrog_king_v2_Skeleton_AnimBlueprint_C::ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint(int32 EntryPoint, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, const struct FVector& K2Node_Select_Default, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, class AFrog_NPC_C* K2Node_DynamicCast_AsFrog_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("frog_king_v2_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint");

	Params::UFrog_king_v2_Skeleton_AnimBlueprint_C_ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFrog_NPC = K2Node_DynamicCast_AsFrog_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


