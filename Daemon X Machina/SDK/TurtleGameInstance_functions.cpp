#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TurtleGameInstance.TurtleGameInstance_C
// (None)

class UClass* UTurtleGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TurtleGameInstance_C");

	return Clss;
}


// TurtleGameInstance_C TurtleGameInstance.Default__TurtleGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTurtleGameInstance_C* UTurtleGameInstance_C::GetDefaultObj()
{
	static class UTurtleGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTurtleGameInstance_C*>(UTurtleGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TurtleGameInstance.TurtleGameInstance_C.OnFailure_6100F44C45746409861753973FE8AC6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTurtleGameInstance_C::OnFailure_6100F44C45746409861753973FE8AC6C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "OnFailure_6100F44C45746409861753973FE8AC6C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TurtleGameInstance.TurtleGameInstance_C.OnSuccess_6100F44C45746409861753973FE8AC6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTurtleGameInstance_C::OnSuccess_6100F44C45746409861753973FE8AC6C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "OnSuccess_6100F44C45746409861753973FE8AC6C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TurtleGameInstance.TurtleGameInstance_C.AddInitializePartsToInventoryBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTurtleGameInstance_C::AddInitializePartsToInventoryBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "AddInitializePartsToInventoryBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TurtleGameInstance.TurtleGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UTurtleGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TurtleGameInstance.TurtleGameInstance_C.TestDestroySession
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTurtleGameInstance_C::TestDestroySession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "TestDestroySession");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TurtleGameInstance.TurtleGameInstance_C.TestServerTravel
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTurtleGameInstance_C::TestServerTravel(class FName Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "TestServerTravel");

	Params::UTurtleGameInstance_C_TestServerTravel_Params Parms{};

	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TurtleGameInstance.TurtleGameInstance_C.OnRespawnOuterBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLCharacterCommon*         RespawnOuter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTurtleGameInstance_C::OnRespawnOuterBP(class ATTLCharacterCommon* RespawnOuter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "OnRespawnOuterBP");

	Params::UTurtleGameInstance_C_OnRespawnOuterBP_Params Parms{};

	Parms.RespawnOuter = RespawnOuter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TurtleGameInstance.TurtleGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTurtleGameInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "HandleNetworkError");

	Params::UTurtleGameInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TurtleGameInstance.TurtleGameInstance_C.NetworkErrorPvpHost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTurtleGameInstance_C::NetworkErrorPvpHost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "NetworkErrorPvpHost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TurtleGameInstance.TurtleGameInstance_C.OnClosedErrorPopUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTurtleGameInstance_C::OnClosedErrorPopUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "OnClosedErrorPopUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TurtleGameInstance.TurtleGameInstance_C.HandleTtlNetworkFailure
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLNetwarkFailureType  FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTurtleGameInstance_C::HandleTtlNetworkFailure(enum class ETTLNetwarkFailureType FailureType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "HandleTtlNetworkFailure");

	Params::UTurtleGameInstance_C_HandleTtlNetworkFailure_Params Parms{};

	Parms.FailureType = FailureType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TurtleGameInstance.TurtleGameInstance_C.ExecuteUbergraph_TurtleGameInstance
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LoadGameData_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Map                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         K2Node_Event_respawnOuter                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ENetworkFailure         K2Node_Event_FailureType1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ConvertTtlNetworkFailureType_outConvertSuccess          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLNetwarkFailureType  CallFunc_ConvertTtlNetworkFailureType_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckHandleNetworkError_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOkPopUp_C*                  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadOnlineData_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTextFromStringTable_ReturnValue                      (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOkPopUp_C*                  CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLNetwarkFailureType  K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMultiplayErrorPopupTextFromTtl_ReturnValue           (None)
// bool                               CallFunc_IsSpawnErrorPopupEnable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTurtleGameInstance_C::ExecuteUbergraph_TurtleGameInstance(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_LoadGameData_ReturnValue, class FName K2Node_CustomEvent_Map, class ATTLCharacterCommon* K2Node_Event_respawnOuter, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, enum class ENetworkFailure K2Node_Event_FailureType1, bool K2Node_Event_bIsServer, bool CallFunc_ConvertTtlNetworkFailureType_outConvertSuccess, enum class ETTLNetwarkFailureType CallFunc_ConvertTtlNetworkFailureType_ReturnValue, bool CallFunc_CheckHandleNetworkError_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AOkPopUp_C* CallFunc_FinishSpawningActor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LoadOnlineData_ReturnValue, bool Temp_bool_IsClosed_Variable, class FText CallFunc_GetTextFromStringTable_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_IsClosed_Variable1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class AOkPopUp_C* CallFunc_FinishSpawningActor_ReturnValue1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, enum class ETTLNetwarkFailureType K2Node_Event_FailureType, class FText CallFunc_GetMultiplayErrorPopupTextFromTtl_ReturnValue, bool CallFunc_IsSpawnErrorPopupEnable_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurtleGameInstance_C", "ExecuteUbergraph_TurtleGameInstance");

	Params::UTurtleGameInstance_C_ExecuteUbergraph_TurtleGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_LoadGameData_ReturnValue = CallFunc_LoadGameData_ReturnValue;
	Parms.K2Node_CustomEvent_Map = K2Node_CustomEvent_Map;
	Parms.K2Node_Event_respawnOuter = K2Node_Event_respawnOuter;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_FailureType1 = K2Node_Event_FailureType1;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_ConvertTtlNetworkFailureType_outConvertSuccess = CallFunc_ConvertTtlNetworkFailureType_outConvertSuccess;
	Parms.CallFunc_ConvertTtlNetworkFailureType_ReturnValue = CallFunc_ConvertTtlNetworkFailureType_ReturnValue;
	Parms.CallFunc_CheckHandleNetworkError_ReturnValue = CallFunc_CheckHandleNetworkError_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadOnlineData_ReturnValue = CallFunc_LoadOnlineData_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetTextFromStringTable_ReturnValue = CallFunc_GetTextFromStringTable_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue1 = CallFunc_SetGamePaused_ReturnValue1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.CallFunc_GetMultiplayErrorPopupTextFromTtl_ReturnValue = CallFunc_GetMultiplayErrorPopupTextFromTtl_ReturnValue;
	Parms.CallFunc_IsSpawnErrorPopupEnable_ReturnValue = CallFunc_IsSpawnErrorPopupEnable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


