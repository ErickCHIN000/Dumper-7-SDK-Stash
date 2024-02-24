#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_IFullScreen.wid_pda_IFullScreen_C
class UWid_pda_IFullScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class FText                                  Name;                                              // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWid_pda_MainView_C*                   MainView;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Unlocked;                                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_10DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnBackClicked;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_pda_IFullScreen_C* GetDefaultObj();

	void SetAppTab(int32 Index);
	void GetName(int32 AltNameID, class FText* Name);
	void CanHidePhone(bool* CanHide);
	void InputRight();
	void InputLeft();
	void InputUp();
	void InputDown();
	void InputFaceDown();
	void InputFaceRight();
	void InputFaceLeft();
	void InputFaceUp();
	void AppClosed();
	void AppOpened();
	void DPadUp();
	void DPadRight();
	void DPadDown();
	void DPadLeft();
	void InputFaceDownReleased();
	void InputFaceRightReleased();
	void InputFaceLeftReleased();
	void InputFaceUpReleased();
	void InputLeftStick();
	void InputRightStick();
	void InputZoomUp();
	void InputZoomDown();
	void InputAxisX(float Axis);
	void InputAxisY(float Axis);
	void InputL2();
	void InputR2();
	void QuickUse1();
	void QuickUse2();
	void QuickUse3();
	void QuickUse4();
	void SwitchToMapApp(class Abp_MinimapTag_C* Tag);
	void InputRightReleased();
	void InputLeftReleased();
	void InputSplit();
	void InputUIAccept();
	void QuickUse5();
	void QuickUse6();
	void QuickUse7();
	void QuickUse8();
	void InputAssign();
	void ExecuteUbergraph_wid_pda_IFullScreen(int32 EntryPoint, float K2Node_CustomEvent_Axis_1, float K2Node_CustomEvent_Axis, class Abp_MinimapTag_C* K2Node_CustomEvent_Tag);
	void OnBackClicked__DelegateSignature();
};

}


