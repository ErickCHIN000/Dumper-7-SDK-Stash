#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_Vehicle_Weapon_Rotation.Init_Vehicle_Weapon_Rotation_C
class UInit_Vehicle_Weapon_Rotation_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_Vehicle_Weapon_Rotation_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetAssociatedVehicle_ReturnValue, class AOakVehicle* K2Node_DynamicCast_AsOak_Vehicle, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, const struct FStruct_VehicleMainWeaponRotation& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


