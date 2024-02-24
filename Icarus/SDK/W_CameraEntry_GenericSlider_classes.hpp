#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x330 - 0x31C)
// WidgetBlueprintGeneratedClass W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C
class UW_CameraEntry_GenericSlider_C : public UW_PostProcessEntry_Slider_C
{
public:
	uint8                                        Pad_40BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MinValue;                                          // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxValue;                                          // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_CameraEntry_GenericSlider_C* GetDefaultObj();

	void SetupSliderValues(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void InitFromSaveGameValue(const struct FFPostProcessSaveData& Value);
	void InitFromDefaultValue();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_CameraEntry_GenericSlider(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


