#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xF8 - 0x98)
// BlueprintGeneratedClass BTS_ApplyTemporaryStats.BTS_ApplyTemporaryStats_C
class UBTS_ApplyTemporaryStats_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        StatUID;                                           // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FStatsEnum, int32>               ActionStats;                                       // 0xA8(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTS_ApplyTemporaryStats_C* GetDefaultObj();

	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTS_ApplyTemporaryStats(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI_1, bool K2Node_DynamicCast_bSuccess_1, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IModifiableInterface> K2Node_DynamicCast_AsModifiable_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_GetNextUID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue);
};

}


