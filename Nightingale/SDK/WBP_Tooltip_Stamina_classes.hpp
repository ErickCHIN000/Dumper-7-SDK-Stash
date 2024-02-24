#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3E8 - 0x398)
// WidgetBlueprintGeneratedClass WBP_Tooltip_Stamina.WBP_Tooltip_Stamina_C
class UWBP_Tooltip_Stamina_C : public UNWXCoreStatCounterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          EffectBox;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_regenRate;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_RelatedEffects;                                // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_RestValue;                                     // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_StaminaValue;                                  // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_value_MaxChange;                               // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXAttributeSet*                      Attribute_Set;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       BPCharacter;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CachedMaxStamina;                                  // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Tooltip_Stamina_C* GetDefaultObj();

	void InitializeDesignerPreview(const struct FLinearColor& Temp_struct_Variable, class FText Temp_text_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateMaxChangedText(double MaxBaseValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void Refresh(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FGameplayTag& Temp_struct_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_FCeil_ReturnValue_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, float CallFunc_GetValue_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetValue_ReturnValue_1, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, int32 CallFunc_FCeil_ReturnValue_3, bool CallFunc_IsStateActive_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, bool CallFunc_IsStateActive_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_BooleanOR_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_BooleanOR_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1, double CallFunc_GetPlayerAttribute_Value, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, int32 CallFunc_FCeil_ReturnValue_4, class FText K2Node_Select_Default_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, double CallFunc_GetPlayerAttribute_Value_1, double CallFunc_UpdateMaxChangedText_MaxBaseValue_ImplicitCast, double CallFunc_FCeil_A_ImplicitCast, double CallFunc_FCeil_A_ImplicitCast_1, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_FCeil_A_ImplicitCast_2);
	void OnMaxStaminaChanged(float Delta);
	void BP_HandleAttributeChanged(float NewValue, float Delta);
	void GetPlayerAttribute(const struct FGameplayAttribute& NewAttribute, double* Value, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void TryAddTextFromTag(const struct FGameplayTag& Tag, class FText Text, const struct FLinearColor& Color, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsStateActive_ReturnValue);
	void OnTagsUpdated(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Tooltip_Stamina(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


