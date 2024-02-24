#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xC9 - 0x98)
// BlueprintGeneratedClass BTS_CheckForVampirePheromone.BTS_CheckForVampirePheromone_C
class UBTS_CheckForVampirePheromone_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                PlayerHasVampirePheremones;                        // 0xA0(0x28)(Edit, BlueprintVisible)
	bool                                         PlayerPreviouslyHadPheremone;                      // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTS_CheckForVampirePheromone_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_CheckForVampirePheromone(int32 EntryPoint, class UBlackboardComponent* CallFunc_GetOwnersBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AVampire_EnemyChar_C* K2Node_DynamicCast_AsVampire_Enemy_Char, bool K2Node_DynamicCast_bSuccess_1);
};

}


