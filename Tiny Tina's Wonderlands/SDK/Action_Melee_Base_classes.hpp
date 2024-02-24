#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x104 (0x324 - 0x220)
// BlueprintGeneratedClass Action_Melee_Base.Action_Melee_Base_C
class UAction_Melee_Base_C : public UOakAction_Anim_PlayerMelee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FXCollection;                                      // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DefaultFX;                                         // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FXSocket;                                          // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Melee_ProjectileType         MeleeProjectileType;                               // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       ProjectileEQS_MM;                                  // 0x250(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        ProjectileRotation;                                // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter_Player*                  PlayerChar;                                        // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ProjectileTarget;                                  // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumTargets;                                        // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Melee_Base_C* GetDefaultObj();

	void PlayMeleeFX(class UParticleSystem* FX, class FName SocketName, class AActor* Actor, bool Play1stFX, bool Play3rdFX, class UParticleSystemComponent** OnestFXComp1, class UParticleSystemComponent** ThreerdFXComp1, class UParticleSystemComponent* ThreerdFXComp, class UParticleSystemComponent* OnestFXComp, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1);
	class UParticleSystem* GetCollectionFX(class AActor* Actor, class UClass* Collection, class AGbxCharacter* CallFunc_GetAssociatedPrimaryCharacter_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue);
	void GetMeleeFX(class AActor* Actor, class UParticleSystem** MeleeFX, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void PlayerMelee_SpawnProjectile();
	void OnServerBegin(class AActor* Actor);
	void PlayerMelee_UnlockGun();
	void OnBegin(class AActor* Actor);
	void PlayerMelee_End();
	void OnestMeleeSwipe();
	void ThreerdMeleeSwipe();
	void ExecuteUbergraph_Action_Melee_Base(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue1, int32 CallFunc_RandomInteger_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Clamp_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player1, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, const struct FRotator& CallFunc_GetCurrentFacingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, TScriptInterface<class IBPI_Melee_C> K2Node_DynamicCast_AsBPI_Melee, bool K2Node_DynamicCast_bSuccess2, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest1, int32 CallFunc_SpawnActorAsync_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class AActor* K2Node_Event_Actor1, const struct FRotator& CallFunc_GetCurrentFacingRotation_ReturnValue1, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest2, class AActor* K2Node_Event_Actor, int32 CallFunc_SpawnActorAsync_ReturnValue2, class UParticleSystem* CallFunc_GetMeleeFX_MeleeFX, class UParticleSystem* CallFunc_GetMeleeFX_MeleeFX1, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player2, bool K2Node_DynamicCast_bSuccess3, class UParticleSystemComponent* CallFunc_PlayMeleeFX_1stFXComp1, class UParticleSystemComponent* CallFunc_PlayMeleeFX_3rdFXComp1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess4, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player3, bool K2Node_DynamicCast_bSuccess5, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue2, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UInventoryPartData*>& CallFunc_GetPartList_ReturnValue, class UInventoryPartData* CallFunc_Array_Get_Item2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue5, class UParticleSystemComponent* CallFunc_PlayMeleeFX_1stFXComp11, class UParticleSystemComponent* CallFunc_PlayMeleeFX_3rdFXComp11);
};

}


