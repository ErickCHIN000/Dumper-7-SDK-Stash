#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A4 (0x404 - 0x260)
// WidgetBlueprintGeneratedClass wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C
class UWid_PDA_Menu_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DarkerHighlight;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HighlightSizeBox;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LighterHighlight;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        SelectedFont;                                      // 0x298(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        UnselectedFont;                                    // 0x2F0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         CurrentSelection;                                  // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           SelectedColor;                                     // 0x350(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           UnselectedColor;                                   // 0x378(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TabName;                                           // 0x3A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Index;                                             // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2010[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_PDA_Menu_C*                       Owner;                                             // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2016[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           LockedColor;                                       // 0x3D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  ID;                                                // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        HightlightOverflow;                                // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_PDA_Menu_Entry_C* GetDefaultObj();

	void GetBoardSelectedIndex(int32* Index, bool* Valid, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_Index, bool CallFunc_IsValid_ReturnValue);
	void Select(bool Select, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32 CallFunc_GetBoardSelectedIndex_Index, bool CallFunc_GetBoardSelectedIndex_Valid, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateFontInfo& K2Node_Select_Default_3);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_wid_PDA_Menu_Entry(int32 EntryPoint, int32 CallFunc_GetBoardSelectedIndex_Index, bool CallFunc_GetBoardSelectedIndex_Valid, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


