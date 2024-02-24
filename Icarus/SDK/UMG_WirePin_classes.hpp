#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UMG_WirePin.UMG_WirePin_C
class UUMG_WirePin_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Pin;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_WirePin_C* GetDefaultObj();

	void GetPinSize(struct FVector2D* Size);
	void SetPinColour(const struct FLinearColor& InColorAndOpacity);
	void ExecuteUbergraph_UMG_WirePin(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_InColorAndOpacity);
};

}


