#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xA0 - 0x68)
// BlueprintGeneratedClass BuffObjectPoisonDPS.BuffObjectPoisonDPS_C
class UBuffObjectPoisonDPS_C : public UBuffObjectTimeBased_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          DPSTimer;                                          // 0x70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DPSApplyFrequency;                                 // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DPS;                                               // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconID;                                            // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2242[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          StatueTimer;                                       // 0x90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PoisonVFXOnStatue;                                 // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffObjectPoisonDPS_C* GetDefaultObj();

	void UnpauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RemoveStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AddStatusIcon(int32* IconID, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddStatusIcon_IconID);
	void OverrideStatusIcon(float Duration, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	float GetDamage(float CallFunc_Multiply_FloatFloat_ReturnValue);
	void SetPoisonPostProcess(bool bIsPoisoned, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess);
	void ApplyDPS();
	void Reinitialize(float NewDuration, float DPS);
	void OnAttachToDeathStatue(class ABP_DeathShell_C* DeathShell);
	void OnDetachFromDeathStatue();
	void OnCutsceneStart_Set();
	void OnCutsceneEnd_Set();
	void OnBuffEnd(bool bInterrupted);
	void OnBuffExpiredOnDeathStatue();
	void OnBuffStart();
	void EquipmentMenuClosed_Unpause();
	void EquipmentMenuOpened_Pause(enum class Enum_EquipmentMenuType Menu);
	void OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu);
	void ExecuteUbergraph_BuffObjectPoisonDPS(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_DeathShell_C* K2Node_Event_DeathShell, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, class UParticleSystem* CallFunc_GetPoisonEmitter_PoisonFxParticleSystem, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsTimerActiveByHandle_ReturnValue, bool K2Node_Event_bInterrupted, float K2Node_CustomEvent_NewDuration, float K2Node_CustomEvent_DPS, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDamage_ReturnValue, float CallFunc_GetDamage_ReturnValue_1, float CallFunc_GetDamage_ReturnValue_2, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_AddStatusIcon_IconID, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, bool K2Node_Event_Close, enum class Enum_EquipmentMenuType K2Node_Event_Menu, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


