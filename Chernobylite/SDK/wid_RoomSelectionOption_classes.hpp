#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass wid_RoomSelectionOption.wid_RoomSelectionOption_C
class UWid_RoomSelectionOption_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  NameKey;                                           // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Disabled;                                          // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DescKey;                                           // 0x284(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EventParam;                                        // 0x28C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSt_ItemByEnumAndCount>        Cost;                                              // 0x298(0x10)(Edit, BlueprintVisible)
	class UClass*                                SkillTree;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                            RoomIcon;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            RoomDescImage;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Dictionary;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x2C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   RoomDataKey;                                       // 0x2E0(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	class FString                                Kurwa;                                             // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_RoomSelectionOption_C* GetDefaultObj();

	void UseUpResources(float StorageCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value, bool CallFunc_MapEnumItemNamesToEResourceType_Found, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Remove_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void CanBeBought(bool* Can, bool CallFunc_DoesThePlayerHaveItems_Has_enough_items);
	struct FSlateColor GetColorAndOpacity_0(const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	class FText GetText_0(class FText CallFunc_GetTextFromDictionary_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_RoomSelectionOption(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSt_RoomData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_GetText_0_ReturnValue, const struct FSlateColor& CallFunc_GetColorAndOpacity_0_ReturnValue, class FText CallFunc_GetTextFromDictionary_Text);
};

}


