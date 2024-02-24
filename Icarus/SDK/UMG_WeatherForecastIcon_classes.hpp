#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C
class UUMG_WeatherForecastIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ForecastIcon;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_WeatherForecast_C*                Timeline;                                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WeatherTier;                                       // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               TempImage;                                         // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_WeatherForecastIcon_C* GetDefaultObj();

	void Initialize(int32 Tier);
	void OnLoaded_CB8AC3624660E4D222EE8F8FA46D155E(class UObject* Loaded);
	void SetupIcon();
	void ExecuteUbergraph_UMG_WeatherForecastIcon(int32 EntryPoint, bool Temp_bool_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FWeatherTierIconRowHandle& CallFunc_MakeWeatherTierIconFromIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FWeatherTierIcon& CallFunc_GetWeatherTierIconStruct_WeatherTierIcon, enum class EValid CallFunc_GetWeatherTierIconStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_Select_Default);
};

}


