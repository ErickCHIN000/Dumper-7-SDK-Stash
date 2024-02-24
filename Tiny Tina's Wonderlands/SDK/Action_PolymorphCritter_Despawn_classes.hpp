#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x318 - 0x220)
// BlueprintGeneratedClass Action_PolymorphCritter_Despawn.Action_PolymorphCritter_Despawn_C
class UAction_PolymorphCritter_Despawn_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	bool                                         KilledPolymorphTarget;                             // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FoundImmuneTarget;                                 // 0x229(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1636[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PlayerOwner;                                       // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PolymorphTarget;                                   // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       FindGroundNearDrone;                               // 0x240(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UBPEventHub_PlayerCharacter_C*         EventHub;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGameResourceData*>             EnemyHealthPools;                                  // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        HealthRemaining;                                   // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_0;                                          // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_PolymorphCritter_Despawn_C* GetDefaultObj();

	void CacheValues(class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_K2_GetIntRegisterValue_OutInt, bool CallFunc_K2_GetIntRegisterValue_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_K2_GetIntRegisterValue_OutInt1, bool CallFunc_K2_GetIntRegisterValue_ReturnValue1, bool CallFunc_Conv_IntToBool_ReturnValue1, class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject1, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue1, class AActor* K2Node_DynamicCast_AsActor1, bool K2Node_DynamicCast_bSuccess2);
	void OnServerBegin(class AActor* Actor);
	void AN_PlayDespawnEffects();
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_PolymorphCritter_Despawn(int32 EntryPoint, class UClass* Temp_class_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UClass* Temp_class_Variable1, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue2, int32 CallFunc_AddSpellweavingStacks_Res, TArray<struct FGbxActionRegister>& K2Node_MakeArray_Array, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<struct FGbxActionRegister>& CallFunc_SetIntGbxActionRegister_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue3, TArray<struct FGbxActionRegister>& CallFunc_SetObjectGbxActionRegister_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, bool Temp_bool_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue5, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, float CallFunc_GetMaxHealth_ReturnValue, class UGameResourceData* CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, float CallFunc_GetCurrentHealth_ReturnValue, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue3, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool Temp_bool_Variable2, float CallFunc_FMin_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& K2Node_Select_Default, class UClass* K2Node_Select1_Default, bool CallFunc_StartControlledMove_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
};

}


