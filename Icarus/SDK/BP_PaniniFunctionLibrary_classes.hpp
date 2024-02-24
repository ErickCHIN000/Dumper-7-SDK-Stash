#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PaniniFunctionLibrary.BP_PaniniFunctionLibrary_C
class UBP_PaniniFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_PaniniFunctionLibrary_C* GetDefaultObj();

	void SetPaniniEnabledForPrimitive(class UPrimitiveComponent* Primitive, bool Enabled, class UObject* __WorldContext, int32 CallFunc_GetNumMaterials_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UMaterialInstanceDynamic* Temp_wildcard_Variable, int32 Temp_int_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateActorPanini(class AActor* Target, bool Enabled, class UObject* __WorldContext, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UWidgetComponent* K2Node_DynamicCast_AsWidget_Component, bool K2Node_DynamicCast_bSuccess, class UFXSystemComponent* K2Node_DynamicCast_AsFXSystem_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


