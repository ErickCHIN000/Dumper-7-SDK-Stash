#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C
// (None)

class UClass* UExampleCharacter_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExampleCharacter_AnimBP_C");

	return Clss;
}


// ExampleCharacter_AnimBP_C ExampleCharacter_AnimBP.Default__ExampleCharacter_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExampleCharacter_AnimBP_C* UExampleCharacter_AnimBP_C::GetDefaultObj()
{
	static class UExampleCharacter_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExampleCharacter_AnimBP_C*>(UExampleCharacter_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UExampleCharacter_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "AnimGraph");

	Params::UExampleCharacter_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_B5FC24DC46AC278756122B949D5CDB8C
// (BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_B5FC24DC46AC278756122B949D5CDB8C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_B5FC24DC46AC278756122B949D5CDB8C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E
// (BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A
// (BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993
// (BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B
// (BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF
// (BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_BA7306BD40D3FE50A5E9239D31192E92
// (BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_BA7306BD40D3FE50A5E9239D31192E92()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExampleCharacter_AnimBP_AnimGraphNode_TransitionResult_BA7306BD40D3FE50A5E9239D31192E92");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExampleCharacter_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UExampleCharacter_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UExampleCharacter_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExampleCharacter_AnimBP.ExampleCharacter_AnimBP_C.ExecuteUbergraph_ExampleCharacter_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ExampleCharacter_C*      K2Node_DynamicCast_AsBP_Example_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Direction_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExampleCharacter_AnimBP_C::ExecuteUbergraph_ExampleCharacter_AnimBP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, float K2Node_Event_DeltaTimeX, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_ExampleCharacter_C* K2Node_DynamicCast_AsBP_Example_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsCrouching_ReturnValue, double K2Node_VariableSet_Direction_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExampleCharacter_AnimBP_C", "ExecuteUbergraph_ExampleCharacter_AnimBP");

	Params::UExampleCharacter_AnimBP_C_ExecuteUbergraph_ExampleCharacter_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Example_Character = K2Node_DynamicCast_AsBP_Example_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.K2Node_VariableSet_Direction_ImplicitCast = K2Node_VariableSet_Direction_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast_1 = CallFunc_Less_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast_2 = CallFunc_Less_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


