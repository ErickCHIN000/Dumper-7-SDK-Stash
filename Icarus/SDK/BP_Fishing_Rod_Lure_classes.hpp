#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48C (0x74C - 0x2C0)
// BlueprintGeneratedClass BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C
class ABP_Fishing_Rod_Lure_C : public AIcarusActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                CaughtFish;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                LureSkeletalMesh;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmoothSync*                           SmoothSync;                                        // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UIProjectionComponent_Fishing_C*   BP_UIProjectionComponent_Fishing;                  // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuoyancyComponent_C*               BP_BuoyancyComponent;                              // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Casted;                                            // 0x2F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2329[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LaunchVelocity;                                    // 0x2FC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverlapRange;                                      // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2335[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           DefaultLure;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkeletalItem_Fishing_Rod_C*        Rod;                                               // 0x318(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSmoothSyncActive;                                // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2349[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CurrentLure;                                       // 0x328(0x1F0)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	struct FItemData                             CurrentFish;                                       // 0x518(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UFMODEvent*                            FMODEvent_Fly;                                     // 0x708(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_Fish_Interested;                         // 0x710(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_Land;                                    // 0x718(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceDisableSmoothSync;                            // 0x720(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_236B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent_Fish;                                    // 0x728(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FlyAudio;                                          // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FishAudio;                                         // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         DefaultLureSkeletalMesh;                           // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaterPlaneZ;                                       // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fishing_Rod_Lure_C* GetDefaultObj();

	void PlayLandSplashVFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z);
	void PlayFishInterestedAudio(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void UpdateFishAudioParams(bool CallFunc_IsValid_ReturnValue);
	void ShouldFishAudioPlay(bool* ShouldPlay, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateFishAudioState(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_ShouldFishAudioPlay_ShouldPlay, bool K2Node_SwitchEnum_CmpSuccess);
	void OnFloatingChanged(bool Floating);
	void PlayLandAudio(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void StopFlyAudio(bool CallFunc_IsValid_ReturnValue);
	void PlayFlyAudio(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void BindToMeshUpdates(bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod, class UInventory* CallFunc_GetAttachmentSlotActor_Inventory, int32 CallFunc_GetAttachmentSlotActor_Slot, enum class EDataValid CallFunc_GetAttachmentSlotActor_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_CurrentLure();
	void On_Lure_Updated(class UInventory* Inventory, int32 Location, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsServer_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Initialise(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void OnRep_Casted(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod, bool CallFunc_HasAuthority_ReturnValue_1);
	void Is_Floating(bool* IsFloating, enum class EValid CallFunc_GetTrait_Paths, class UFloatableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_BuoyancyComponent_C* K2Node_DynamicCast_AsBP_Buoyancy_Component, bool K2Node_DynamicCast_bSuccess);
	void SetSmoothSync(bool Enable);
	void SetFish(const struct FItemData& Fish);
	void GetFishingRod(class ABP_SkeletalItem_Fishing_Rod_C** FishingRod, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_SkeletalItem_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod, bool K2Node_DynamicCast_bSuccess);
	void GetProjectionComponent(class UBP_UIProjectionComponent_Fishing_C** BP_UIProjectionComponent_Fishing);
	void GetOwningPlayer(class AIcarusPlayerCharacter** AsIcarus_Player_Character, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnLoaded_DE554079490083A2D4196685C51B4028(class UObject* Loaded);
	void OnLoaded_80A951DB46CB0CDFB8757C8FB6BF2ED9(class UObject* Loaded);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void UpdateLure();
	void UpdateFish();
	void ResetLandEffects();
	void TryPlayLandEffects();
	void ExecuteUbergraph_BP_Fishing_Rod_Lure(int32 EntryPoint, class UObject* Temp_object_Variable, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod_2, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData_1, enum class EDataValid CallFunc_GetMeshableData_Paths_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_GetFishScale_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldOffset_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


