#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActivationExplosion.ActivationExplosion_C
// (Actor)

class UClass* AActivationExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivationExplosion_C");

	return Clss;
}


// ActivationExplosion_C ActivationExplosion.Default__ActivationExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AActivationExplosion_C* AActivationExplosion_C::GetDefaultObj()
{
	static class AActivationExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AActivationExplosion_C*>(AActivationExplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActivationExplosion.ActivationExplosion_C.Timeline_ExplosionEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AActivationExplosion_C::Timeline_ExplosionEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivationExplosion_C", "Timeline_ExplosionEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivationExplosion.ActivationExplosion_C.Timeline_ExplosionEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AActivationExplosion_C::Timeline_ExplosionEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivationExplosion_C", "Timeline_ExplosionEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivationExplosion.ActivationExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AActivationExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivationExplosion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivationExplosion.ActivationExplosion_C.ExecuteUbergraph_ActivationExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AActivationExplosion_C::ExecuteUbergraph_ActivationExplosion(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivationExplosion_C", "ExecuteUbergraph_ActivationExplosion");

	Params::AActivationExplosion_C_ExecuteUbergraph_ActivationExplosion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


