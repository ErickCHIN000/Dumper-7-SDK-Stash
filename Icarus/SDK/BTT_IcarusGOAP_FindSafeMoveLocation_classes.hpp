#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C
class UBTT_IcarusGOAP_FindSafeMoveLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                LocationKey;                                       // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_FindSafeMoveLocation_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_OwnerActor, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
};

}


