#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x320 - 0x2D8)
// WidgetBlueprintGeneratedClass WBP_Watermark.WBP_Watermark_C
class UWBP_Watermark_C : public UWatermarkWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Banner;                                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Banner;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Custom;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_EngineVersion;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_PlayerId;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_SmallClient;                                   // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Watermark;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Watermark_C* GetDefaultObj();

	void UpdatePresentation_Title(const struct FNWXWatermarkSettingsData& CallFunc_GetWatermarkSettingsData_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdatePresentation_SmallClientText(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FNWXWatermarkSettingsData& CallFunc_GetWatermarkSettingsData_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdatePresentation_PlayerId(const class FString& NewPlayerId, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdatePresentation_EngineVersion(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FNWXWatermarkSettingsData& CallFunc_GetWatermarkSettingsData_ReturnValue, const class FString& CallFunc_GetEngineVersion_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdatePresentation_CustomText(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FNWXWatermarkSettingsData& CallFunc_GetWatermarkSettingsData_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdatePresentation_Banner(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FNWXWatermarkSettingsData& CallFunc_GetWatermarkSettingsData_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateWatermarkPosition(float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
	void OnPlayerIdUpdated(const class FString& NewPlayerId);
	void OnWatermarkSettingsApplied(class UWatermarkSettings* NewWatermarkSettings);
	void ExecuteUbergraph_WBP_Watermark(int32 EntryPoint, class UWatermarkSettings* K2Node_Event_NewWatermarkSettings, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& K2Node_Event_NewPlayerId, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


