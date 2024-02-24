#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Magic_TOR.BPWeaponFireProjectileComponent_Magic_TOR_C
// (None)

class UClass* UBPWeaponFireProjectileComponent_Magic_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeaponFireProjectileComponent_Magic_TOR_C");

	return Clss;
}


// BPWeaponFireProjectileComponent_Magic_TOR_C BPWeaponFireProjectileComponent_Magic_TOR.Default__BPWeaponFireProjectileComponent_Magic_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeaponFireProjectileComponent_Magic_TOR_C* UBPWeaponFireProjectileComponent_Magic_TOR_C::GetDefaultObj()
{
	static class UBPWeaponFireProjectileComponent_Magic_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeaponFireProjectileComponent_Magic_TOR_C*>(UBPWeaponFireProjectileComponent_Magic_TOR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeaponFireProjectileComponent_Magic_TOR.BPWeaponFireProjectileComponent_Magic_TOR_C.SelectProjectile
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UClass* UBPWeaponFireProjectileComponent_Magic_TOR_C::SelectProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Magic_TOR_C", "SelectProjectile");

	Params::UBPWeaponFireProjectileComponent_Magic_TOR_C_SelectProjectile_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPWeaponFireProjectileComponent_Magic_TOR.BPWeaponFireProjectileComponent_Magic_TOR_C.GetShotProjectileData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class AActor>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TSubclassOf<class AActor> UBPWeaponFireProjectileComponent_Magic_TOR_C::GetShotProjectileData(uint8 Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Magic_TOR_C", "GetShotProjectileData");

	Params::UBPWeaponFireProjectileComponent_Magic_TOR_C_GetShotProjectileData_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


