#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x190 - 0x110)
// BlueprintGeneratedClass Ability_Envy.Ability_Envy_C
class UAbility_Envy_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakWeapon*                            WeaponOwner;                                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  PlayerOwner;                                       // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_RedHellion; // 0x128(0x28)(None)
	TArray<class AActor*>                        PoisonActors;                                      // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        DarkActors;                                        // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UStatusEffectData*                     SE_Dark;                                           // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusEffectData*                     SE_Poison;                                         // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplatData*                            Splat_Dark;                                        // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplatData*                            Splat_Poison;                                      // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Envy_C* GetDefaultObj();

	void GbxAsyncRequest_Spawned_791084DF462EC3A668D93BB124318980(class AActor* Actor, int32 InstanceIndex);
	void GbxAsyncRequest_Spawned_8F16DB2A42DA85089AB87994C5CA77DF(class AActor* Actor, int32 InstanceIndex);
	void OnActivated();
	void Envy_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void SpawnSplat();
	void AddPoisonTarget(class AActor*& PoisonActor);
	void AddDarkTarget(class AActor*& DarkActor);
	void ExecuteUbergraph_Ability_Envy(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor1, int32 K2Node_CustomEvent_InstanceIndex1, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class AActor* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_IsElementalType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsElementalType_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Array_RemoveItem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest1, int32 CallFunc_SpawnActorAsync_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, bool CallFunc_Array_RemoveItem_ReturnValue1, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery1, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, class AActor* K2Node_CustomEvent_PoisonActor, class AActor* K2Node_CustomEvent_DarkActor, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue1, bool CallFunc_Array_RemoveItem_ReturnValue2, bool CallFunc_Array_RemoveItem_ReturnValue3, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec1, bool CallFunc_RemoveStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1);
};

}


