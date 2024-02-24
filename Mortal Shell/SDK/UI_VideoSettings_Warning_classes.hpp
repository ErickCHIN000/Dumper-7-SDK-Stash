#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x268 - 0x230)
// WidgetBlueprintGeneratedClass UI_VideoSettings_Warning.UI_VideoSettings_Warning_C
class UUI_VideoSettings_Warning_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_Dismiss;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Dismiss;                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUI_OptionsMenu_C*                     UI_OptionsMenu;                                    // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_VideoSettings_Warning_C* GetDefaultObj();

	void InWarningWindow(bool IsWarningWindow, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Window_Dismiss(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void Dismiss_Set();
	void Construct();
	void Dismiss_Bind();
	void BndEvt__UI_ControllerButton_Dismiss_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void ExecuteUbergraph_UI_VideoSettings_Warning(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton);
	void OnClick__DelegateSignature(int32 Index);
};

}


