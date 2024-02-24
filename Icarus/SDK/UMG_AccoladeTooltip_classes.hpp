#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x145 (0x3A5 - 0x260)
// WidgetBlueprintGeneratedClass UMG_AccoladeTooltip.UMG_AccoladeTooltip_C
class UUMG_AccoladeTooltip_C : public UUserWidget
{
public:
	class UImage*                                AccoladeImage;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_2;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CompleteDate;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Description;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Gradient;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProgressText;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RankProgressBar;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RankProgressBorder;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Status;                                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               StatusBorder;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TalentName;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     TaskGrid;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TooltipSizeBox;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAccoladesRowHandle                   Accolade;                                          // 0x2E8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CompletedTitle_Colour;                             // 0x300(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FF_ChallengeState                     Base;                                              // 0x328(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        TaskGridColumns;                                   // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultTooltipWidth;                               // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TaskListTooltipWidth;                              // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Achievement;                                       // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_AccoladeTooltip_C* GetDefaultObj();

	void UpdateState(int32 CurrentValue, int32 MaxValue, const struct FDateTime& CompletedTime, bool Complete, TArray<struct FAccoladeTaskState>& TaskStates, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class FText Temp_text_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class FText Temp_text_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, const struct FAccoladeTaskState& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Percent_IntInt_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_AccoladeTaskItem_C* CallFunc_Create_ReturnValue, class FText CallFunc_AsTimeZoneDate_DateTime_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_5, int32 CallFunc_Min_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1);
	void Init(const struct FAccoladesRowHandle& Accolade, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, bool Temp_bool_Variable_2, float Temp_float_Variable, bool Temp_bool_Variable_3, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_4, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, bool Temp_bool_Variable_5, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, bool Temp_bool_Variable_6, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, float K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_3, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_4, float K2Node_Select_Default_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_6);
};

}


