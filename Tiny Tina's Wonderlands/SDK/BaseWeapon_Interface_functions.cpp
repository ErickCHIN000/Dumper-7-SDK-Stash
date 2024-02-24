#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWeapon_Interface.BaseWeapon_Interface_C
// (None)

class UClass* IBaseWeapon_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWeapon_Interface_C");

	return Clss;
}


// BaseWeapon_Interface_C BaseWeapon_Interface.Default__BaseWeapon_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBaseWeapon_Interface_C* IBaseWeapon_Interface_C::GetDefaultObj()
{
	static class IBaseWeapon_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBaseWeapon_Interface_C*>(IBaseWeapon_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseWeapon_Interface.BaseWeapon_Interface_C.BPAnim_Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FiregripType                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GripType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScopeType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ModeType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBaseWeapon_Interface_C::BPAnim_Data(float* FiregripType, float* GripType, float* ScopeType, float* ModeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseWeapon_Interface_C", "BPAnim_Data");

	Params::IBaseWeapon_Interface_C_BPAnim_Data_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FiregripType != nullptr)
		*FiregripType = Parms.FiregripType;

	if (GripType != nullptr)
		*GripType = Parms.GripType;

	if (ScopeType != nullptr)
		*ScopeType = Parms.ScopeType;

	if (ModeType != nullptr)
		*ModeType = Parms.ModeType;

}


// Function BaseWeapon_Interface.BaseWeapon_Interface_C.GetChargePercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChargePercent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBaseWeapon_Interface_C::GetChargePercent(float* ChargePercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseWeapon_Interface_C", "GetChargePercent");

	Params::IBaseWeapon_Interface_C_GetChargePercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ChargePercent != nullptr)
		*ChargePercent = Parms.ChargePercent;

}

}


