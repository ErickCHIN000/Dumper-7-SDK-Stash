#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x288 - 0x98)
// BlueprintGeneratedClass BTS_BaseSyncService.BTS_BaseSyncService_C
class UBTS_BaseSyncService_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                PatrolPoint;                                       // 0xA0(0x28)(Edit, BlueprintVisible)
	bool                                         Initialized;                                       // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                State;                                             // 0xD0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                SpawnPoint;                                        // 0xF8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                LastNoiseLocation;                                 // 0x120(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PreviousState;                                     // 0x148(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                GroupMovingLocation;                               // 0x170(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                BehaviorType;                                      // 0x198(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                AggroEmotionReady;                                 // 0x1C0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                EvadePoint;                                        // 0x1E8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                SlowProjectileReady;                               // 0x210(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                MovingLocation;                                    // 0x238(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                MovingDuration;                                    // 0x260(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTS_BaseSyncService_C* GetDefaultObj();

	void SS_SetMovingDuration(float Value);
	void SS_SetMovingLocation(const struct FVector& Value);
	void SS_SetIsHitted(bool bIsHitted);
	void SS_SetSlowProjectileReady(bool Value);
	void SS_SetEvadePoint(const struct FVector& EvadePoint);
	void SS_SetAggroEmotionReady(bool Value);
	void SS_SetBehaviorType(enum class EAIBehaviorType BehaviorType);
	void SS_SetGroupMovingLocation(const struct FVector& GroupMovingLocation);
	void SS_SyncLastNoiseLocation(const struct FVector& Location);
	void SS_SetSpawnPoint(const struct FVector& SpawnPoint);
	void SS_SetState(enum class EAIStates State, enum class EAIStates PreviousState);
	void SS_SetPatrolPoint(const struct FVector& PatrolPoint);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ExecuteUbergraph_BTS_BaseSyncService(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetSyncService_Result);
};

}


