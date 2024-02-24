#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_GlobalStatistics_EntrySmall.wid_BuildSystem_GlobalStatistics_EntrySmall_C
class UWid_BuildSystem_GlobalStatistics_EntrySmall_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Above;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Change;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Middle;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatName;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Under;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  StatID;                                            // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CurrentValueCpy;                                   // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Delta;                                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Subtractive;                                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuildGlobalStat                      StatInfo;                                          // 0x2B0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_GlobalStatistics_EntrySmall_C* GetDefaultObj();

	void Update(int32 NewDelta, bool Subtractive);
	void Construct();
	void ExecuteUbergraph_wid_BuildSystem_GlobalStatistics_EntrySmall(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Multiply_IntInt_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_BuildSystemGetGlobalStatValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Select_Default_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FBuildGlobalStat& CallFunc_BuildSystemGetGlobalStatInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default_2, int32 K2Node_CustomEvent_NewDelta, bool K2Node_CustomEvent_Subtractive, const struct FSlateColor& K2Node_Select_Default_3, float CallFunc_Conv_IntToFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, const struct FBuildGlobalStat& CallFunc_BuildSystemGetGlobalStatInfo_ReturnValue_1, float CallFunc_BuildSystemGetStatModifier_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_4, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_Divide_FloatFloat_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
};

}


