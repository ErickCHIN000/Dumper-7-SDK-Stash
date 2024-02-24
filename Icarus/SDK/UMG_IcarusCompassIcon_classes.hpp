#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3C8 - 0x308)
// WidgetBlueprintGeneratedClass UMG_IcarusCompassIcon.UMG_IcarusCompassIcon_C
class UUMG_IcarusCompassIcon_C : public UIcarusCompassIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Waypoint;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMapIconsData                         CachedMapIconData_0;                               // 0x318(0x98)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        FadeOutOverDistance_0;                             // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredOpacity;                                    // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOrchestrationEventsEnum              Event_to_Check;                                    // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_IcarusCompassIcon_C* GetDefaultObj();

	void OnMapComponentVisibilityChanged(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void ExecuteUbergraph_UMG_IcarusCompassIcon(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


