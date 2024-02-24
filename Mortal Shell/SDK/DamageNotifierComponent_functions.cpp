#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageNotifierComponent.DamageNotifierComponent_C
// (None)

class UClass* UDamageNotifierComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageNotifierComponent_C");

	return Clss;
}


// DamageNotifierComponent_C DamageNotifierComponent.Default__DamageNotifierComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageNotifierComponent_C* UDamageNotifierComponent_C::GetDefaultObj()
{
	static class UDamageNotifierComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageNotifierComponent_C*>(UDamageNotifierComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageNotifierComponent.DamageNotifierComponent_C.OnDamageTakenWithDamageType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageNotifierComponent_C::OnDamageTakenWithDamageType__DelegateSignature(class UClass* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageNotifierComponent_C", "OnDamageTakenWithDamageType__DelegateSignature");

	Params::UDamageNotifierComponent_C_OnDamageTakenWithDamageType__DelegateSignature_Params Parms{};

	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DamageNotifierComponent.DamageNotifierComponent_C.OnDamageTaken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDamageNotifierComponent_C::OnDamageTaken__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageNotifierComponent_C", "OnDamageTaken__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


