#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass WB_Image_Raw.WB_Image_Raw_C
class UWB_Image_Raw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBackgroundBlur*                       Blur;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Naked_Image;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Image_Raw_C* GetDefaultObj();

	void SetColor(const struct FLinearColor& Color);
	void SetBackgroundBlur(bool IsEnabled, float BlurStrength);
	void ExecuteUbergraph_WB_Image_Raw(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_Color, bool K2Node_CustomEvent_IsEnabled, float K2Node_CustomEvent_BlurStrength);
};

}


