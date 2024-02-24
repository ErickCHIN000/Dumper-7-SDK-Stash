#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA78 - 0xA78)
// BlueprintGeneratedClass BP_Structure_RealmicTransmuter.BP_Structure_RealmicTransmuter_C
class ABP_Structure_RealmicTransmuter_C : public ABP_Structure_CraftingBench_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Structure_RealmicTransmuter_C* GetDefaultObj();

	void Activate_Complete_Crafting_Components();
	void Activate_Resume_Crafting_Components();
	void Activate_Pause_Crafting_Components();
	void Activate_Start_Crafting_Components();
	void GetRelevantCraftingData(bool* Success, struct FS_Crafting_CraftInProgress* CraftingData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue);
};

}


