#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x410 - 0x400)
// BlueprintGeneratedClass Action_Spell_Channel_Laserhand_Fire.Action_Spell_Channel_Laserhand_Fire_C
class UAction_Spell_Channel_Laserhand_Fire_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           Audio_LaserhandCast;                               // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Spell_Channel_Laserhand_Fire_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void SpellCharge();
	void SpellThrow();
	void ExecuteUbergraph_Action_Spell_Channel_Laserhand_Fire(int32 EntryPoint, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class AActor* CallFunc_K2_GetActor_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
};

}


