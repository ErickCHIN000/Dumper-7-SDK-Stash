#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass BTS_MakeInvulnerable.BTS_MakeInvulnerable_C
class UBTS_MakeInvulnerable_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTS_MakeInvulnerable_C* GetDefaultObj();

	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTS_MakeInvulnerable(int32 EntryPoint, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI_1, bool K2Node_DynamicCast_bSuccess_1, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AddStats_BP_ReturnValue);
};

}


