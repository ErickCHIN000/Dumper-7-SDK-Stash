#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0x171 - 0x132)
// BlueprintGeneratedClass Ability_All_Amulet_SacSkeep.Ability_All_Amulet_SacSkeep_C
class UAbility_All_Amulet_SacSkeep_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_1ECF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	class ABPChar_Player_C*                      PlayerOwner;                                       // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Amulet_SacSkeep; // 0x148(0x28)(None)
	bool                                         bIsResurrecting;                                   // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_All_Amulet_SacSkeep_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void HandleHealthState(enum class EHealthState HealthState);
	void ExecuteUbergraph_Ability_All_Amulet_SacSkeep(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, enum class EHealthState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SpawnActorAsync_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EHealthState K2Node_CustomEvent_HealthState, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool K2Node_Select_Default);
};

}


