#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPMotivation_EmergeFromRetreat.BP_IcarusGOAPMotivation_EmergeFromRetreat_C
// (None)

class UClass* UBP_IcarusGOAPMotivation_EmergeFromRetreat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPMotivation_EmergeFromRetreat_C");

	return Clss;
}


// BP_IcarusGOAPMotivation_EmergeFromRetreat_C BP_IcarusGOAPMotivation_EmergeFromRetreat.Default__BP_IcarusGOAPMotivation_EmergeFromRetreat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPMotivation_EmergeFromRetreat_C* UBP_IcarusGOAPMotivation_EmergeFromRetreat_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPMotivation_EmergeFromRetreat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPMotivation_EmergeFromRetreat_C*>(UBP_IcarusGOAPMotivation_EmergeFromRetreat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPMotivation_EmergeFromRetreat.BP_IcarusGOAPMotivation_EmergeFromRetreat_C.UpdateCost
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              RetreatThreshold                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LastRetreatHealth                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RetreatLocationKey                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPMotivation_EmergeFromRetreat_C::UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, int32 RetreatThreshold, float LastRetreatHealth, class FName RetreatLocationKey, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_EmergeFromRetreat_C", "UpdateCost");

	Params::UBP_IcarusGOAPMotivation_EmergeFromRetreat_C_UpdateCost_Params Parms{};

	Parms.Delta = Delta;
	Parms.Controller = Controller;
	Parms.RetreatThreshold = RetreatThreshold;
	Parms.LastRetreatHealth = LastRetreatHealth;
	Parms.RetreatLocationKey = RetreatLocationKey;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


