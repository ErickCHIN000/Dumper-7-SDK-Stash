#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ThirdPerson_AnimBP.ThirdPerson_AnimBP_C
// (None)

class UClass* UThirdPerson_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThirdPerson_AnimBP_C");

	return Clss;
}


// ThirdPerson_AnimBP_C ThirdPerson_AnimBP.Default__ThirdPerson_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThirdPerson_AnimBP_C* UThirdPerson_AnimBP_C::GetDefaultObj()
{
	static class UThirdPerson_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThirdPerson_AnimBP_C*>(UThirdPerson_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UThirdPerson_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "AnimGraph");

	Params::UThirdPerson_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_A95B9118482B787DE4D11787597B31B2
// (BlueprintEvent)
// Parameters:

void UThirdPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_A95B9118482B787DE4D11787597B31B2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_A95B9118482B787DE4D11787597B31B2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF
// (BlueprintEvent)
// Parameters:

void UThirdPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThirdPerson_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UThirdPerson_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E
// (BlueprintEvent)
// Parameters:

void UThirdPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.AnimNotify_LeftAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UThirdPerson_AnimBP_C::AnimNotify_LeftAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "AnimNotify_LeftAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.ExecuteUbergraph_ThirdPerson_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AThirdPersonCharacter_C*     K2Node_DynamicCast_AsThird_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AThirdPersonCharacter_C*     K2Node_DynamicCast_AsThird_Person_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UThirdPerson_AnimBP_C::ExecuteUbergraph_ThirdPerson_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, class AThirdPersonCharacter_C* K2Node_DynamicCast_AsThird_Person_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class AThirdPersonCharacter_C* K2Node_DynamicCast_AsThird_Person_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "ExecuteUbergraph_ThirdPerson_AnimBP");

	Params::UThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.K2Node_DynamicCast_AsThird_Person_Character = K2Node_DynamicCast_AsThird_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsThird_Person_Character_1 = K2Node_DynamicCast_AsThird_Person_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


