#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehicleHealthComponent.VehicleHealthComponent_C
// (None)

class UClass* UVehicleHealthComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleHealthComponent_C");

	return Clss;
}


// VehicleHealthComponent_C VehicleHealthComponent.Default__VehicleHealthComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicleHealthComponent_C* UVehicleHealthComponent_C::GetDefaultObj()
{
	static class UVehicleHealthComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleHealthComponent_C*>(UVehicleHealthComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleHealthComponent.VehicleHealthComponent_C.UpdateUIHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicleHealthComponent_C::UpdateUIHealth(double Health, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHealthComponent_C", "UpdateUIHealth");

	Params::UVehicleHealthComponent_C_UpdateUIHealth_Params Parms{};

	Parms.Health = Health;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleHealthComponent.VehicleHealthComponent_C.AddHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             HealthPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicleHealthComponent_C::AddHealth(double HealthPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHealthComponent_C", "AddHealth");

	Params::UVehicleHealthComponent_C_AddHealth_Params Parms{};

	Parms.HealthPercent = HealthPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleHealthComponent.VehicleHealthComponent_C.LoadComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVehicleHealthComponent_C::LoadComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHealthComponent_C", "LoadComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VehicleHealthComponent.VehicleHealthComponent_C.ExecuteUbergraph_VehicleHealthComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HealthPercent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UVehicleHealthComponent_C::ExecuteUbergraph_VehicleHealthComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, double K2Node_CustomEvent_HealthPercent, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHealthComponent_C", "ExecuteUbergraph_VehicleHealthComponent");

	Params::UVehicleHealthComponent_C_ExecuteUbergraph_VehicleHealthComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_HealthPercent = K2Node_CustomEvent_HealthPercent;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleHealthComponent.VehicleHealthComponent_C.FuelUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FuelInput                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicleHealthComponent_C::FuelUpdate__DelegateSignature(double FuelInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHealthComponent_C", "FuelUpdate__DelegateSignature");

	Params::UVehicleHealthComponent_C_FuelUpdate__DelegateSignature_Params Parms{};

	Parms.FuelInput = FuelInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


