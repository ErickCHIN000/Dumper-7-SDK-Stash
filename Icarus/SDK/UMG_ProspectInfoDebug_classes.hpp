#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x2A9 - 0x298)
// WidgetBlueprintGeneratedClass UMG_ProspectInfoDebug.UMG_ProspectInfoDebug_C
class UUMG_ProspectInfoDebug_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Info;                                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_ProspectInfoDebug_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ProspectInfoDebug(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool K2Node_Event_IsDesignTime, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue, bool CallFunc_HasActiveProspect_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const class FString& CallFunc_Conv_ByteToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2);
};

}


