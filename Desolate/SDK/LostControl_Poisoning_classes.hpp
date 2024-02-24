#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x330 - 0x290)
// BlueprintGeneratedClass LostControl_Poisoning.LostControl_Poisoning_C
class ALostControl_Poisoning_C : public AGenericLostControlEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DotTickTime;                                       // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DotDamage;                                         // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponDetailedAnimMontageInfo        QteMontages;                                       // 0x2A0(0x60)(Edit, BlueprintVisible, NoDestructor)
	class ASHPlayerCharacter*                    Player;                                            // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimPlaying;                                       // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              SpawnedParticles;                                  // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponAnimMontageInfo                PlayingMontage;                                    // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ALostControl_Poisoning_C* GetDefaultObj();

	void OnApply();
	void DealDamage();
	void OnStartQTE();
	void OnStopQTE();
	void OnFinish(bool bWasInterruptedByQTE);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_LostControl_Poisoning(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_IsInFirstPerson_ReturnValue, bool K2Node_Event_bWasInterruptedByQTE, class USceneComponent* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue_1, bool CallFunc_InDyingState_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue_2);
};

}


