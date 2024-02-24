#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_RecentlyBlockedPathLocations.EnvQueryContext_RecentlyBlockedPathLocations_C
// (None)

class UClass* UEnvQueryContext_RecentlyBlockedPathLocations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_RecentlyBlockedPathLocations_C");

	return Clss;
}


// EnvQueryContext_RecentlyBlockedPathLocations_C EnvQueryContext_RecentlyBlockedPathLocations.Default__EnvQueryContext_RecentlyBlockedPathLocations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_RecentlyBlockedPathLocations_C* UEnvQueryContext_RecentlyBlockedPathLocations_C::GetDefaultObj()
{
	static class UEnvQueryContext_RecentlyBlockedPathLocations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_RecentlyBlockedPathLocations_C*>(UEnvQueryContext_RecentlyBlockedPathLocations_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvQueryContext_RecentlyBlockedPathLocations.EnvQueryContext_RecentlyBlockedPathLocations_C.ProvideLocationsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ResultingLocationSet                                             (Parm, OutParm)
// class UObject*                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCController*        K2Node_DynamicCast_AsIcarus_NPCController                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetBlockedPathLocations_BlockedLocations                (ReferenceParm)
// TArray<struct FVector>             K2Node_MakeArray_Array                                           (ReferenceParm)

void UEnvQueryContext_RecentlyBlockedPathLocations_C::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, class UObject* Temp_wildcard_Variable, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class AIcarusNPCController* K2Node_DynamicCast_AsIcarus_NPCController, bool K2Node_DynamicCast_bSuccess_1, class AAIController* CallFunc_GetAIController_ReturnValue, TArray<struct FVector>& CallFunc_GetBlockedPathLocations_BlockedLocations, TArray<struct FVector>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_RecentlyBlockedPathLocations_C", "ProvideLocationsSet");

	Params::UEnvQueryContext_RecentlyBlockedPathLocations_C_ProvideLocationsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_NPCController = K2Node_DynamicCast_AsIcarus_NPCController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_GetBlockedPathLocations_BlockedLocations = CallFunc_GetBlockedPathLocations_BlockedLocations;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = std::move(Parms.ResultingLocationSet);

}

}


