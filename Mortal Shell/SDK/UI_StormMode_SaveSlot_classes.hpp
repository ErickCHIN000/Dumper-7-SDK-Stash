#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C0 (0x6F0 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_SaveSlot.UI_StormMode_SaveSlot_C
class UUI_StormMode_SaveSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_SlotNumber;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Date_StormMode;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Deaths_Value;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpse_StormMode;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Location_StormMode;                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_NoStormMode;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Playtime_StormMode;                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Successes_Value;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_StormMode;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SlotData;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SlotNumber;                                        // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeSave                 SaveData;                                          // 0x290(0x458)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1A9E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUI_StormMode_SaveSlot_C* GetDefaultObj();

	void SetSlotNumber(bool Update, int32 SlotNumber, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, int32 Temp_int_Variable, class UTexture2D* K2Node_Select_Default);
	class FText GetDateTime(int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_FixTime_ReturnValue_3, const class FString& CallFunc_FixTime_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FText CallFunc_Conv_StringToText_ReturnValue);
	void NamedInts(class FName Key, int32* Value, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	class FText GetLocation(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText CallFunc_GetLocationNameFromMapName_Location, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default);
	class FString FixTime(int32 InputPin, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	class FText GetPlaytime(int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void PopulateStormModeSlot(const struct FStruct_StormModeSave& SaveData, bool SlotAvailable, int32 CallFunc_NamedInts_Value, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_NamedInts_Value_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_NamedInts_Value_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, int32 CallFunc_NamedInts_Value_3, class FText CallFunc_Conv_IntToText_ReturnValue_3, class FText CallFunc_GetLocation_ReturnValue, class FText CallFunc_GetPlaytime_ReturnValue, class FText CallFunc_GetDateTime_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_StormMode_SaveSlot(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


