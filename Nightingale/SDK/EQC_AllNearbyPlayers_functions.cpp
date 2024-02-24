#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EQC_AllNearbyPlayers.EQC_AllNearbyPlayers_C
// (None)

class UClass* UEQC_AllNearbyPlayers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EQC_AllNearbyPlayers_C");

	return Clss;
}


// EQC_AllNearbyPlayers_C EQC_AllNearbyPlayers.Default__EQC_AllNearbyPlayers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEQC_AllNearbyPlayers_C* UEQC_AllNearbyPlayers_C::GetDefaultObj()
{
	static class UEQC_AllNearbyPlayers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEQC_AllNearbyPlayers_C*>(UEQC_AllNearbyPlayers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EQC_AllNearbyPlayers.EQC_AllNearbyPlayers_C.ProvideActorsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm)
// TArray<class AActor*>              PlayerList                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIC_CreatureBase_C*         K2Node_DynamicCast_AsAIC_Creature_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetPerceivedPlayers_PlayerList                          (ReferenceParm)

void UEQC_AllNearbyPlayers_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, const TArray<class AActor*>& PlayerList, class AAIController* CallFunc_GetAIController_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetPerceivedPlayers_PlayerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EQC_AllNearbyPlayers_C", "ProvideActorsSet");

	Params::UEQC_AllNearbyPlayers_C_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.PlayerList = PlayerList;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIC_Creature_Base = K2Node_DynamicCast_AsAIC_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPerceivedPlayers_PlayerList = CallFunc_GetPerceivedPlayers_PlayerList;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}

}


