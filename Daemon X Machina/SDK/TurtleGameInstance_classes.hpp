#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB38 - 0xB30)
// BlueprintGeneratedClass TurtleGameInstance.TurtleGameInstance_C
class UTurtleGameInstance_C : public UTTLGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB30(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTurtleGameInstance_C* GetDefaultObj();

	void OnFailure_6100F44C45746409861753973FE8AC6C();
	void OnSuccess_6100F44C45746409861753973FE8AC6C();
	void AddInitializePartsToInventoryBP();
	void ReceiveInit();
	void TestDestroySession();
	void TestServerTravel(class FName Map);
	void OnRespawnOuterBP(class ATTLCharacterCommon* RespawnOuter);
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void NetworkErrorPvpHost();
	void OnClosedErrorPopUp();
	void HandleTtlNetworkFailure(enum class ETTLNetwarkFailureType FailureType);
	void ExecuteUbergraph_TurtleGameInstance(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_LoadGameData_ReturnValue, class FName K2Node_CustomEvent_Map, class ATTLCharacterCommon* K2Node_Event_respawnOuter, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, enum class ENetworkFailure K2Node_Event_FailureType1, bool K2Node_Event_bIsServer, bool CallFunc_ConvertTtlNetworkFailureType_outConvertSuccess, enum class ETTLNetwarkFailureType CallFunc_ConvertTtlNetworkFailureType_ReturnValue, bool CallFunc_CheckHandleNetworkError_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AOkPopUp_C* CallFunc_FinishSpawningActor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LoadOnlineData_ReturnValue, bool Temp_bool_IsClosed_Variable, class FText CallFunc_GetTextFromStringTable_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_IsClosed_Variable1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class AOkPopUp_C* CallFunc_FinishSpawningActor_ReturnValue1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, enum class ETTLNetwarkFailureType K2Node_Event_FailureType, class FText CallFunc_GetMultiplayErrorPopupTextFromTtl_ReturnValue, bool CallFunc_IsSpawnErrorPopupEnable_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}


