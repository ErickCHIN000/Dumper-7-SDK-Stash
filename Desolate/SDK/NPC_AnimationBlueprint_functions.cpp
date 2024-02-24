#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass NPC_AnimationBlueprint.NPC_AnimationBlueprint_C
// (None)

class UClass* UNPC_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_AnimationBlueprint_C");

	return Clss;
}


// NPC_AnimationBlueprint_C NPC_AnimationBlueprint.Default__NPC_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPC_AnimationBlueprint_C* UNPC_AnimationBlueprint_C::GetDefaultObj()
{
	static class UNPC_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPC_AnimationBlueprint_C*>(UNPC_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNPC_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "AnimGraph");

	Params::UNPC_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.UpdateType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENPC_Type               Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPC_AnimationBlueprint_C::UpdateType(enum class ENPC_Type Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "UpdateType");

	Params::UNPC_AnimationBlueprint_C_UpdateType_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_310C733D4CFC0772EB6FB896F75E0A98
// (BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_310C733D4CFC0772EB6FB896F75E0A98()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_310C733D4CFC0772EB6FB896F75E0A98");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_ModifyBone_785B24794C9AFD49A9CCF3BE1813AA54
// (BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_ModifyBone_785B24794C9AFD49A9CCF3BE1813AA54()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_ModifyBone_785B24794C9AFD49A9CCF3BE1813AA54");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_B6F899494D9AA580AD0359B755698297
// (BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_B6F899494D9AA580AD0359B755698297()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_B6F899494D9AA580AD0359B755698297");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_49D2A615418BEAF908CBEAAE8D275CF5
// (BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_49D2A615418BEAF908CBEAAE8D275CF5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_49D2A615418BEAF908CBEAAE8D275CF5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C7DE22DF4387496DEC4C60991401F73D
// (BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C7DE22DF4387496DEC4C60991401F73D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C7DE22DF4387496DEC4C60991401F73D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_73A876564F3433E7AFF1919585EE956F
// (BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_73A876564F3433E7AFF1919585EE956F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimationBlueprint_AnimGraphNode_TransitionResult_73A876564F3433E7AFF1919585EE956F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UNPC_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.AnimNotify_StartGuitarSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_AnimationBlueprint_C::AnimNotify_StartGuitarSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "AnimNotify_StartGuitarSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimationBlueprint.NPC_AnimationBlueprint_C.ExecuteUbergraph_NPC_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANPC_Character_C*            K2Node_DynamicCast_AsNPC_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_AnimationBlueprint_C::ExecuteUbergraph_NPC_AnimationBlueprint(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float K2Node_Event_DeltaTimeX, class ANPC_Character_C* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimationBlueprint_C", "ExecuteUbergraph_NPC_AnimationBlueprint");

	Params::UNPC_AnimationBlueprint_C_ExecuteUbergraph_NPC_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsNPC_Character = K2Node_DynamicCast_AsNPC_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


