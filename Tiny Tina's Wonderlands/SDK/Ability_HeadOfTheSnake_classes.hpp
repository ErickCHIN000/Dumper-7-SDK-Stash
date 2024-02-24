#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A0 (0x4B0 - 0x110)
// BlueprintGeneratedClass Ability_HeadOfTheSnake.Ability_HeadOfTheSnake_C
class UAbility_HeadOfTheSnake_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       Query_TeleportLocations;                           // 0x118(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       Query_NearbyHydras;                                // 0x1D0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        OwnerPlayerHydras;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int32>                                HydraDistances;                                    // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                        HydrasToTeleport;                                  // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                       TeleportLocations;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                PlayerOwner;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_HeadOfTheSnake; // 0x2D8(0x28)(None)
	class AOakCharacter_Player*                  PlayerCharacter;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 DurationExtensionHandle;                           // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 TeleportTimerHandle;                               // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       TetherTeleportQuery;                               // 0x340(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       TetherTeleportSpellActorQuery;                     // 0x3F8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_HeadOfTheSnake_C* GetDefaultObj();

	void TryHydraTeleport(class AActor* InHydra, class AActor* NewHydra, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class ADroneProj_Hydra_C* K2Node_DynamicCast_AsDrone_Proj_Hydra, bool K2Node_DynamicCast_bSuccess, class ASpellActor_Hydra_Base_C* K2Node_DynamicCast_AsSpell_Actor_Hydra_Base, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, bool CallFunc_K2_TeleportTo_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue3, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation1, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue1, const struct FTransform& CallFunc_GetTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, bool CallFunc_K2_TeleportTo_ReturnValue1);
	void CleanupPerLoop();
	void OnActivated();
	void Timer_HeadOfTheSnake();
	void BeginHydraSequence();
	void OnDeactivated();
	void BreakLoop();
	void HydraDurationExtension(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_HeadOfTheSnake(int32 EntryPoint, int32 Temp_int_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_MaxOfIntArray_IndexOfMaxValue, int32 CallFunc_MaxOfIntArray_MaxValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, TArray<struct FVector>& CallFunc_RunEnvQueryForAllLocations_ResultLocations, bool CallFunc_RunEnvQueryForAllLocations_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Round_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1);
};

}


