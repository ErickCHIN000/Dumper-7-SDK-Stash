#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass wid_FloatingNoteDescription.wid_FloatingNoteDescription_C
class UWid_FloatingNoteDescription_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Description;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Header;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Notename;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Picture;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SelectionBorder;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             StartingPosition;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lerp;                                              // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Targetpositiion;                                   // 0x2AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_204C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            StartAnim;                                         // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_FloatingNoteDescription_C* GetDefaultObj();

	void Display(const struct FDataTableRowHandle& Input_row, bool IsCrucial);
	void Set_position(float Alpha);
	void ExecuteUbergraph_wid_FloatingNoteDescription(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_CustomEvent_Input_row, bool K2Node_CustomEvent_IsCrucial, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float K2Node_CustomEvent_Alpha, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3);
	void StartAnim__DelegateSignature();
};

}


