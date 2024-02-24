#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x160 - 0x110)
// BlueprintGeneratedClass Ability_LiveWire.Ability_LiveWire_C
class UAbility_LiveWire_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter*                         PlayerOwner;                                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_LiveWire; // 0x120(0x28)(None)
	class AOakWeapon*                            WeaponOwner;                                       // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataTableHandle;                                   // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_LiveWire_C* GetDefaultObj();

	void GetDamageScalar(float IncomingDamage, float* Res, const struct FDataTableValueHandle& DamageScalar, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void OnActivated();
	void LiveWire_OnCausedMeleeDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_LiveWire(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess2, class FName CallFunc_GetCompanionTargetingSocket_Socket, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, float CallFunc_GetDamageScalar_Res, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, const struct FLightBeamInitializationData& K2Node_MakeStruct_LightBeamInitializationData, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}


