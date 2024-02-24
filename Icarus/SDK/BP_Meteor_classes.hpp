#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10A (0x3CA - 0x2C0)
// BlueprintGeneratedClass BP_Meteor.BP_Meteor_C
class ABP_Meteor_C : public AIcarusActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcessExplode;                                // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcessInFlight;                               // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SphereCollider;                                    // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   MeteorTravelAudio;                                 // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Meteor_Mesh_Layer;                                 // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Meteor_Mesh;                                       // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_ImpactPostProcess_FlashWeight_F83D4CAF4752A4E37BFA2BA54C8C4722; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_ImpactPostProcess_BlendWeight_F83D4CAF4752A4E37BFA2BA54C8C4722; // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_ImpactPostProcess__Direction_F83D4CAF4752A4E37BFA2BA54C8C4722; // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_ImpactPostProcess;                        // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_MeteorVfx_PP_Blendweight_DFEA73F04AA3426CA0E841A5056E70A1; // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_MeteorVfx_LightIntensity_DFEA73F04AA3426CA0E841A5056E70A1; // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_MeteorVfx_EntryMeshOpacity_DFEA73F04AA3426CA0E841A5056E70A1; // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_MeteorVfx_EntryMeshIntensity_DFEA73F04AA3426CA0E841A5056E70A1; // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_MeteorVfx_EntryMeshHeat_DFEA73F04AA3426CA0E841A5056E70A1; // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_MeteorVfx__Direction_DFEA73F04AA3426CA0E841A5056E70A1; // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_MeteorVfx;                                // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        METEOR_SPEED_SCALAR;                               // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeElapsed;                                       // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeOfFlight;                                      // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DestPos;                                           // 0x34C(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               StartPos;                                          // 0x358(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MeteorSpin;                                        // 0x364(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DepositRotation;                                   // 0x370(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	int32                                        MetaResouceAmount;                                 // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMetaResourceNodesRowHandle           MetaResourceRow;                                   // 0x380(0x18)(Edit, BlueprintVisible, SaveGame, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               MeteorDirection;                                   // 0x398(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_560D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MeteorDynamicMaterial;                             // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           Curve_TimeOfDayMultiplier;                         // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeOfDay;                                  // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5618[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              PostProcessDynamicMaterial;                        // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsExploding;                                       // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         DelayDone;                                         // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Meteor_C* GetDefaultObj();

	void SetInitialMeteorPosDir(float NINTEY_DEGREE_RADIANS, float FOURTY_DEGREE_RADIANS, float TEN_DEGREE_RADIANS, const struct FVector& DISTANCE_PROJECTION, const TArray<class AActor*>& ActorsToIgnore, const struct FVector& ForwardVector, const struct FVector& CurrentEndVector, float CurrentAngleRadians, bool FoundClearSpace, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Tan_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_ProjectVectorOnToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, TArray<class ABP_Extractor_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void DoMove(const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult);
	void DoInit(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue);
	void DoExplode(bool CallFunc_IsServer_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue);
	void Timeline_MeteorVfx__FinishedFunc();
	void Timeline_MeteorVfx__UpdateFunc();
	void Timeline_ImpactPostProcess__FinishedFunc();
	void Timeline_ImpactPostProcess__UpdateFunc();
	void OnLoaded_72A10B284232D82F40CBF5981917AE35(TSubclassOf<class UObject> Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SpawnMetaDeposit();
	void IcarusBeginPlay();
	void Multi_MeteorTravelVFX(float ServerTimeOfFlight);
	void Multi_PlayMeteorHitVFX();
	void ExecuteUbergraph_BP_Meteor(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_GetTimeOfDayHour_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, float K2Node_Event_DeltaSeconds, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FMetaResourceNodeInfo& CallFunc_GetMetaResourceNodesStruct_MetaResourceNodes, enum class EValid CallFunc_GetMetaResourceNodesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_CustomEvent_ServerTimeOfFlight, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsResource_Deposit, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AResourceDeposit* CallFunc_FinishSpawningActor_ReturnValue);
};

}


