#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xA28 - 0x9F8)
// BlueprintGeneratedClass BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C
class ABPWeap_AR_VLA_ManualTrans_C : public ABPWeap_AR_VLA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F8(0x8)(Transient, DuplicateTransient)
	struct FGbxAttributeModifierHandle           MaxLoadedHandle;                                   // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeModifierHandle           OverheatedShotsHandle;                             // 0xA10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter_Player*                  PlayerOwner;                                       // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_AR_VLA_ManualTrans_C* GetDefaultObj();

	void ReAddStatusCount(int32 StackCount, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, int32 Temp_int_Variable, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetStatusStackCount(int32* Number_Of_Instances, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue);
	void ClearStatus(const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
	void UserConstructionScript();
	void Notify_ReloadStarted(bool bAutoReload);
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void OnPutDown(class AWeapon* Weapon);
	void CheckInUse();
	void NotifySwitchedMode_Event();
	void WeaponAttached();
	void CloseGate();
	void Audio_ShiftUp();
	void Audio_Downshift();
	void Audio_ShiftFail();
	void ExecuteUbergraph_BPWeap_AR_VLA_ManualTrans(int32 EntryPoint, class UWwiseSwitch* Temp_object_Variable, class UWwiseSwitch* Temp_object_Variable1, class UWwiseSwitch* Temp_object_Variable2, class UWwiseSwitch* Temp_object_Variable3, class UWwiseSwitch* Temp_object_Variable4, class UWwiseSwitch* Temp_object_Variable5, class UWwiseSwitch* Temp_object_Variable6, class UWwiseSwitch* Temp_object_Variable7, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bAutoReload, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, class UBPHeatComponent_CoV_ManualTrans_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBPHeatComponent_CoV_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveAttributeModifier_ReturnValue1, bool CallFunc_RemoveAttributeModifier_ReturnValue2, class AWeapon* K2Node_Event_Weapon, int32 CallFunc_GetStatusStackCount_Number_Of_Instances, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetStatusStackCount_Number_Of_Instances1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsUsing_ReturnValue, bool CallFunc_IsSwitchingModes_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_BooleanOR_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, int32 Temp_int_Variable, class UWwiseSwitch* K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue2);
};

}


