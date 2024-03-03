#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_bast_corpse.bp_bast_corpse_C
// (Actor)

class UClass* Abp_bast_corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_bast_corpse_C");

	return Clss;
}


// bp_bast_corpse_C bp_bast_corpse.Default__bp_bast_corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_bast_corpse_C* Abp_bast_corpse_C::GetDefaultObj()
{
	static class Abp_bast_corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_bast_corpse_C*>(Abp_bast_corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_bast_corpse.bp_bast_corpse_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_bast_corpse_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_bast_corpse_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_bast_corpse.bp_bast_corpse_C.Spawn Ded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_bast_corpse_C::Spawn_Ded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_bast_corpse_C", "Spawn Ded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_bast_corpse.bp_bast_corpse_C.ExecuteUbergraph_bp_bast_corpse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_bast_corpse_C::ExecuteUbergraph_bp_bast_corpse(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_bast_corpse_C", "ExecuteUbergraph_bp_bast_corpse");

	Params::Abp_bast_corpse_C_ExecuteUbergraph_bp_bast_corpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


