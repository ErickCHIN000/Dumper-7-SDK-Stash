#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A8 (0x818 - 0x470)
// WidgetBlueprintGeneratedClass UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C
class UUMG_TopLevelButton_ResumeLast_C : public UUMG_ButtonBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CornerHovers;                                      // 0x478(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnimation;                                    // 0x480(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            ButtonText;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CategoryImage;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionText;                                   // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              DescriptionTextBox;                                // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HostName;                                          // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HoverCorners;                                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_48;                                          // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MainSizeBox;                                       // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OuterFrame;                                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          NormalStyle;                                       // 0x4F0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Width;                                             // 0x768(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_54E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CategoryImageVariable;                             // 0x770(0x88)(Edit, BlueprintVisible)
	bool                                         IsOrange;                                          // 0x7F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SetDescriptionText;                                // 0x800(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_TopLevelButton_ResumeLast_C* GetDefaultObj();

	void OrangeButton(const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis);
	void GetImageButton(class UButton** ImageButton);
	void GetButtonText(class UTextBlock** ButtonText);
	void OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E(const struct FGetIcarusPlayerPersonaResult& Result);
	void OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E(const struct FGetIcarusPlayerPersonaResult& Result);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetLastProspectInfo(const struct FAssociatedProspectInfo& AssociatedProspect);
	void ExecuteUbergraph_UMG_TopLevelButton_ResumeLast(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result, const struct FGetIcarusPlayerPersonaResult& Temp_struct_Variable, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FAssociatedProspectInfo& K2Node_CustomEvent_AssociatedProspect, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, class URequestPlayerPersona* CallFunc_IcarusRequestPlayerPersona_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


