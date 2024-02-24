#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Kvakun_AnimBP.Kvakun_AnimBP_C
// (None)

class UClass* UKvakun_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kvakun_AnimBP_C");

	return Clss;
}


// Kvakun_AnimBP_C Kvakun_AnimBP.Default__Kvakun_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKvakun_AnimBP_C* UKvakun_AnimBP_C::GetDefaultObj()
{
	static class UKvakun_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKvakun_AnimBP_C*>(UKvakun_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UKvakun_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "AnimGraph");

	Params::UKvakun_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKvakun_AnimBP_C::AB_SyncState(enum class EAIStates NewState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "AB_SyncState");

	Params::UKvakun_AnimBP_C_AB_SyncState_Params Parms{};

	Parms.NewState = NewState;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_ModifyBone_C27CDAEA461D608BF9C442B339C1688C
// (BlueprintEvent)
// Parameters:

void UKvakun_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_ModifyBone_C27CDAEA461D608BF9C442B339C1688C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_ModifyBone_C27CDAEA461D608BF9C442B339C1688C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_TransitionResult_62182F5C479C28E04ABFEABE626DAA9B
// (BlueprintEvent)
// Parameters:

void UKvakun_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_TransitionResult_62182F5C479C28E04ABFEABE626DAA9B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_TransitionResult_62182F5C479C28E04ABFEABE626DAA9B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_TransitionResult_2509F2134E00AF326713388838B91A44
// (BlueprintEvent)
// Parameters:

void UKvakun_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_TransitionResult_2509F2134E00AF326713388838B91A44()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Kvakun_AnimBP_AnimGraphNode_TransitionResult_2509F2134E00AF326713388838B91A44");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UKvakun_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKvakun_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UKvakun_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UKvakun_AnimBP_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Kvakun_AnimBP.Kvakun_AnimBP_C.ExecuteUbergraph_Kvakun_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKvakunCharacter_C*          K2Node_DynamicCast_AsKvakun_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKvakun_AnimBP_C::ExecuteUbergraph_Kvakun_AnimBP(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class AKvakunCharacter_C* K2Node_DynamicCast_AsKvakun_Character, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kvakun_AnimBP_C", "ExecuteUbergraph_Kvakun_AnimBP");

	Params::UKvakun_AnimBP_C_ExecuteUbergraph_Kvakun_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsKvakun_Character = K2Node_DynamicCast_AsKvakun_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


