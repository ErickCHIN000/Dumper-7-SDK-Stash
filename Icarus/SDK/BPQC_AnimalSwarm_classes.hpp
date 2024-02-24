#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x164 - 0xB0)
// BlueprintGeneratedClass BPQC_AnimalSwarm.BPQC_AnimalSwarm_C
class UBPQC_AnimalSwarm_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TimeBetweenSpawns;                                 // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenSpawnsMultiplier;                       // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxCreatures;                                      // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Creature;                                          // 0xC4(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_IcarusNPCGOAPCharacter_C*>  NPCs;                                              // 0xE0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FRandomStream                         Random_Stream;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	class AActor*                                Target;                                            // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CreatureKilled;                                    // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               Item;                                              // 0x110(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Player_Max_Number_Scaling;                         // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalCreaturesPerPlayer;                      // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Hard_Creature_Limit;                               // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAISetupRowHandle>             Creatures;                                         // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                SpawnTarget;                                       // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPlayerDistance;                                 // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDistance;                                       // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDistance;                                       // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spacing;                                           // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             QueryTemplate;                                     // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LevelBonus;                                        // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPQC_AnimalSwarm_C* GetDefaultObj();

	void SetLevelBonus(int32 LevelBonus);
	void SetTimeBetweenSpawnsMultiplier(float TimeBetweenSpawnsMultiplier, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	void Configure_Distances(float MinPlayerDistance, float MinDistance, float MaxDistance, float Spacing, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2);
	void UpdateSpawnTarget(TArray<class AActor*>& SpawnTargets, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void Get_Creature(struct FAISetupRowHandle* Creature, const struct FAISetupRowHandle& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex);
	void SetupMultiCreature(float TimeBetweenSpawns, int32 MaxCreatures, TArray<struct FAISetupRowHandle>& Creature);
	void SetupMultiplayerScaling(bool Player_Max_Number_Scaling, float AdditionalCreaturesPerPlayer, int32 HardLimit);
	void GetMaxCreatures(int32* ScaledNumber, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	bool CanSpawn(const struct FAISetupRowHandle& CallFunc_Get_Creature_Creature, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateTarget(class AActor* Target);
	void Setup(float TimeBetweenSpawns, int32 MaxCreatures, const struct FAISetupRowHandle& Creature, int32 CallFunc_Array_Add_ReturnValue);
	void AngerNPC(class AIcarusNPCGOAPCharacter* NPC, bool CallFunc_UpdateMovementState_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void EQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void OnActorDeath(class UActorState* ActorState);
	void SpawnCreature();
	void OnEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPQC_AnimalSwarm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_DeltaSeconds, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UActorState* K2Node_CustomEvent_ActorState, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FEpicCreaturesRowHandle& Temp_struct_Variable, class ABP_IcarusNPCGOAPCharacter_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CanSpawn_ReturnValue, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GenerateLevelFromLocation_Level, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetMaxCreatures_ScaledNumber, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FAISetupRowHandle& CallFunc_Get_Creature_Creature, class AActor* CallFunc_SpawnNewAI_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue);
	void CreatureKilled__DelegateSignature();
};

}


