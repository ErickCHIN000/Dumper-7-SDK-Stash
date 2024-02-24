#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RecipeElementImageMulti.UMG_RecipeElementImageMulti_C
class UUMG_RecipeElementImageMulti_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_IcarusGrid_C*                     UMG_IcarusGrid;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FItemData>                     Outputs;                                           // 0x270(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_RecipeElementImageMulti_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_RecipeElementImageMulti(int32 EntryPoint, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FItemData& CallFunc_Array_Get_Item, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue);
};

}


