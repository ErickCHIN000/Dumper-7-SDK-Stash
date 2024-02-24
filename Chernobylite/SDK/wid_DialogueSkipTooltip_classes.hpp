#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2A1 - 0x260)
// WidgetBlueprintGeneratedClass wid_DialogueSkipTooltip.wid_DialogueSkipTooltip_C
class UWid_DialogueSkipTooltip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LeftText;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RightText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                Wid_ButtonIndicator;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CheckSkippable;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_DialogueSkipTooltip_C* GetDefaultObj();

	void Update(bool CallFunc_SetText_Success, bool CallFunc_SetText_Success_1);
	void SetText(class FText Text, bool* Success, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void BindPhotomodeToggled();
	void UnbindPhotomodeToggled();
	void PhotomodeChanged(bool bIsActivated);
	void ExecuteUbergraph_wid_DialogueSkipTooltip(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetIsSkippable_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default_1);
};

}


