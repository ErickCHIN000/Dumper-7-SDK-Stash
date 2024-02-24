#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_FireWeapon_V1.A_Hydra_FireWeapon_V1_C
// (None)

class UClass* UA_Hydra_FireWeapon_V1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_FireWeapon_V1_C");

	return Clss;
}


// A_Hydra_FireWeapon_V1_C A_Hydra_FireWeapon_V1.Default__A_Hydra_FireWeapon_V1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_FireWeapon_V1_C* UA_Hydra_FireWeapon_V1_C::GetDefaultObj()
{
	static class UA_Hydra_FireWeapon_V1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_FireWeapon_V1_C*>(UA_Hydra_FireWeapon_V1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function A_Hydra_FireWeapon_V1.A_Hydra_FireWeapon_V1_C.Notify_FireProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_FireWeapon_V1_C::Notify_FireProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_FireWeapon_V1_C", "Notify_FireProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_FireWeapon_V1.A_Hydra_FireWeapon_V1_C.Notify_FireProjectile_A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_FireWeapon_V1_C::Notify_FireProjectile_A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_FireWeapon_V1_C", "Notify_FireProjectile_A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_FireWeapon_V1.A_Hydra_FireWeapon_V1_C.Notify_FireProjectile_B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_FireWeapon_V1_C::Notify_FireProjectile_B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_FireWeapon_V1_C", "Notify_FireProjectile_B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_FireWeapon_V1.A_Hydra_FireWeapon_V1_C.Notify_FireProjectile_C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_FireWeapon_V1_C::Notify_FireProjectile_C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_FireWeapon_V1_C", "Notify_FireProjectile_C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_FireWeapon_V1.A_Hydra_FireWeapon_V1_C.ExecuteUbergraph_A_Hydra_FireWeapon_V1
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SpellActor_Hydra_C>K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UA_Hydra_FireWeapon_V1_C::ExecuteUbergraph_A_Hydra_FireWeapon_V1(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IBPI_SpellActor_Hydra_C> K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_FireWeapon_V1_C", "ExecuteUbergraph_A_Hydra_FireWeapon_V1");

	Params::UA_Hydra_FireWeapon_V1_C_ExecuteUbergraph_A_Hydra_FireWeapon_V1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra = K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


