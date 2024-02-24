#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_AccoladeList.UMG_AccoladeList_C
class UUMG_AccoladeList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Angle_1;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TypeText;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_670;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerAccoladeCategoriesRowHandle    Category;                                          // 0x280(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UUMG_PlayerAccolade_C*>         AccoladeWidgets;                                   // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_AccoladeList_C* GetDefaultObj();

	void RefreshState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUMG_PlayerAccolade_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Init(const struct FPlayerAccoladeCategoriesRowHandle& Category, TArray<struct FAccoladesRowHandle>& Accolades, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UUMG_PlayerAccolade_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue, bool Temp_bool_Variable_1, const struct FAccoladesRowHandle& CallFunc_Array_Get_Item, class FText K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1, const struct FMargin& K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_AccoladeList(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue, bool Temp_bool_Variable_1, const struct FAccoladesRowHandle& Temp_struct_Variable, const struct FAccoladesRowHandle& Temp_struct_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_3, const struct FAccoladesRowHandle& Temp_struct_Variable_2, class FText K2Node_Select_Default, int32 Temp_int_Variable, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMG_PlayerAccolade_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_2, const struct FAccoladesRowHandle& K2Node_Select_Default_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, const struct FAccoladesRowHandle& K2Node_Select_Default_2, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default_3);
};

}


