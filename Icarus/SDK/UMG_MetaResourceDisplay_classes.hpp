#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x320 - 0x298)
// WidgetBlueprintGeneratedClass UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C
class UUMG_MetaResourceDisplay_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                            CurrencyGrid;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FMetaCurrencyRowHandle, class UUMG_WorkshopCostLarge_C*> Row_Handle;                                        // 0x2B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         UseOverride;                                       // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3AAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaResource>                 OverrideResources;                                 // 0x308(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        MaxItemsPerRow;                                    // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        GridVerticalSpacing;                               // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_MetaResourceDisplay_C* GetDefaultObj();

	void CreateWidgets(int32 Index, int32 XMax, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FMetaCurrencyEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMetaCurrencyRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_WorkshopCostLarge_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Update(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FMetaCurrencyRowHandle>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMetaCurrencyRowHandle& CallFunc_Array_Get_Item, class UUMG_WorkshopCostLarge_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FMetaResource& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FMetaCurrencyRowHandle& CallFunc_MakeMetaCurrency_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UUMG_WorkshopCostLarge_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, int32 CallFunc_GetAvailableMetaResource_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void TryInit();
	void ExecuteUbergraph_UMG_MetaResourceDisplay(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


