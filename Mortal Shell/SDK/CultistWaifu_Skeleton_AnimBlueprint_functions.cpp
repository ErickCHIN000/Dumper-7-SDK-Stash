#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C
// (None)

class UClass* UCultistWaifu_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CultistWaifu_Skeleton_AnimBlueprint_C");

	return Clss;
}


// CultistWaifu_Skeleton_AnimBlueprint_C CultistWaifu_Skeleton_AnimBlueprint.Default__CultistWaifu_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCultistWaifu_Skeleton_AnimBlueprint_C* UCultistWaifu_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UCultistWaifu_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCultistWaifu_Skeleton_AnimBlueprint_C*>(UCultistWaifu_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCultistWaifu_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CultistWaifu_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UCultistWaifu_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C.GetPlayerLutePlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCultistWaifu_Skeleton_AnimBlueprint_C::GetPlayerLutePlaying(enum class Enum_LuteType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Fraction_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class FName K2Node_Select_Default, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CultistWaifu_Skeleton_AnimBlueprint_C", "GetPlayerLutePlaying");

	Params::UCultistWaifu_Skeleton_AnimBlueprint_C_GetPlayerLutePlaying_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Fraction_ReturnValue_1 = CallFunc_Fraction_ReturnValue_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_2A5C663C4B9DC195923432A02F0499AE
// (BlueprintEvent)
// Parameters:

void UCultistWaifu_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_2A5C663C4B9DC195923432A02F0499AE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CultistWaifu_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_2A5C663C4B9DC195923432A02F0499AE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_755B41614E3146E559EBE8947C43E3E4
// (BlueprintEvent)
// Parameters:

void UCultistWaifu_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_755B41614E3146E559EBE8947C43E3E4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CultistWaifu_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_755B41614E3146E559EBE8947C43E3E4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCultistWaifu_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CultistWaifu_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UCultistWaifu_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_94B066324275D48387F8479C7BDFDED9
// (BlueprintEvent)
// Parameters:

void UCultistWaifu_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_94B066324275D48387F8479C7BDFDED9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CultistWaifu_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_94B066324275D48387F8479C7BDFDED9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C.ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACorruptedWaifuNPC_C*        K2Node_DynamicCast_AsCorrupted_Waifu_NPC                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWaifuNPC_C*                 K2Node_DynamicCast_AsWaifu_NPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCultistWaifu_Skeleton_AnimBlueprint_C::ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, float K2Node_Select_Default, class AActor* CallFunc_GetOwningActor_ReturnValue, class ACorruptedWaifuNPC_C* K2Node_DynamicCast_AsCorrupted_Waifu_NPC, bool K2Node_DynamicCast_bSuccess, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CultistWaifu_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint");

	Params::UCultistWaifu_Skeleton_AnimBlueprint_C_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsCorrupted_Waifu_NPC = K2Node_DynamicCast_AsCorrupted_Waifu_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWaifu_NPC = K2Node_DynamicCast_AsWaifu_NPC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_VInterpTo_ReturnValue_1 = CallFunc_VInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


