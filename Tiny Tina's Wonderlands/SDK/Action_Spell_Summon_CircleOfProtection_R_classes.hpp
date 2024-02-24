#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x418 - 0x410)
// BlueprintGeneratedClass Action_Spell_Summon_CircleOfProtection_R.Action_Spell_Summon_CircleOfProtection_R_C
class UAction_Spell_Summon_CircleOfProtection_R_C : public UAction_Spell_Summon_CircleOfProtection_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Summon_CircleOfProtection_R_C* GetDefaultObj();

	void Notify_SpellWarmup_R();
	void Notify_SpellStart_R();
	void Notify_SpellCast_R();
	void ExecuteUbergraph_Action_Spell_Summon_CircleOfProtection_R(int32 EntryPoint, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue2, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent2, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent2, class FName CallFunc_PlayFX_Socket2);
};

}


