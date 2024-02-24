#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C
// (None)

class UClass* UMediumRangedBrigandAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediumRangedBrigandAnimBP_C");

	return Clss;
}


// MediumRangedBrigandAnimBP_C MediumRangedBrigandAnimBP.Default__MediumRangedBrigandAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMediumRangedBrigandAnimBP_C* UMediumRangedBrigandAnimBP_C::GetDefaultObj()
{
	static class UMediumRangedBrigandAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediumRangedBrigandAnimBP_C*>(UMediumRangedBrigandAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMediumRangedBrigandAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediumRangedBrigandAnimBP_C", "AnimGraph");

	Params::UMediumRangedBrigandAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C.UpdateWalkRightWalkForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMediumRangedBrigandAnimBP_C::UpdateWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediumRangedBrigandAnimBP_C", "UpdateWalkRightWalkForward");

	Params::UMediumRangedBrigandAnimBP_C_UpdateWalkRightWalkForward_Params Parms{};

	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MediumRangedBrigandAnimBP_AnimGraphNode_RotationOffsetBlendSpace_B21DB1C544D07D590CE91A9CB5822D71
// (BlueprintEvent)
// Parameters:

void UMediumRangedBrigandAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MediumRangedBrigandAnimBP_AnimGraphNode_RotationOffsetBlendSpace_B21DB1C544D07D590CE91A9CB5822D71()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediumRangedBrigandAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MediumRangedBrigandAnimBP_AnimGraphNode_RotationOffsetBlendSpace_B21DB1C544D07D590CE91A9CB5822D71");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMediumRangedBrigandAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediumRangedBrigandAnimBP_C", "BlueprintUpdateAnimation");

	Params::UMediumRangedBrigandAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C.SwitchToMeleeMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMediumRangedBrigandAnimBP_C::SwitchToMeleeMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediumRangedBrigandAnimBP_C", "SwitchToMeleeMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C.ExecuteUbergraph_MediumRangedBrigandAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARangedEnemy_C*              K2Node_DynamicCast_AsRanged_Enemy                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMediumRangedBrigandAnimBP_C::ExecuteUbergraph_MediumRangedBrigandAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ARangedEnemy_C* K2Node_DynamicCast_AsRanged_Enemy, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediumRangedBrigandAnimBP_C", "ExecuteUbergraph_MediumRangedBrigandAnimBP");

	Params::UMediumRangedBrigandAnimBP_C_ExecuteUbergraph_MediumRangedBrigandAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsRanged_Enemy = K2Node_DynamicCast_AsRanged_Enemy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


