#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x27C - 0x258)
// BlueprintGeneratedClass BP_Vessel_Halloween.BP_Vessel_Halloween_C
class ABP_Vessel_Halloween_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_TargetIndicatorComponent_C*        BP_TargetIndicatorComponent;                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           Body_Unlock;                                       // 0x268(0x10)(Edit, BlueprintVisible)
	int32                                        Color;                                             // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Vessel_Halloween_C* GetDefaultObj();

	void Interaction();
	void Game_Load();
	void ShowJar();
	void Hide_Jar();
	void ExecuteUbergraph_BP_Vessel_Halloween(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


