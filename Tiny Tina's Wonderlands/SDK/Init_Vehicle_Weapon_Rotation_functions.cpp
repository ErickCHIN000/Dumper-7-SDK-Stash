#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Vehicle_Weapon_Rotation.Init_Vehicle_Weapon_Rotation_C
// (None)

class UClass* UInit_Vehicle_Weapon_Rotation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Vehicle_Weapon_Rotation_C");

	return Clss;
}


// Init_Vehicle_Weapon_Rotation_C Init_Vehicle_Weapon_Rotation.Default__Init_Vehicle_Weapon_Rotation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Vehicle_Weapon_Rotation_C* UInit_Vehicle_Weapon_Rotation_C::GetDefaultObj()
{
	static class UInit_Vehicle_Weapon_Rotation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Vehicle_Weapon_Rotation_C*>(UInit_Vehicle_Weapon_Rotation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Vehicle_Weapon_Rotation.Init_Vehicle_Weapon_Rotation_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetAssociatedVehicle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakVehicle*                 K2Node_DynamicCast_AsOak_Vehicle                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_VehicleMainWeaponRotationCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

float UInit_Vehicle_Weapon_Rotation_C::CalculateAttributeInitialValue(class UObject* Context, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetAssociatedVehicle_ReturnValue, class AOakVehicle* K2Node_DynamicCast_AsOak_Vehicle, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, const struct FStruct_VehicleMainWeaponRotation& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Vehicle_Weapon_Rotation_C", "CalculateAttributeInitialValue");

	Params::UInit_Vehicle_Weapon_Rotation_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAssociatedVehicle_ReturnValue = CallFunc_GetAssociatedVehicle_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Vehicle = K2Node_DynamicCast_AsOak_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


