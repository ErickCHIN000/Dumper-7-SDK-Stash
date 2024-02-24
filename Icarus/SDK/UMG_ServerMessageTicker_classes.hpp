#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ServerMessageTicker.UMG_ServerMessageTicker_C
class UUMG_ServerMessageTicker_C : public UUserWidget
{
public:
	class UTextBlock*                            OutageMessage;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ServerMessageTicker_C* GetDefaultObj();

	void Update(const struct FMaintenanceStatus& Status, const struct FDateTime& CallFunc_ConvertToDateTime_ReturnValue, const struct FDateTime& CallFunc_ConvertToDateTime_ReturnValue_1, class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue, class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


