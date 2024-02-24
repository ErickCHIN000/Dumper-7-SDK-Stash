#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x166 (0x420 - 0x2BA)
// BlueprintGeneratedClass Passive_Rogue_12.Passive_Rogue_12_C
class UPassive_Rogue_12_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_16D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	float                                        ProcChance;                                        // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ProcChanceHandle;                                  // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       FindSpreadTarget;                                  // 0x2E8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UOakElementalEffectData*, class UClass*> SE_Lookup;                                         // 0x3A0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        IsolationDamageMultiplier;                         // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 IsolationDamageMultiplierHandle;                   // 0x3F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UClass*>                        SE_Availible;                                      // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPassive_Rogue_12_C* GetDefaultObj();

	void OnActivated();
	void OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec);
	void ExecuteUbergraph_Passive_Rogue_12(int32 EntryPoint, class AActor* K2Node_Event_Target, const struct FStatusEffectSpec& K2Node_Event_Spec, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UOakElementalEffectData* K2Node_DynamicCast_AsOak_Elemental_Effect_Data, bool K2Node_DynamicCast_bSuccess, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsHostile_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue, TArray<class UClass*>& K2Node_MakeArray_Array, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool CallFunc_IsAbilityTimerActive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UClass* CallFunc_Array_Get_Item, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue1);
};

}


