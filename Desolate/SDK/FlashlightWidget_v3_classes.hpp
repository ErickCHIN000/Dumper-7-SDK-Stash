#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x2B0 - 0x285)
// WidgetBlueprintGeneratedClass FlashlightWidget_v3.FlashlightWidget_v3_C
class UFlashlightWidget_v3_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1777[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Shake;                                             // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_5;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressImage;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    Player;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFlashlightWidget_v3_C* GetDefaultObj();

	struct FLinearColor Get_Border_0_BrushColor_0(const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue);
	struct FLinearColor Get_Fill_ColorAndOpacity_0(bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FLinearColor Get_RedBackground_ColorAndOpacity_0(bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void CheckShow();
	void ExecuteUbergraph_FlashlightWidget_v3(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1);
};

}


