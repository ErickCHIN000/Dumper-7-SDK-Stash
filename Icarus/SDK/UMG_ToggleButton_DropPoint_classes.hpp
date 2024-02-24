#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2FC (0xAE8 - 0x7EC)
// WidgetBlueprintGeneratedClass UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C
class UUMG_ToggleButton_DropPoint_C : public UUMG_ToggleButtonBase_C
{
public:
	uint8                                        Pad_524F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SelectionLoop;                                     // 0x7F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0x800(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x808(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageIcon;                                         // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageIcon_1;                                       // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageIcon_Selected;                                // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_DropName;                                     // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          NormalStyle;                                       // 0x830(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            ButtonIcon;                                        // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDropGroupsRowHandle                  DropPointRowHandle;                                // 0xAB0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDropGroupData                        DropGroupData;                                     // 0xAC8(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ToggleButton_DropPoint_C* GetDefaultObj();

	void FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis);
	void GetImageButton(class UButton** ImageButton);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void VisuallyToggleButton(bool VisualToggledState);
	void OnAnimationComplete();
	void ExecuteUbergraph_UMG_ToggleButton_DropPoint(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, const struct FDropGroupCosmeticData& CallFunc_GetDropGroupsStruct_DropGroups, enum class EValid CallFunc_GetDropGroupsStruct_Paths, bool K2Node_Event_VisualToggledState, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


