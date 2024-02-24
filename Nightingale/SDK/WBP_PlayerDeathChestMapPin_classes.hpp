#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5B8 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C
class UWBP_PlayerDeathChestMapPin_C : public UWBP_PlayerMapPin_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_PlayerDeathChestMapPin_C* GetDefaultObj();

	void GetTooltipBodyText(class FText* OutputText, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GetTooltipCoordText(class FText* OutputText, class FText CallFunc_Conv_VectorToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetTooltipTitleText(class FText* OutputText, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_PlayerDeathChestMapPin(int32 EntryPoint);
};

}


