#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE7 (0x3A1 - 0x2BA)
// BlueprintGeneratedClass Passive_Rogue_17.Passive_Rogue_17_C
class UPassive_Rogue_17_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2FB9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	float                                        ProcChance;                                        // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ProcChanceHandle;                                  // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        VerticalOffset;                                    // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 VerticalOffsetHandle;                              // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HorizontalOffset;                                  // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 HorizontalOffsetHandle;                            // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        ForwardOffset;                                     // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ForwardOffsetHandle;                               // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SpawnLockTime;                                     // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 SpawnLockTimeHandle;                               // 0x350(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HorizontalScalarOffset;                            // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                HorizontalScalarOffsets;                           // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                VerticalScalarOffsets;                             // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        VerticalScalarOffset;                              // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakGameInstance*                      GameInstance;                                      // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Locked;                                            // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_Rogue_17_C* GetDefaultObj();

	void SetScalarOffsets(float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Array_Get_Item1);
	void RegisterManagedActor(class AActor* ManagedActor, class UOakManagedActorDefinition* ManagedActorType, class AGameStateBase* CallFunc_GetGameState_ReturnValue);
	void CanSpawnManagedActor(class UOakManagedActorDefinition* ManagedActorType, const struct FDataTableValueHandle& DataTableValueHandle, bool* CanSpawn, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void TempBlockNewSpawns(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SpawnPhantomBlade(class AActor* DamageTarget, class AActor** SpawnedActor, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AProjectile_Rogue_17_C* CallFunc_FinishSpawningActor_ReturnValue);
	void OakPassiveOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnActivated();
	void UnlockSpawn();
	void ExecuteUbergraph_Passive_Rogue_17(int32 EntryPoint, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, float CallFunc_GetDataTableValueFromHandle_ReturnValue3, TArray<float>& K2Node_MakeArray_Array, float CallFunc_GetDataTableValueFromHandle_ReturnValue4, TArray<float>& K2Node_MakeArray_Array1, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, class AActor* CallFunc_SpawnPhantomBlade_SpawnedActor, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, bool CallFunc_BooleanOR_ReturnValue);
};

}


