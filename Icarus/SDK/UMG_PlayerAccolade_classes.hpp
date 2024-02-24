#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UMG_PlayerAccolade.UMG_PlayerAccolade_C
class UUMG_PlayerAccolade_C : public UUserWidget
{
public:
	class UImage*                                Image_52;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_59;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAccoladesRowHandle                   Accolade;                                          // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUMG_AccoladeTooltip_C*                AccoladeTooltip;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_PlayerAccolade_C* GetDefaultObj();

	void RefreshState(const TArray<struct FAccoladeTaskState>& TaskStates, float Progress, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, TArray<struct FAccoladeTaskState>& CallFunc_GetAccoladeTaskStates_ReturnValue, bool CallFunc_IsTaskListAccolade_ReturnValue, int32 CallFunc_GetAccoladeProgress_CurrentValue, int32 CallFunc_GetAccoladeProgress_MaxValue, const struct FDateTime& CallFunc_GetAccoladeProgress_TimeCompleted, bool CallFunc_GetAccoladeProgress_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void Init(const struct FAccoladesRowHandle& Accolade, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, bool Temp_bool_Variable_3, class UUMG_AccoladeTooltip_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_4, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, bool Temp_bool_Variable_5, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_6, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, float K2Node_Select_Default_2, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_3, float K2Node_Select_Default_4, const struct FVector2D& K2Node_Select_Default_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_6);
};

}


