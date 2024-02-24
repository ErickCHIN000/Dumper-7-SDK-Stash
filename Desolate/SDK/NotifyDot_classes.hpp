#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x2A0 - 0x285)
// WidgetBlueprintGeneratedClass NotifyDot.NotifyDot_C
class UNotifyDot_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1AA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BlinkAnimation;                                    // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                DotImage;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotifyDot_C* GetDefaultObj();

	void Hide();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Show();
	void ShowInstant();
	void WidgetAnimationEvt_BlinkAnimation_K2Node_WidgetAnimationEvent_0();
	void ExecuteUbergraph_NotifyDot(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_PauseAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


