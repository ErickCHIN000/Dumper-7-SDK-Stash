#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x11C0 - 0x10F8)
// BlueprintGeneratedClass ExplodingFrogCharacter.ExplodingFrogCharacter_C
class AExplodingFrogCharacter_C : public AEnemyCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      HitCollisionSphere;                                // 0x1100(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Aggro_Radius;                                      // 0x1108(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_TurnToPoint__Direction_377C910A46EFCB85E25FB08A5D56B9BB; // 0x1110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_TurnToPoint;                              // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FadeOut_Opacity_B02F959B4C340F28830FC68ADE193B6B; // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_FadeOut__Direction_B02F959B4C340F28830FC68ADE193B6B; // 0x1124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_224D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_FadeOut;                                  // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FadeIn_Alpha_Opacity_6BD73847421D9C35E1CA56B72F186A2D; // 0x1130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_FadeIn__Direction_6BD73847421D9C35E1CA56B72F186A2D; // 0x1134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2254[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_FadeIn;                                   // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_TurnToPlayer__Direction_F978483344487D4FE67E89A507E11108; // 0x1140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_225C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_TurnToPlayer;                             // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFrogAngry;                                       // 0x1150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2264[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATriggerSphere*                        TetherTrigger;                                     // 0x1158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnLoc;                                          // 0x1160(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2273[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FrogReturnChecker;                                 // 0x1170(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         FrogGoingHome;                                     // 0x1178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AggroTriggerEnabled;                               // 0x1179(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Patrol_Enabled;                                    // 0x117A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Patrol_ClosedLoop;                                 // 0x117B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Patrol_Active;                                     // 0x117C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2291[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Patrol_Points;                                     // 0x1180(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Patrol_IndexMax;                                   // 0x1190(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Patrol_Index;                                      // 0x1194(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Patrol_WaitTimer;                                  // 0x1198(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Patrol_Direction;                                  // 0x11A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Patrol_CurrentPoint;                               // 0x11A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Patrol_CurrentLoc;                                 // 0x11B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x11BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AExplodingFrogCharacter_C* GetDefaultObj();

	void ApplyDamage(struct FHitResult& Hit, class AZero_Base_C* Local_0Base, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue_1);
	void Patrol_Stop(bool* StoppedPatrolling_);
	void Frog_FadeOut(float Alpha);
	void AggroPlayerOnOverlap(class AActor* Actor, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Frog_FadeIn(float Alpha, float Local_Alpha, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void FacePlayerOnSpawn(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void Sound_FrogExplode(float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void Sound_FrogSpawn(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	void Sound_FrogAggro(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	void Sound_FrogJump(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	struct FRotator GetTargerPointRot(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue);
	struct FRotator GetTargetPlayerRot(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue);
	void UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void Timeline_TurnToPlayer__FinishedFunc();
	void Timeline_TurnToPlayer__UpdateFunc();
	void Timeline_FadeOut__FinishedFunc();
	void Timeline_FadeOut__UpdateFunc();
	void Timeline_FadeIn__FinishedFunc();
	void Timeline_FadeIn__UpdateFunc();
	void Timeline_TurnToPoint__FinishedFunc();
	void Timeline_TurnToPoint__UpdateFunc();
	void OnNotifyEnd_DFF6A99E4FB75FF2C373F197378844EC(class FName NotifyName);
	void OnNotifyBegin_DFF6A99E4FB75FF2C373F197378844EC(class FName NotifyName);
	void OnInterrupted_DFF6A99E4FB75FF2C373F197378844EC(class FName NotifyName);
	void OnBlendOut_DFF6A99E4FB75FF2C373F197378844EC(class FName NotifyName);
	void OnCompleted_DFF6A99E4FB75FF2C373F197378844EC(class FName NotifyName);
	void OnNotifyEnd_E82D10524237A0D38B9C67B84217C08B(class FName NotifyName);
	void OnNotifyBegin_E82D10524237A0D38B9C67B84217C08B(class FName NotifyName);
	void OnInterrupted_E82D10524237A0D38B9C67B84217C08B(class FName NotifyName);
	void OnBlendOut_E82D10524237A0D38B9C67B84217C08B(class FName NotifyName);
	void OnCompleted_E82D10524237A0D38B9C67B84217C08B(class FName NotifyName);
	void OnNotifyEnd_639A9BDD43741D8102D6EFBAFB5106BA(class FName NotifyName);
	void OnNotifyBegin_639A9BDD43741D8102D6EFBAFB5106BA(class FName NotifyName);
	void OnInterrupted_639A9BDD43741D8102D6EFBAFB5106BA(class FName NotifyName);
	void OnBlendOut_639A9BDD43741D8102D6EFBAFB5106BA(class FName NotifyName);
	void OnCompleted_639A9BDD43741D8102D6EFBAFB5106BA(class FName NotifyName);
	void OnNotifyEnd_64CFE266481A4B2525097BB073417A40(class FName NotifyName);
	void OnNotifyBegin_64CFE266481A4B2525097BB073417A40(class FName NotifyName);
	void OnInterrupted_64CFE266481A4B2525097BB073417A40(class FName NotifyName);
	void OnBlendOut_64CFE266481A4B2525097BB073417A40(class FName NotifyName);
	void OnCompleted_64CFE266481A4B2525097BB073417A40(class FName NotifyName);
	void Explode();
	void FadeOut();
	void ApplyDamageRadius();
	void ReceiveBeginPlay();
	void SendBackTheFrog(class AActor* OverlappedActor, class AActor* OtherActor);
	void CheckForResetPosition();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void DeadFrog();
	void FrogReturn();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void SpawnedByGorf();
	void Frog_TurnToPlayer();
	void Frog_JumpMontage();
	void FrogAggro();
	void SplinePatrolling();
	void NextPatrolPoint();
	void ReprisePatrolling();
	void BndEvt__Aggro_Radius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Frog_JumpToPoint();
	void GetNextPatrolPoint();
	void Frog_JumpToFirstPoint();
	void Frog_TurnToPoint();
	void Frog_TurnToPoint_Stop();
	void ExecuteUbergraph_ExplodingFrogCharacter(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FRotator& CallFunc_GetTargetPlayerRot_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_Array_Get_Item_1, const struct FRotator& CallFunc_GetTargerPointRot_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_K2_SetActorRotation_ReturnValue_1, bool CallFunc_Patrol_Stop_StoppedPatrolling_);
};

}


