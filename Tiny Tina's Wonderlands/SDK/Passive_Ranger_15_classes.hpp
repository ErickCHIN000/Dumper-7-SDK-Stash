#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x2F0 - 0x2BA)
// BlueprintGeneratedClass Passive_Ranger_15.Passive_Ranger_15_C
class UPassive_Ranger_15_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_42E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	int32                                        Att_Ranger_15;                                     // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxStacks;                                         // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 MaxStacksHandle;                                   // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UParticleSystem*                       ScreenPart;                                        // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPassive_Ranger_15_C* GetDefaultObj();

	void LeaveAimingState(class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
	void EnterAimingState(class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void AimingUpdate(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_MapRangeUnclamped_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess);
	void IncrementStacks(int32 StackAmount, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue);
	enum class EGbxAbilityState CalculateAbilityState(bool Temp_bool_Variable, enum class EGbxAbilityState Temp_byte_Variable, enum class EGbxAbilityState Temp_byte_Variable1, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsZoomedIn_ReturnValue, enum class EGbxAbilityState K2Node_Select_Default);
	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining);
	void OnActivated();
	void OnDeactivated();
	void OnResumed();
	void OnPaused();
	void ExecuteUbergraph_Passive_Ranger_15(int32 EntryPoint, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_Round_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2);
};

}


