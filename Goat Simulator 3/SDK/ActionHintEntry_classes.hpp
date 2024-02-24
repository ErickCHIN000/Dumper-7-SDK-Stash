#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2EC - 0x2A8)
// WidgetBlueprintGeneratedClass ActionHintEntry.ActionHintEntry_C
class UActionHintEntry_C : public UGGActionHintBarEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             FaceButtonScaleBox;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuNavigationFaceButton_C*           MenuNavigationFaceButton;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EActionHintPosition               HintPosition;                                      // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_F36[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxBackgroundRotation;                             // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParentIndex;                                       // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        IndexShift;                                        // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TmpCnt;                                            // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowInteractable;                                  // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MobileScaleMultiplier;                             // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActionHintEntry_C* GetDefaultObj();

	void UpdateInteractableState(float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, float Temp_float_Variable_3, float Temp_float_Variable_4, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility K2Node_Select_Default_1, float Temp_float_Variable_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable_3, float K2Node_Select_Default_2, float K2Node_Select_Default_3, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_BooleanAND_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnHintUpdated();
	void OnGamepadChanged(bool bActive);
	void OnInitialized();
	void OnHovered_Event_0();
	void OnUnhovered_Event_0();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ActionHintEntry(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_CustomEvent_bActive, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
};

}


