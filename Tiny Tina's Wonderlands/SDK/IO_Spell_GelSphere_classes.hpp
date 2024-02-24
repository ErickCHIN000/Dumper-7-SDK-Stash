#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x670 - 0x588)
// BlueprintGeneratedClass IO_Spell_GelSphere.IO_Spell_GelSphere_C
class AIO_Spell_GelSphere_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           PulsingArea;                                       // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Wobble_Wave_80DB670A494901E3507A82BAC16BDD88;      // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Wobble__Direction_80DB670A494901E3507A82BAC16BDD88; // 0x5A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Wobble;                                            // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpawnableSpellBasicData              SpellData;                                         // 0x5B0(0x40)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	float                                        DelayTime;                                         // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DelayTimer;                                        // 0x5F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        LoopCount;                                         // 0x600(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     PlayerController;                                  // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DamageType;                                        // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExplosionData*                        ExplosionDef;                                      // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellRadius;                                       // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellDamage;                                       // 0x624(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusEffectChance;                           // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellForce;                                        // 0x62C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusEffectDamage;                           // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitEnemy;                                          // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableValueHandle                 DamageMultiHandle;                                 // 0x640(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 RadiusMultiHandle;                                 // 0x658(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AIO_Spell_GelSphere_C* GetDefaultObj();

	void PlayFeedback(class UFeedbackData* FBData, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void UserConstructionScript();
	void Wobble__FinishedFunc();
	void Wobble__UpdateFunc();
	void Wobble__PlayFeedback__EventFunc();
	void ReceiveBeginPlay();
	void DelayedBlast();
	void BeginCleanup();
	void StartTimeline(const struct FVector& StartScale);
	void SetupOrb();
	void AttachedTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnAttachedTargedCloaked();
	void ExecuteUbergraph_IO_Spell_GelSphere(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& K2Node_CustomEvent_StartScale, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, bool CallFunc_IsAlive_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UAICloakComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2);
};

}


