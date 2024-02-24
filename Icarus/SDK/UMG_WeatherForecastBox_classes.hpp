#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass UMG_WeatherForecastBox.UMG_WeatherForecastBox_C
class UUMG_WeatherForecastBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ForecastBox;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_WeatherForecast_C*                Timeline;                                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WeatherTier;                                       // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_203F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               TempImage;                                         // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_WeatherForecastBox_C* GetDefaultObj();

	void Initialize(int32 Tier);
	void SetupBoxColor();
	void SetBoxWidth(int32 NewWidth);
	void ExecuteUbergraph_UMG_WeatherForecastBox(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FWeatherTierIconRowHandle& CallFunc_MakeWeatherTierIconFromIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FWeatherTierIcon& CallFunc_GetWeatherTierIconStruct_WeatherTierIcon, enum class EValid CallFunc_GetWeatherTierIconStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_CustomEvent_NewWidth, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


