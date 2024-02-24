#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_UMGFunctionLibrary.BP_UMGFunctionLibrary_C
class UBP_UMGFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_UMGFunctionLibrary_C* GetDefaultObj();

	void Get_Prospect_Pin_State_Data(enum class E_ProspectState Prospect_State, class UObject* __WorldContext, struct FFProspectPinState* Prospect_Pin_State, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFProspectPinState& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


