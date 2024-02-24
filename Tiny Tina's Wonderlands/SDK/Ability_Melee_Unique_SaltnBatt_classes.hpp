#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1E0 - 0x198)
// BlueprintGeneratedClass Ability_Melee_Unique_SaltnBatt.Ability_Melee_Unique_SaltnBatt_C
class UAbility_Melee_Unique_SaltnBatt_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Melee_Legendary_FryingPan; // 0x1A0(0x28)(None)
	class AActor*                                DeadActor;                                         // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildProjCount;                                    // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_460B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AProjectile_TED_SaltNBattery_Daggerstorm_C* CurrentDaggerStorm;                                // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Melee_Unique_SaltnBatt_C* GetDefaultObj();

	void GbxAsyncRequest_Spawned_7C8E2F3143FA40444BF9899390CFA6F8(class AActor* Actor, int32 InstanceIndex);
	void OnActivated();
	void Caused_Melee_Damage(class AActor* Instigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* Damage_Source, class AActor* Damaged_Target, const struct FCausedDamageDetails& Details);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Melee_Unique_SaltnBatt(int32 EntryPoint, class AProjectile_TED_SaltNBattery_Daggerstorm_C* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class AProjectile_TED_SaltNBattery_Daggerstorm_C* K2Node_DynamicCast_AsProjectile_TED_Salt_NBattery_Daggerstorm, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Instigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_Damage_Source, class AActor* K2Node_CustomEvent_Damaged_Target, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_IsValid_ReturnValue);
};

}


