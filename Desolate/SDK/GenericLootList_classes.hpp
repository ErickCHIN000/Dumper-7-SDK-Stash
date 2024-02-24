#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x260 - 0x240)
// BlueprintGeneratedClass GenericLootList.GenericLootList_C
class AGenericLootList_C : public ASHLootList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_LootRecord>                 ListItems_DEPRECATED;                              // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericLootList_C* GetDefaultObj();

	void Roll_DEPRECATED(TArray<class UClass*>* Drop, int32 MaxDropCount, const TArray<class UClass*>& Result, class UClass* SpawnClass, float Random, float Summ, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FS_LootRecord& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericLootItem_C* K2Node_DynamicCast_AsGeneric_Loot_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LootRecord& CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2);
	void Rewrite();
	void ExecuteUbergraph_GenericLootList(int32 EntryPoint, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LootRecord& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSingleItemInfo& K2Node_MakeStruct_SingleItemInfo, int32 CallFunc_Array_Add_ReturnValue);
};

}


