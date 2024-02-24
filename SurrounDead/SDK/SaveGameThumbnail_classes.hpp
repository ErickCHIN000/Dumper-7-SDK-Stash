#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// WidgetBlueprintGeneratedClass SaveGameThumbnail.SaveGameThumbnail_C
class USaveGameThumbnail_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Thumbnail;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USaveGameThumbnail_C* GetDefaultObj();

	void SetThumbnail(class UTexture2D* Texture);
	void ClearThumbnail();
	void ExecuteUbergraph_SaveGameThumbnail(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture2D* K2Node_CustomEvent_Texture, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast);
};

}


