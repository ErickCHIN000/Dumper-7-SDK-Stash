#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xB0 - 0x30)
// BlueprintGeneratedClass ANS_WeaponSwoosh_Timed.ANS_WeaponSwoosh_Timed_C
class UANS_WeaponSwoosh_Timed_C : public UAnimNotifyState
{
public:
	class FName                                  Bone_Name;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocationOffset;                                    // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationOffset;                                    // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTag                          AttackType;                                        // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ElementType;                                       // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	double                                       FirstPerson;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gameplay;                                          // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3902[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VFX_DripsSpawnChance;                              // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_ElectricalSparksSpawnChance;                   // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_EmbersSpawnChance;                             // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_IceSpawnChance;                                // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SporesSpawnChance;                             // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_WeaponSwoosh_Timed_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UNiagaraComponent* Particle, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UNiagaraComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_GetAttachSocketName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, const struct FGameplayTag& LElementTag, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FS_WeaponSwoosh& CallFunc_GetTableCellData_OutData, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, float CallFunc_SetFloatParameter_Param_ImplicitCast);
};

}


