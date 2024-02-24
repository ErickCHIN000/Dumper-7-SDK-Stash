#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C
// (None)

class UClass* UBPWeaponFireProjectileComponent_Torgue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeaponFireProjectileComponent_Torgue_C");

	return Clss;
}


// BPWeaponFireProjectileComponent_Torgue_C BPWeaponFireProjectileComponent_Torgue.Default__BPWeaponFireProjectileComponent_Torgue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeaponFireProjectileComponent_Torgue_C* UBPWeaponFireProjectileComponent_Torgue_C::GetDefaultObj()
{
	static class UBPWeaponFireProjectileComponent_Torgue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeaponFireProjectileComponent_Torgue_C*>(UBPWeaponFireProjectileComponent_Torgue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.SelectProjectile
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ProjectileType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueOfAttributeAsInteger_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

class UClass* UBPWeaponFireProjectileComponent_Torgue_C::SelectProjectile(int32 ProjectileType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Torgue_C", "SelectProjectile");

	Params::UBPWeaponFireProjectileComponent_Torgue_C_SelectProjectile_Params Parms{};

	Parms.ProjectileType = ProjectileType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetValueOfAttributeAsInteger_ReturnValue = CallFunc_GetValueOfAttributeAsInteger_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.K2_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectileComponent_Torgue_C::K2_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Torgue_C", "K2_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SelectProjectile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWeaponFireProjectileComponent_Torgue_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue(int32 EntryPoint, class UClass* CallFunc_SelectProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Torgue_C", "ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue");

	Params::UBPWeaponFireProjectileComponent_Torgue_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SelectProjectile_ReturnValue = CallFunc_SelectProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


