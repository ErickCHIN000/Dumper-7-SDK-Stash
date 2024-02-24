#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x198 - 0x110)
// BlueprintGeneratedClass Ability_Melee_HiltMod_Base.Ability_Melee_HiltMod_Base_C
class UAbility_Melee_HiltMod_Base_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_TEST; // 0x118(0x28)(None)
	int32                                        XHitTrigger;                                       // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ConsecutiveHits;                                   // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  PlayerAbilityOwner;                                // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMeleeHit;                                      // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bUseMeleeBHit;                                     // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bUseMeleeXHit;                                     // 0x15A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAllowEffectOnLockHit;                             // 0x15B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHostileOnly;                                      // 0x15C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bLockHit;                                          // 0x15D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEffectTriggered;                                  // 0x15E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConsecutiveHitDuration;                            // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ConsecutiveHitDurationHandle;                      // 0x168(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UParticleSystem*                       HiltModTriggerFX;                                  // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HiltModTriggerFloatType;                           // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HiltModFXScale;                                    // 0x18C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Melee_HiltMod_Base_C* GetDefaultObj();

	void GetConsecutiveHits(int32* Value);
	void PlayHiltModFX(const struct FVector& Location, const struct FVector& Scale, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void SetConsecutiveHits(int32 Value);
	void IncrementConsecutiveHits(int32 CallFunc_Add_IntInt_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec);
	void OnActivated();
	void OnMeleeHit_HiltMod(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnDeactivated();
	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnMeleeFinisher_HiltMod(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void DoHiltMod_Finisher(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnMeleeXHit_HiltMod(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void DoHiltMod_XHit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void UnlockHit();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void ExecuteUbergraph_Ability_Melee_HiltMod_Base(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamageInstigator2, float K2Node_CustomEvent_Damage2, class UGbxDamageType* K2Node_CustomEvent_DamageType5, class UDamageSource* K2Node_CustomEvent_DamageSource2, class AActor* K2Node_CustomEvent_DamagedActor5, const struct FCausedDamageDetails& K2Node_CustomEvent_Details5, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGbxDamageType* K2Node_CustomEvent_DamageType4, class AActor* K2Node_CustomEvent_DamagedActor4, const struct FCausedDamageDetails& K2Node_CustomEvent_Details4, class AActor* K2Node_CustomEvent_DamageInstigator1, float K2Node_CustomEvent_Damage1, class UGbxDamageType* K2Node_CustomEvent_DamageType3, class UDamageSource* K2Node_CustomEvent_DamageSource1, class AActor* K2Node_CustomEvent_DamagedActor3, const struct FCausedDamageDetails& K2Node_CustomEvent_Details3, class UGbxDamageType* K2Node_CustomEvent_DamageType2, class AActor* K2Node_CustomEvent_DamagedActor2, const struct FCausedDamageDetails& K2Node_CustomEvent_Details2, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue1, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType1, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor1, const struct FCausedDamageDetails& K2Node_CustomEvent_Details1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue2, class UGbxDamageType* K2Node_CustomEvent_DamageType, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_BooleanAND_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, bool CallFunc_BooleanAND_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5, bool Temp_bool_Variable3, enum class EOakAbilityTimerResult Temp_byte_Variable, bool K2Node_Select_Default, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7);
};

}


