#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x184 (0xD84 - 0xC00)
// BlueprintGeneratedClass TEDProjectile_ThrowableHole.TEDProjectile_ThrowableHole_C
class ATEDProjectile_ThrowableHole_C : public ATEDProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       FindHoles;                                         // 0xC08(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         DoubleHole;                                        // 0xCC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       FindSpawnLoc;                                      // 0xCC8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        TotalDamagePassThrough;                            // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATEDProjectile_ThrowableHole_C* GetDefaultObj();

	void TryCleanupOldHoles(bool HoleExists_, TArray<class AActor*>& PotentialHoles, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class AIO_TEDProjectile_ThrowableHole_C* K2Node_DynamicCast_AsIO_TEDProjectile_Throwable_Hole, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UserConstructionScript();
	void OnExplode();
	void OnBeginWeaponTransform();
	void ExecuteUbergraph_TEDProjectile_ThrowableHole(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool Temp_bool_IsClosed_Variable, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
};

}


