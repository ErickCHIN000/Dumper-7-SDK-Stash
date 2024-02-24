#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTS_MakeInvulnerable.BTS_MakeInvulnerable_C
// (None)

class UClass* UBTS_MakeInvulnerable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTS_MakeInvulnerable_C");

	return Clss;
}


// BTS_MakeInvulnerable_C BTS_MakeInvulnerable.Default__BTS_MakeInvulnerable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTS_MakeInvulnerable_C* UBTS_MakeInvulnerable_C::GetDefaultObj()
{
	static class UBTS_MakeInvulnerable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTS_MakeInvulnerable_C*>(UBTS_MakeInvulnerable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTS_MakeInvulnerable.BTS_MakeInvulnerable_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_MakeInvulnerable_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_MakeInvulnerable_C", "ReceiveActivationAI");

	Params::UBTS_MakeInvulnerable_C_ReceiveActivationAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_MakeInvulnerable.BTS_MakeInvulnerable_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_MakeInvulnerable_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_MakeInvulnerable_C", "ReceiveDeactivationAI");

	Params::UBTS_MakeInvulnerable_C_ReceiveDeactivationAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_MakeInvulnerable.BTS_MakeInvulnerable_C.ExecuteUbergraph_BTS_MakeInvulnerable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FStatsEnum, int32>     K2Node_MakeMap_Map                                               (ConstParm)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISpawnableAI>K2Node_DynamicCast_AsSpawnable_AI                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISpawnableAI>K2Node_DynamicCast_AsSpawnable_AI_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusStatContainer*        CallFunc_GetAIStatContainer_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetAIStatContainer_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveStats_BP_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTS_MakeInvulnerable_C::ExecuteUbergraph_BTS_MakeInvulnerable(int32 EntryPoint, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI_1, bool K2Node_DynamicCast_bSuccess_1, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AddStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_MakeInvulnerable_C", "ExecuteUbergraph_BTS_MakeInvulnerable");

	Params::UBTS_MakeInvulnerable_C_ExecuteUbergraph_BTS_MakeInvulnerable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsSpawnable_AI = K2Node_DynamicCast_AsSpawnable_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSpawnable_AI_1 = K2Node_DynamicCast_AsSpawnable_AI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAIStatContainer_ReturnValue = CallFunc_GetAIStatContainer_ReturnValue;
	Parms.CallFunc_GetAIStatContainer_ReturnValue_1 = CallFunc_GetAIStatContainer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RemoveStats_BP_ReturnValue = CallFunc_RemoveStats_BP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


