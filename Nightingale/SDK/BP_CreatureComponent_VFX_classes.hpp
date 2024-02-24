#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB2 (0x16C - 0xBA)
// BlueprintGeneratedClass BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C
class UBP_CreatureComponent_VFX_C : public UBP_CreatureComponentBase_C
{
public:
	uint8                                        Pad_3DD6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter*                            OwningCreature;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     RagdollingSpawnedParticleSystem;                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CurrentSurfaceGameplayTag;                         // 0xE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRagDollSocketsData                   SocketsData;                                       // 0xE8(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        VFXFocusRankThreshold;                             // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CreatureComponent_VFX_C* GetDefaultObj();

	void ShouldSpawnVFX(bool* ShouldSpawnVFX, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ShouldSpawnVFXBasedOnFocusRank_ReturnValue);
	void Check_Surface_Impact(const struct FGameplayTag& ImpactTag, double DeltaTime, double ScaleOverride, const struct FHitResult& HitResult, const struct FVector& SocketLocation, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_ShouldSpawnVFX_ShouldSpawnVFX, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetTableCellData_OutData, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsCharacterRagdolling_IsRagdolling, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckAndSelectRagDollSocketData_bOutIsVfxNeeded, bool CallFunc_CheckAndSelectRagDollSocketData_bOutIsSurfaceTagChangeNeeded, const struct FHitResult& CallFunc_CheckAndSelectRagDollSocketData_OutHitResult, TArray<struct FLiquidHitData>& CallFunc_CheckAndSelectRagDollSocketData_OutLiquidHits, float CallFunc_CheckAndSelectRagDollSocketData_OutScaledVelocity, float CallFunc_CheckAndSelectRagDollSocketData_OutScaleOverride, class UNiagaraComponent* CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem, const struct FGameplayTag& CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag, const struct FLiquidHitData& CallFunc_Array_Get_Item, class UNiagaraComponent* CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem_1, const struct FGameplayTag& CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_CheckAndSelectRagDollSocketData_DeltaTime_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast_1, double CallFunc_Set_Surface_Impact_VFX_Parameters_Velocity_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast_1, double CallFunc_Set_Surface_Impact_VFX_Parameters_ScaleOverride_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_WaterDepth_ImplicitCast);
	void Initialize(bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
	void CreatureDeath();
	void ClientCreatureComponentUpdate();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_CreatureComponent_VFX(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_Check_Surface_Impact_DeltaTime_ImplicitCast);
};

}


