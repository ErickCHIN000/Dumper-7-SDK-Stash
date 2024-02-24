#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x450 - 0x430)
// BlueprintGeneratedClass BP_StructureFuelComponent.BP_StructureFuelComponent_C
class UBP_StructureFuelComponent_C : public UStructureFuelComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          FuelTickHandle_Old;                                // 0x438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDraining_Old;                                    // 0x440(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DEFAULT_CONSUMPTION_TIME_Old;                      // 0x448(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureFuelComponent_C* GetDefaultObj();

	TArray<struct FItemConstraint> GetRequiredItemTags(const TArray<struct FItemConstraint>& ConstraintsReturnArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void Stop_Fuel_Consumption_and_Extinguish_Fire(class UStructureFireComponent* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IStructureFireInterface> K2Node_DynamicCast_AsStructure_Fire_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureFireComponent* CallFunc_GetStructureFireComponentForModify_ReturnValue);
	void StopFuelConsumption(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void StartFuelConsumption(bool CallFunc_HasFuelAvailable_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void ReceiveBeginPlay();
	void CallStopDrainingAndExtinguish();
	void ExecuteUbergraph_BP_StructureFuelComponent(int32 EntryPoint, class UStructureFireComponent* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStructureFireInterface> K2Node_DynamicCast_AsStructure_Fire_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureFireComponent* CallFunc_GetStructureFireComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


