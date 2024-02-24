#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Structures_Fuel.BPFL_Structures_Fuel_C
class UBPFL_Structures_Fuel_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Structures_Fuel_C* GetDefaultObj();

	void PopulateFuelDataFromTable(class AActor* Structure, class UObject* __WorldContext, class UBP_StructureFuelComponent_C** FuelComponent, class UBP_StructureFuelComponent_C* LFuelComponent, class UBP_StructureFuelComponent_C* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_IsStructureFuellable_IsFuellable);
	void IsStructureFuellable(class UObject* Target, class UObject* __WorldContext, bool* IsFuellable, TSoftObjectPtr<class UStructureInteractionDataAsset> Fuel, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetPostConstructionInteractionData_IsValid, class UStructurePostConstructionInteractionData* CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData, TArray<struct FStructureData_Interaction>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FStructureData_Interaction& CallFunc_Array_Get_Item, TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


