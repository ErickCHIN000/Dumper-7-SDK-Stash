#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Items_Traits.BPFL_Items_Traits_C
class UBPFL_Items_Traits_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Items_Traits_C* GetDefaultObj();

	class UClass* GetCharacteristicClass(class UObject* __WorldContext);
	TArray<class UCharacteristicDataAsset*> GetAllCharacteristics(class UObject* __WorldContext, const TArray<class UCharacteristicDataAsset*>& Characteristics, TSet<struct FTopLevelAssetPath> Temp_struct_Variable, TArray<struct FTopLevelAssetPath>& Temp_struct_Variable_1, TArray<struct FSoftObjectPath>& Temp_struct_Variable_2, TArray<class FName>& Temp_name_Variable, TArray<class FName>& Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSet<class FName> Temp_name_Variable_2, class UClass* CallFunc_GetCharacteristicClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, const struct FARFilter& CallFunc_MakeARFilter_ReturnValue, TArray<class UObject*>& CallFunc_GetAllAssetsByFilter_Objects, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UCharacteristicDataAsset* K2Node_DynamicCast_AsCharacteristic_Data_Asset, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
};

}


