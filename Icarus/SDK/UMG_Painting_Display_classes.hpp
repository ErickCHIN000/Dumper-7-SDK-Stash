#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UMG_Painting_Display.UMG_Painting_Display_C
class UUMG_Painting_Display_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Icon;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPaintingsRowHandle                   CurrentPaintingRow;                                // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Painting_Size;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Painting_Display_C* GetDefaultObj();

	bool IsSmallPainting(class AActor* LinkedActor, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue);
	void UpdatePaintingDisplay(const struct FPaintingsRowHandle& PaintingRow, class AActor* LinkedActor);
	void ExecuteUbergraph_UMG_Painting_Display(int32 EntryPoint, bool Temp_bool_Variable, const struct FPaintingData& CallFunc_GetPaintingsStruct_Paintings, enum class EValid CallFunc_GetPaintingsStruct_Paths, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_wildcard_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FPaintingsRowHandle& K2Node_CustomEvent_PaintingRow, class AActor* K2Node_CustomEvent_LinkedActor, bool CallFunc_IsSmallPainting_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


