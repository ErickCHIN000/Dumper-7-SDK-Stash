#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x5B0 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_NarrativeNpcMapPin.WBP_NarrativeNpcMapPin_C
class UWBP_NarrativeNpcMapPin_C : public UWBP_PlayerMapPin_C
{
public:

	static class UClass* StaticClass();
	static class UWBP_NarrativeNpcMapPin_C* GetDefaultObj();

	class UWidget* GetTooltipWidget(class UWBP_Tooltip_MapMarker_C* CallFunc_Create_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_GetTooltipTitleText_OutputText);
	void GetTooltipTitleText(class FText* OutputText, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
};

}


