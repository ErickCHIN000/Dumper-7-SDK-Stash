#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C
// (None)

class UClass* UVamp_Skin_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vamp_Skin_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Vamp_Skin_Skeleton_AnimBlueprint_C Vamp_Skin_Skeleton_AnimBlueprint.Default__Vamp_Skin_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVamp_Skin_Skeleton_AnimBlueprint_C* UVamp_Skin_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UVamp_Skin_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVamp_Skin_Skeleton_AnimBlueprint_C*>(UVamp_Skin_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UVamp_Skin_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UVamp_Skin_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.UpdateStrafeWalkRightWalkForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)

void UVamp_Skin_Skeleton_AnimBlueprint_C::UpdateStrafeWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "UpdateStrafeWalkRightWalkForward");

	Params::UVamp_Skin_Skeleton_AnimBlueprint_C_UpdateStrafeWalkRightWalkForward_Params Parms{};

	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.UpdateWalkRightWalkForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVamp_Skin_Skeleton_AnimBlueprint_C::UpdateWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "UpdateWalkRightWalkForward");

	Params::UVamp_Skin_Skeleton_AnimBlueprint_C_UpdateWalkRightWalkForward_Params Parms{};

	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_7C5BD07F42B6E5A430526C9849EFAE67
// (BlueprintEvent)
// Parameters:

void UVamp_Skin_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_7C5BD07F42B6E5A430526C9849EFAE67()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_7C5BD07F42B6E5A430526C9849EFAE67");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6E0A467E4431CD13577246B919706411
// (BlueprintEvent)
// Parameters:

void UVamp_Skin_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6E0A467E4431CD13577246B919706411()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6E0A467E4431CD13577246B919706411");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVamp_Skin_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UVamp_Skin_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.DeathAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVamp_Skin_Skeleton_AnimBlueprint_C::DeathAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "DeathAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UVamp_Skin_Skeleton_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVamp_Skin_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vamp_Skin_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint");

	Params::UVamp_Skin_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


