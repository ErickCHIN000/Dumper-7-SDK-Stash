#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C
// (None)

class UClass* USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C");

	return Clss;
}


// SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.Default__SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C* USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C*>(USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_Needler_Character_C* K2Node_DynamicCast_AsBP_NPC_Needler_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_NPC_Needler_Character_C* K2Node_DynamicCast_AsBP_NPC_Needler_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint");

	Params::USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPC_Needler_Character = K2Node_DynamicCast_AsBP_NPC_Needler_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


