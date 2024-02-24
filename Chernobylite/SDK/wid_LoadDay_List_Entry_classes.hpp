#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x370 - 0x260)
// WidgetBlueprintGeneratedClass wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C
class UWid_LoadDay_List_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            NameAndTime;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NameSB;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NormalImage;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SaveSB;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SaveType;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_2;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SelectionButton;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionImage;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        EntryIndex;                                        // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryOwnerInterface_C> SelectableEntryOwner;                              // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FText                                  DayText;                                           // 0x2C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                SaveName;                                          // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDaySelected;                                     // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCustomSaveGameMetadataInfo           MetaData;                                          // 0x2F8(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  SaveTypeText;                                      // 0x348(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_LoadDay_List_Entry_C* GetDefaultObj();

	void GetEntryIndex(int32* EntryIndex);
	void Init(const class FString& SaveName, class FText DayText);
	void PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetSelected(bool IsSelected, bool PlaySoundEffect, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IncrementValue();
	void DecrementValue();
	void IncrementValueRelesed();
	void DecrementValueReleased();
	void SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner);
	void Select(bool IsSelected, bool PostSoundEvent);
	void SetEntryIndex(int32 EntryIndex);
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_LoadDay_List_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsPressed_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText CallFunc_TextToUpper_ReturnValue_1);
	void OnHovered__DelegateSignature(class UWid_LoadDay_List_Entry_C* Entry);
	void OnDaySelected__DelegateSignature(const class FString& SaveName);
};

}


