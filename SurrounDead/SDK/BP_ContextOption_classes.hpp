#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// WidgetBlueprintGeneratedClass BP_ContextOption.BP_ContextOption_C
class UBP_ContextOption_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Option;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt;                                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_ContextOption_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void SetContextOption(bool Active_);
	void ExecuteUbergraph_BP_ContextOption(int32 EntryPoint, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FSlateBrushOutlineSettings& K2Node_MakeStruct_SlateBrushOutlineSettings, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrushOutlineSettings& K2Node_MakeStruct_SlateBrushOutlineSettings_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Active_);
};

}


