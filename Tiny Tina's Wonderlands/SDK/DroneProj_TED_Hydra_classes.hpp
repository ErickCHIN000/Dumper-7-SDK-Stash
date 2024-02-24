#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0xE70 - 0xD84)
// BlueprintGeneratedClass DroneProj_TED_Hydra.DroneProj_TED_Hydra_C
class ADroneProj_TED_Hydra_C : public ADroneProj_Hydra_C
{
public:
	uint8                                        Pad_47C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD88(0x8)(Transient, DuplicateTransient)
	int32                                        AmmoCount;                                         // 0xD90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxAmmo;                                           // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ShotDamage;                                        // 0xD98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_47CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                WeaponDamageType;                                  // 0xDA0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                WeaponDamageSource;                                // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AWeapon*                               OwnerWeapon;                                       // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class UWeaponTypeData*, class FString>  WeapTypeScalarMap;                                 // 0xDB8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          BeamTimer;                                         // 0xE08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_Beams_Start;                                 // 0xE10(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bFailsafeBeamStopFiring;                           // 0xE60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseBeamWeapon;                                     // 0xE61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsMagicShotgun;                                   // 0xE62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47D7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                OriginalWeaponType;                                // 0xE68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADroneProj_TED_Hydra_C* GetDefaultObj();

	void GetHydraDuration(float* Res);
	void UserConstructionScript();
	void CompanionDespawnActions();
	void CompanionSpawnActions();
	void FireDroneBeam();
	void OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void KillBeam();
	void SetBeamKillTimer(bool KillNow);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void FireDroneWeapon();
	void CacheDamageValues();
	void SetPixieHydraVisuals();
	void ExecuteUbergraph_DroneProj_TED_Hydra(int32 EntryPoint, class UClass* CallFunc_CheckClawElement_ReturnedElement, bool CallFunc_CheckClawElement_bIsValidElement, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, float Temp_float_Variable2, bool Temp_bool_Variable1, float Temp_float_Variable3, enum class EOakElementalType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName Temp_name_Variable5, bool Temp_bool_Variable2, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, bool Temp_bool_Variable3, class FName K2Node_Select_Default, class UWeaponFireProjectileComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_BreakGbxAttributeInteger_Value, int32 CallFunc_BreakGbxAttributeInteger_BaseValue, int32 CallFunc_Max_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_GetDroneHydraFireSocket_Res, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float K2Node_Select1_Default, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_Event_DamageReceiver, class AActor* K2Node_Event_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, float CallFunc_GetFireRateVariance_Res, bool K2Node_CustomEvent_KillNow, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasValidTarget_Res, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetFireRate_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool Temp_bool_Variable4, float K2Node_Select2_Default, class UWeaponFireProjectileComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class UClass* CallFunc_CheckClawElement_ReturnedElement1, bool CallFunc_CheckClawElement_bIsValidElement1, class UClass* K2Node_Select3_Default, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_Select4_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UClass* K2Node_Select5_Default);
};

}


