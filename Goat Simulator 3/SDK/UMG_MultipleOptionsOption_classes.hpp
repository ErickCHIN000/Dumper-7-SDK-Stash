#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x368 - 0x358)
// WidgetBlueprintGeneratedClass UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C
class UUMG_MultipleOptionsOption_C : public UGGMultipleOptionsOptionUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Pages;                                             // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_MultipleOptionsOption_C* GetDefaultObj();

	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_IsKeyEventFromAction_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue_2);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void RefreshPages();
	void SetActivePage(int32 NewIndex);
	void OnInitialized();
	void ExecuteUbergraph_UMG_MultipleOptionsOption(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_NewIndex, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_GetNumAvailableOptions_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


