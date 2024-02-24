#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_Camera_Shortcut.UMG_Camera_Shortcut_C
class UUMG_Camera_Shortcut_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_ActionName;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Key;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ActionName;                                        // 0x278(0x18)(Edit, BlueprintVisible)
	struct FKeybindingsRowHandle                 Keybinding;                                        // 0x290(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FText                                  FallbackKeyName;                                   // 0x2A8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_Camera_Shortcut_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_Camera_Shortcut(int32 EntryPoint, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FKey& Temp_wildcard_Variable, class FText CallFunc_GetDisplayNameForKey_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings_1, enum class EValid CallFunc_GetKeybindingsStruct_Paths_1, const struct FInputActionKeyMapping& CallFunc_GetCurrentActionMapping_Out, enum class EValid CallFunc_GetCurrentActionMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FInputAxisKeyMapping& CallFunc_GetCurrentAxisMapping_Out, enum class EValid CallFunc_GetCurrentAxisMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess_3);
};

}


