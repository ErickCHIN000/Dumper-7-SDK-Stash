#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Damage.BPI_Damage_C
// (None)

class UClass* IBPI_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Damage_C");

	return Clss;
}


// BPI_Damage_C BPI_Damage.Default__BPI_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Damage_C* IBPI_Damage_C::GetDefaultObj()
{
	static class IBPI_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Damage_C*>(IBPI_Damage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Damage.BPI_Damage_C.IsObjectDamageable?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Damageable_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Damage_C::IsObjectDamageable_(bool* Damageable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Damage_C", "IsObjectDamageable?");

	Params::IBPI_Damage_C_IsObjectDamageable__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Damageable_ != nullptr)
		*Damageable_ = Parms.Damageable_;

}


// Function BPI_Damage.BPI_Damage_C.Damage_Object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Damage_Causer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Event_Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Damage_C::Damage_Object(double Damage, class AActor* Damage_Causer, class AController* Event_Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Damage_C", "Damage_Object");

	Params::IBPI_Damage_C_Damage_Object_Params Parms{};

	Parms.Damage = Damage;
	Parms.Damage_Causer = Damage_Causer;
	Parms.Event_Instigator = Event_Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Damage.BPI_Damage_C.Damage_Shoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Damage_C::Damage_Shoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Damage_C", "Damage_Shoved");



	UObject::ProcessEvent(Func, nullptr);

}

}


