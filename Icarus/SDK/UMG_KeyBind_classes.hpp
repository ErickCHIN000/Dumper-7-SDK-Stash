#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x320 - 0x2E9)
// WidgetBlueprintGeneratedClass UMG_KeyBind.UMG_Keybind_C
class UUMG_Keybind_C : public UUMG_PhysicalKey_C
{
public:
	uint8                                        Pad_4837[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FKeybindingsRowHandle                 Keybinding;                                        // 0x2F8(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnKeyBindChanged;                                  // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_Keybind_C* GetDefaultObj();

	void GetDefaultKey(struct FKey* Key, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetDefaultAxisMapping_Paths, const struct FInputAxisKeyMapping& CallFunc_GetDefaultAxisMapping_ReturnValue, enum class EValid CallFunc_GetDefaultActionMapping_Paths, const struct FInputActionKeyMapping& CallFunc_GetDefaultActionMapping_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void GetKey(struct FKey* Key, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, const struct FInputActionKeyMapping& CallFunc_GetCurrentActionMapping_Out, enum class EValid CallFunc_GetCurrentActionMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FInputAxisKeyMapping& CallFunc_GetCurrentAxisMapping_Out, enum class EValid CallFunc_GetCurrentAxisMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess_2);
	void Set_Keybind(const struct FKeybindingsRowHandle& InKey, bool Hold, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, const struct FKey& CallFunc_GetKey_Key, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool CallFunc_Set_Key_IsSet, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Input_Type_Changed(enum class EInputTypeSetting Value);
	void ExecuteUbergraph_UMG_Keybind(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, enum class EInputTypeSetting K2Node_CustomEvent_Value, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_GetHoldTimer_TimerHandle, bool CallFunc_GetHoldTimer_bValid);
	void OnKeyBindChanged__DelegateSignature(bool IsSet);
};

}


