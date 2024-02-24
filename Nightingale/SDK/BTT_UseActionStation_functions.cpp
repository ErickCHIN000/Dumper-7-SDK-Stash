#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_UseActionStation.BTT_UseActionStation_C
// (None)

class UClass* UBTT_UseActionStation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_UseActionStation_C");

	return Clss;
}


// BTT_UseActionStation_C BTT_UseActionStation.Default__BTT_UseActionStation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_UseActionStation_C* UBTT_UseActionStation_C::GetDefaultObj()
{
	static class UBTT_UseActionStation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_UseActionStation_C*>(UBTT_UseActionStation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_UseActionStation.BTT_UseActionStation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_UseActionStation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_UseActionStation_C", "ReceiveExecuteAI");

	Params::UBTT_UseActionStation_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_UseActionStation.BTT_UseActionStation_C.FinishedActionStation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyGameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBTT_UseActionStation_C::FinishedActionStation(const struct FGameplayTag& NotifyGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_UseActionStation_C", "FinishedActionStation");

	Params::UBTT_UseActionStation_C_FinishedActionStation_Params Parms{};

	Parms.NotifyGameplayTag = NotifyGameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_UseActionStation.BTT_UseActionStation_C.FinishedInterupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyGameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBTT_UseActionStation_C::FinishedInterupt(const struct FGameplayTag& NotifyGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_UseActionStation_C", "FinishedInterupt");

	Params::UBTT_UseActionStation_C_FinishedInterupt_Params Parms{};

	Parms.NotifyGameplayTag = NotifyGameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_UseActionStation.BTT_UseActionStation_C.ExecuteUbergraph_BTT_UseActionStation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXActionStationComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyGameplayTag_1                           (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyGameplayTag                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActionStationUserForCharacter_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionStationUser*          CallFunc_GetActionStationUserForCharacter_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_UseActionStation_C::ExecuteUbergraph_BTT_UseActionStation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class UNWXActionStationComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyGameplayTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyGameplayTag, bool CallFunc_HasActionStationUserForCharacter_ReturnValue, class UActionStationUser* CallFunc_GetActionStationUserForCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_UseActionStation_C", "ExecuteUbergraph_BTT_UseActionStation");

	Params::UBTT_UseActionStation_C_ExecuteUbergraph_BTT_UseActionStation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyGameplayTag_1 = K2Node_CustomEvent_NotifyGameplayTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyGameplayTag = K2Node_CustomEvent_NotifyGameplayTag;
	Parms.CallFunc_HasActionStationUserForCharacter_ReturnValue = CallFunc_HasActionStationUserForCharacter_ReturnValue;
	Parms.CallFunc_GetActionStationUserForCharacter_ReturnValue = CallFunc_GetActionStationUserForCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


