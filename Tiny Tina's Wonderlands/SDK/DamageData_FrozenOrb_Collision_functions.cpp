#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_FrozenOrb_Collision.DamageData_FrozenOrb_Collision_C
// (None)

class UClass* UDamageData_FrozenOrb_Collision_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_FrozenOrb_Collision_C");

	return Clss;
}


// DamageData_FrozenOrb_Collision_C DamageData_FrozenOrb_Collision.Default__DamageData_FrozenOrb_Collision_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_FrozenOrb_Collision_C* UDamageData_FrozenOrb_Collision_C::GetDefaultObj()
{
	static class UDamageData_FrozenOrb_Collision_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_FrozenOrb_Collision_C*>(UDamageData_FrozenOrb_Collision_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageData_FrozenOrb_Collision.DamageData_FrozenOrb_Collision_C.OnHitEnemy
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageDataEventDetails     Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TScriptInterface<class IBPI_FrozenOrb_C>K2Node_DynamicCast_AsBPI_Frozen_Orb                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamageData_FrozenOrb_Collision_C::OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, TScriptInterface<class IBPI_FrozenOrb_C> K2Node_DynamicCast_AsBPI_Frozen_Orb, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageData_FrozenOrb_Collision_C", "OnHitEnemy");

	Params::UDamageData_FrozenOrb_Collision_C_OnHitEnemy_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.DamageTarget = DamageTarget;
	Parms.Details = Details;
	Parms.K2Node_DynamicCast_AsBPI_Frozen_Orb = K2Node_DynamicCast_AsBPI_Frozen_Orb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


