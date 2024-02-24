#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Image_Raw.WB_Image_Raw_C
class UWB_Image_Raw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       Blur;                                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Naked_Image;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Image_Raw_C* GetDefaultObj();

	void SetColor(const struct FLinearColor& Color);
	void SetBackgroundBlur(bool IsEnabled, double BlurStrength);
	void ExecuteUbergraph_WB_Image_Raw(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_Color, bool K2Node_CustomEvent_IsEnabled, double K2Node_CustomEvent_BlurStrength, float CallFunc_SetBlurStrength_InStrength_ImplicitCast);
};

}


