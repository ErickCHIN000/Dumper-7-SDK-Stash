#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass WeatherRow.WeatherRow_C
class UWeatherRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  WeatherEventName;                                  // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWeatherEventsRowHandle               WeatherEvent;                                      // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWeatherRow_C* GetDefaultObj();

	void AddWeather(class FName AddWeatherEvent);
	void ExecuteUbergraph_WeatherRow(int32 EntryPoint, class FName K2Node_CustomEvent_AddWeatherEvent, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FWeatherEventsRowHandle& CallFunc_MakeWeatherEvents_ReturnValue);
};

}


