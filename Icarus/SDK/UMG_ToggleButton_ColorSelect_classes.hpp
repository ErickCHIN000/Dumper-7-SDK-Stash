#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D8 (0xAC4 - 0x7EC)
// WidgetBlueprintGeneratedClass UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C
class UUMG_ToggleButton_ColorSelect_C : public UUMG_ToggleButtonBase_C
{
public:
	uint8                                        Pad_38A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_ColourContainer;                     // 0x7F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x800(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x808(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          NormalStyle;                                       // 0x810(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterCreationDataRowHandle       CharacterCustomisationRow;                         // 0xA88(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FPreviewCameraSettingsEnum            CameraFocus;                                       // 0xAA0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         RotateColourDisplay;                               // 0xAB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_38D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          OverrideColor;                                     // 0xAB4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ToggleButton_ColorSelect_C* GetDefaultObj();

	void FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis);
	void GetImageButton(class UButton** ImageButton);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void AddColorSegment(const struct FLinearColor& Colour);
	void ExecuteUbergraph_UMG_ToggleButton_ColorSelect(int32 EntryPoint, class UUMG_ColorSegment_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FColor& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector2D& K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Colour);
};

}


