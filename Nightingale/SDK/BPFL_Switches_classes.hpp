#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Switches.BPFL_Switches_C
class UBPFL_Switches_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Switches_C* GetDefaultObj();

	void Get_Surface_Switch(class UPhysicalMaterial* Material, class UObject* __WorldContext, class UAkSwitchValue** SWITCH, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess);
	void Apply_Switches(class UAkComponent* Ak_Component, TArray<class UAkSwitchValue*>& Switches, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UAkSwitchValue* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


