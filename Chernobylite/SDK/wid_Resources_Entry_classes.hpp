#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass wid_Resources_Entry.wid_Resources_Entry_C
class UWid_Resources_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            Amount;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Amount_Sign;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NewAmount;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Required;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Strike;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  ResourceID;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         RequirementsMet;                                   // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Resources_Entry_C* GetDefaultObj();

	void Update(float ComparedAmount, float Amount, class FName RowName, float AmountNoPerks, bool Temp_bool_Variable, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, class FText K2Node_Select_Default, class FText CallFunc_Conv_FloatToText_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_2, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_4, class UTexture2D* K2Node_Select_Default_3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Resources_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


