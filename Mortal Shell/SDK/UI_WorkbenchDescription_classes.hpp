#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2B0 - 0x230)
// WidgetBlueprintGeneratedClass UI_WorkbenchDescription.UI_WorkbenchDescription_C
class UUI_WorkbenchDescription_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_RequiredItem;                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_RequiredItem;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_RequiredItem_Value;                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Upgrade_Description;                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Upgrade_Name;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_UpgradeDetails;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsShown;                                           // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasItem_;                                          // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UnlockedorMaxedOut_;                               // 0x27A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EWorkbenchItemType                UpgradeType;                                       // 0x27B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text_UpgradeObtained;                              // 0x280(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_UpgradeMaxed;                                 // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_WorkbenchDescription_C* GetDefaultObj();

	void SetUpgradeRequiredDesc(class UUI_WorkbenchItemNew_C* Widget, enum class EWorkbenchItemType Temp_byte_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void SetUpgradeDescription(class UUI_WorkbenchItemNew_C* Widget, bool Temp_bool_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default);
	void SetName(class UUI_WorkbenchItemNew_C* Widget, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void InstantReset();
	void Reset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetUpgradeInfo(class UUI_WorkbenchItemNew_C* Item, class UUI_WorkbenchItemNew_C* Local_Item, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_HasRequiredItem_HasIt_, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void ExecuteUbergraph_UI_WorkbenchDescription(int32 EntryPoint);
};

}


