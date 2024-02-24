#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2B0 - 0x220)
// BlueprintGeneratedClass NewEnemySpawner.NewEnemySpawner_C
class ANewEnemySpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BoxExtentX;                                        // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BoxExtentY;                                        // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BoxExtentZ;                                        // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2E27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APawn>                   ClassToSpawn;                                      // 0x250(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SpawnRandomXYDist;                                 // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseFloorAsMax;                                     // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2E2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxToSpawn;                                        // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseThroughWallMat_;                                // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTree*                         EnemyBT;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HasSpawnedEnemy;                                   // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         CanBeTriggered_;                                   // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         SpawnNow_;                                         // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2E45[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 LastEnemySpawned;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANewEnemySpawner_C* GetDefaultObj();

	class APawn* SpawnEnemy(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPawn, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APawn* CallFunc_SpawnAIFromClass_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ClientUpdateEnemyMat(class APawn* Pawn);
	void ExecuteUbergraph_NewEnemySpawner(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_HasAuthority_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Clamp_ReturnValue, class APawn* K2Node_CustomEvent_Pawn, int32 K2Node_Select_Default, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_SpawnEnemy_ReturnValue, class APawn* CallFunc_SpawnEnemy_ReturnValue_1);
	void HasSpawnedEnemy__DelegateSignature();
};

}


