#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x210 (0x558 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Options_InputAction.WBP_Options_InputAction_C
class UWBP_Options_InputAction_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonText_ActionName;                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IMG_Background;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Keys;                                              // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_InputKeySelector1;                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_InputKeySelector2;                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_InputKeySelector_Gamepad;                  // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerKeyMapping                     PlayerKeyMapping_1;                                // 0x380(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerKeyMapping                     PlayerKeyMapping_2;                                // 0x410(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerKeyMapping                     PlayerKeyMapping_Gamepad;                          // 0x4A0(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  ActionName;                                        // 0x530(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSettingsValueUpdated;                            // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Options_InputAction_C* GetDefaultObj();

	void Internal_OnSettingValueUpdated(class UUserWidget* SettingsWidget);
	void CreateWidget(const struct FPlayerKeyMapping& PlayerKeyMapping, class UOverlay* ContainerOverlay, class UNWXKeyMappingWidget** KeyMappingWidget, class UWBP_Options_InputKeySelector_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void CreateKeyMappingWidgets(class UNWXKeyMappingWidget* CallFunc_CreateWidget_KeyMappingWidget, class UNWXKeyMappingWidget* CallFunc_CreateWidget_KeyMappingWidget_1, bool CallFunc_IsMappingInitialized_IsValid, bool CallFunc_IsMappingInitialized_IsValid_1, class UNWXKeyMappingWidget* CallFunc_CreateWidget_KeyMappingWidget_2, bool CallFunc_IsMappingInitialized_IsValid_2);
	void IsMappingGamepad(const struct FPlayerKeyMapping& PlayerKeyMapping, bool* IsGamepad, bool CallFunc_Key_IsGamepadKey_ReturnValue);
	void IsMappingInitialized(const struct FPlayerKeyMapping& PlayerKeyMapping, bool* IsValid, bool CallFunc_NotEqual_NameName_ReturnValue);
	void AddMapping(const struct FPlayerKeyMapping& NewMapping, bool CallFunc_IsMappingGamepad_IsGamepad, bool CallFunc_IsMappingInitialized_IsValid);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_Options_InputAction(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnSettingsValueUpdated__DelegateSignature(class UUserWidget* SettingsWidget);
};

}


