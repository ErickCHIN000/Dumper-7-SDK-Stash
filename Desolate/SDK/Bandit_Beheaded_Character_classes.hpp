#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1448 - 0x1400)
// BlueprintGeneratedClass Bandit_Beheaded_Character.Bandit_Beheaded_Character_C
class ABandit_Beheaded_Character_C : public ABandit_BaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       BBM_Beep_Grenade_Explode_Cue;                      // 0x1408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bExploded;                                         // 0x1410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1724[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplosionDelay;                                    // 0x1414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0x1418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionDamage;                                   // 0x141C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionForce;                                    // 0x1420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NormalAttackMoveSpeed;                             // 0x1424(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlowAttackMoveSpeed;                               // 0x1428(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_172C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_AttackSlow;                                     // 0x1430(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        AttackSlowDuration;                                // 0x1438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1730[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_ProcessExplosion;                               // 0x1440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABandit_Beheaded_Character_C* GetDefaultObj();

	bool OnDeathState(class ASHWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OnDeathState_ReturnValue);
	void DisableBomb(class ASHWeapon* CallFunc_GetWeapon_ReturnValue, class ABandit_Bomb_C* K2Node_DynamicCast_AsBandit_Bomb, bool K2Node_DynamicCast_bSuccess);
	void EnableBomb(class ASHWeapon* CallFunc_GetWeapon_ReturnValue, class ABandit_Bomb_C* K2Node_DynamicCast_AsBandit_Bomb, bool K2Node_DynamicCast_bSuccess);
	void OnAttackSlowComplete();
	void StartAttackSlow(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	bool SensingTakeDamage(class ASHCharacter* Character, bool FromSensor, float Damage, bool CallFunc_SensingTakeDamage_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ProcessExplosion(int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue, TArray<class ASHCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class ASHCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetSquaredDistanceToCharacter_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
	void StartExplosion(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ProcessExplosion_Client();
	void StartExplosion_Client();
	void StopExplosion_Client();
	void ExecuteUbergraph_Bandit_Beheaded_Character(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ASHWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
};

}


