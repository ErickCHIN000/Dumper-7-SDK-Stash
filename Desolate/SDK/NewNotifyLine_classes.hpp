#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29C (0x521 - 0x285)
// WidgetBlueprintGeneratedClass NewNotifyLine.NewNotifyLine_C
class UNewNotifyLine_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1C97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Appear;                                            // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CaptionText;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TooltipText1;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           RightBarPositive;                                  // 0x2B8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           RightBarNegative;                                  // 0x340(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           RightBarGroup;                                     // 0x3C8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           RightBarCasual;                                    // 0x450(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ENotifyType                       Type;                                              // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1CB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Caption;                                           // 0x4E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  ToolTip;                                           // 0x4F8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnHideEnd;                                         // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bNeedPressJ;                                       // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UNewNotifyLine_C* GetDefaultObj();

	enum class ESlateVisibility Get_TooltipText1_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	struct FSlateBrush Get_RightBar_Brush_0(enum class ENotifyType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable_1, const struct FSlateBrush& Temp_struct_Variable_2, const struct FSlateBrush& K2Node_Select_Default);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnHidden();
	void Show();
	void Hide();
	void ExecuteUbergraph_NewNotifyLine(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnHideEnd__DelegateSignature(class UNewNotifyLine_C* Sender);
};

}


