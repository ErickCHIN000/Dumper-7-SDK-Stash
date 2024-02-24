#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x6A8 - 0x588)
// BlueprintGeneratedClass BP_ExplodingObject.BP_ExplodingObject_C
class ABP_ExplodingObject_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      AttachedMeshBase;                                  // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      Socket_Loot;                                       // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxActionComponent*                   GbxAction;                                         // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      Socket_Damage;                                     // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakDamageComponent*                   OakDamage;                                         // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URigidBodyComponent*                   SM_ExplodingObject;                                // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetableComponent*                  Targetable;                                        // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URegionBalanceStateComponent*          RegionBalanceState;                                // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxNavMeshPainterComponent*           GbxNavMeshPainter;                                 // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         NavPaintCollision;                                 // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_PostExplosion;                                  // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_Fuse;                                           // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         PhysicsSim_;                                       // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         PhysicsDetonation_;                                // 0x601(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_465D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PhysicsDetonation_ImpulseToStartFuse;              // 0x604(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Exploded;                                          // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PhysicsDetonation_ImpulseToExplode;                // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4665[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Attacker;                                          // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                FuseAudioInstance;                                 // 0x628(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DamageTypes;                                       // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_ExplodingObjectDamage        DamageType;                                        // 0x644(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ExplodingObjectState         ExplodingObjectState;                              // 0x645(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_466E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDA_ExplodingObject_C*                 ExplodingObject;                                   // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDA_ExplodingObjectPresentation_C*     Presentation;                                      // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyOnCleanup;                                  // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4674[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplodeDelay_Explosion;                            // 0x65C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplodeDelay_Puddle;                               // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplodeDelay_Cloud;                                // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplodeDelay_Loot;                                 // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ImpulseOnExplode_;                                 // 0x66C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_467C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpulseOnExplode_Force;                            // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpulseOnExplode_ForceExtra;                       // 0x674(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplodeDelay_MeshSwap;                             // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4681[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AElementalPuddle*                      Puddle;                                            // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxCondition*                         Cond_ExplodingObjectState_NewEnumerator1;          // 0x690(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGbxCondition*                         Cond_ExplodingObjectState_NewEnumerator2;          // 0x698(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGbxCondition*                         Cond_ExplodingObjectState_NewEnumerator3;          // 0x6A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ExplodingObject_C* GetDefaultObj();

	void SetSimulatePhysics(bool bNewSimulate);
	void Damaged(class UGbxDamageType* DamageType, class UDamageSource* DamageSource, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue1, float CallFunc_GetCurrentHealth_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void VisualState_ExplodedStop(bool CallFunc_IsValid_ReturnValue);
	void VisualState_ExplodedStart(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Get_DamageType(enum class Enum_ExplodingObjectDamage* DamageType);
	void VisualState_FuseStop(class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue);
	void VisualState_FuseStart(const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue);
	void OnRep_DamageType(class UDA_ExplodingObjectPresentation_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Setup_ExplodingObject_DynamicMI);
	void ThrowExplodingObject(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, const struct FVector& OptionalAdditiveVector, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UStaticMesh* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInstance* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue1);
	void Setup_RandomizeDamageType(TMap<int32, uint8> MyBitmaskLookup, int32 MyTestResult, const TArray<int32>& MyTest, enum class Enum_ExplodingObjectDamage MyDamageType, const TArray<enum class Enum_ExplodingObjectDamage>& MyDamageTypes, const TArray<enum class Enum_IO_Combat_Barrel>& MyBarrelOptions, TMap<int32, uint8> K2Node_MakeVariable_MakeVariableOutput, uint8 CallFunc_Bitmask_RandomEnum_RandomEnum, uint8 CallFunc_GetValidValue_ReturnValue, class UDA_ExplodingObjectPresentation_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void BPI_ResetHealth();
	void BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BPI_Explode();
	void BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector);
	void BPI_SetSimulatePhysics(bool PhysicsOn_);
	void BPI_StartFuse();
	void ReceiveBeginPlay();
	void __UserState_ExplodingObjectState_0(bool bFromLoad);
	void __UserState_ExplodingObjectState_1(bool bFromLoad);
	void __UserState_ExplodingObjectState_2(bool bFromLoad);
	void __UserState_ExplodingObjectState_3(bool bFromLoad);
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void Explode_Damage();
	void Explode_Puddle();
	void Explode_Cloud();
	void Explode_Loot();
	void Explode();
	void BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* WakingComponent, class FName BoneName);
	void BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* SleepingComponent, class FName BoneName);
	void BPI_SetNavPainterEnabled(bool Enabled);
	void ExecuteUbergraph_BP_ExplodingObject(int32 EntryPoint, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_ThrowVector, float K2Node_Event_Force, const struct FRotator& K2Node_Event_RotatorForSpin, float K2Node_Event_FuseSpeedScale, const struct FVector& K2Node_Event_AdditiveVector, bool K2Node_Event_PhysicsOn_, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue2, bool K2Node_UserStateEvent_bFromLoad3, bool K2Node_UserStateEvent_bFromLoad2, bool K2Node_UserStateEvent_bFromLoad1, bool K2Node_UserStateEvent_bFromLoad, bool CallFunc_HasAuthority_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue4, bool CallFunc_Greater_ByteByte_ReturnValue2, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, float K2Node_ComponentBoundEvent_Damage, class UGbxDamageType* K2Node_ComponentBoundEvent_DamageType, class UDamageSource* K2Node_ComponentBoundEvent_DamageSource, class AController* K2Node_ComponentBoundEvent_InstigatedBy, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_ComponentBoundEvent_Details, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& Temp_struct_Variable, bool CallFunc_Greater_ByteByte_ReturnValue3, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue1, bool CallFunc_Greater_ByteByte_ReturnValue4, class FName CallFunc_Conv_StringToName_ReturnValue1, const struct FHitResult& Temp_struct_Variable1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, int32 CallFunc_SpawnLootAsync_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AElementalPuddle* CallFunc_SpawnElementalPuddle_ReturnValue, bool CallFunc_HasAuthority_ReturnValue5, bool CallFunc_Greater_ByteByte_ReturnValue5, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, class FName K2Node_ComponentBoundEvent_BoneName1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, class FName K2Node_ComponentBoundEvent_BoneName, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_Event_Enabled, bool CallFunc_IsVisible_ReturnValue);
	void Exploded__DelegateSignature();
};

}


