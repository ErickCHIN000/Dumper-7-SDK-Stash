#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UMG_WeatherEventTimelineIcon.UMG_WeatherEventTimelineIcon_C
class UUMG_WeatherEventTimelineIcon_C : public UUserWidget
{
public:
	class UImage*                                WeatherActionImage;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WeatherTailBar;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_WeatherEventTimeline_C*           Timeline;                                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FWeatherActionsRowHandle              WeatherActionRowHandle;                            // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_WeatherEventTimelineIcon_C* GetDefaultObj();

	void SetupIcon(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FWeatherActionsRowHandle& CallFunc_MakeLiteralWeatherActions_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FIcarusWeatherActionData& CallFunc_GetWeatherActionsStruct_WeatherActions, enum class EValid CallFunc_GetWeatherActionsStruct_Paths, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, enum class ESleepResult CallFunc_CanSleep_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_EqualEqual_FWeatherActionsRowHandleFWeatherActionsRowHandle_ReturnValue, const struct FIcarusWeatherActionData& CallFunc_GetWeatherActionsStruct_WeatherActions_1, enum class EValid CallFunc_GetWeatherActionsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FIcarusWeatherActionData& Temp_wildcard_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FSlateBrush& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_Select_Default_1);
	void Initialise(const struct FWeatherActionsRowHandle& WeatherAction, float LifeTime, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FIcarusWeatherActionData& CallFunc_GetWeatherActionsStruct_WeatherActions, enum class EValid CallFunc_GetWeatherActionsStruct_Paths, const struct FVector2D& CallFunc_GetSize_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


