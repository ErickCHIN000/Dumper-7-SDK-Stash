#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK.BPWeaponFireProjectileComponent_JAK_C
// (None)

class UClass* UBPWeaponFireProjectileComponent_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeaponFireProjectileComponent_JAK_C");

	return Clss;
}


// BPWeaponFireProjectileComponent_JAK_C BPWeaponFireProjectileComponent_JAK.Default__BPWeaponFireProjectileComponent_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeaponFireProjectileComponent_JAK_C* UBPWeaponFireProjectileComponent_JAK_C::GetDefaultObj()
{
	static class UBPWeaponFireProjectileComponent_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeaponFireProjectileComponent_JAK_C*>(UBPWeaponFireProjectileComponent_JAK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeaponFireProjectileComponent_JAK.BPWeaponFireProjectileComponent_JAK_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectileComponent_JAK_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_JAK_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectileComponent_JAK.BPWeaponFireProjectileComponent_JAK_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWeaponFireProjectileComponent_JAK_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_JAK_C", "ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK");

	Params::UBPWeaponFireProjectileComponent_JAK_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


