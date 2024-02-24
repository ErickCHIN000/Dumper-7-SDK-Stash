#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_NowWeSlass.DamageData_NowWeSlass_C
// (None)

class UClass* UDamageData_NowWeSlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_NowWeSlass_C");

	return Clss;
}


// DamageData_NowWeSlass_C DamageData_NowWeSlass.Default__DamageData_NowWeSlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_NowWeSlass_C* UDamageData_NowWeSlass_C::GetDefaultObj()
{
	static class UDamageData_NowWeSlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_NowWeSlass_C*>(UDamageData_NowWeSlass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageData_NowWeSlass.DamageData_NowWeSlass_C.OnHitEnemy
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageDataEventDetails     Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDamageData_NowWeSlass_C::OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageData_NowWeSlass_C", "OnHitEnemy");

	Params::UDamageData_NowWeSlass_C_OnHitEnemy_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.DamageTarget = DamageTarget;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}

}


