#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_CustomStatistics_Entry.wid_BuildSystem_CustomStatistics_Entry_C
class UWid_BuildSystem_CustomStatistics_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Above;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Change;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_2;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Middle;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatName;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Under;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  StatID;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CurrentValueCpy;                                   // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Delta;                                             // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Subtractive;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuildGlobalStat                      StatInfo;                                          // 0x2B8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MiddleOffset;                                      // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reversed;                                          // 0x304(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1803[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scalar;                                            // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        NormalValue;                                       // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_CustomStatistics_Entry_C* GetDefaultObj();

	void Construct();
	void Update(int32 NewDelta, bool Subtractive);
	void ExecuteUbergraph_wid_BuildSystem_CustomStatistics_Entry(int32 EntryPoint, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetCustomGlobalStatValue_Value, bool CallFunc_GetCustomGlobalStatValue_Unknown, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FBuildGlobalStat& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FBuildGlobalStat& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, bool Temp_bool_Variable_3, int32 CallFunc_SelectInt_ReturnValue, int32 K2Node_Select_Default_3, int32 CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 K2Node_CustomEvent_NewDelta, bool K2Node_CustomEvent_Subtractive, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
};

}


