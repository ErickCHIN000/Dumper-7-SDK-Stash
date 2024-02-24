#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SG_JAK_Magic_Reload_Quick.Action_SG_JAK_Magic_Reload_Quick_C
// (None)

class UClass* UAction_SG_JAK_Magic_Reload_Quick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SG_JAK_Magic_Reload_Quick_C");

	return Clss;
}


// Action_SG_JAK_Magic_Reload_Quick_C Action_SG_JAK_Magic_Reload_Quick.Default__Action_SG_JAK_Magic_Reload_Quick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SG_JAK_Magic_Reload_Quick_C* UAction_SG_JAK_Magic_Reload_Quick_C::GetDefaultObj()
{
	static class UAction_SG_JAK_Magic_Reload_Quick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SG_JAK_Magic_Reload_Quick_C*>(UAction_SG_JAK_Magic_Reload_Quick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_SG_JAK_Magic_Reload_Quick.Action_SG_JAK_Magic_Reload_Quick_C.Action_WeaponReloadSprinkle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_SG_JAK_Magic_Reload_Quick_C::Action_WeaponReloadSprinkle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SG_JAK_Magic_Reload_Quick_C", "Action_WeaponReloadSprinkle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_SG_JAK_Magic_Reload_Quick.Action_SG_JAK_Magic_Reload_Quick_C.ExecuteUbergraph_Action_SG_JAK_Magic_Reload_Quick
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_K2_GetWeapon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SG_JAK_Magic_Reload_Quick_C::ExecuteUbergraph_Action_SG_JAK_Magic_Reload_Quick(int32 EntryPoint, class AWeapon* CallFunc_K2_GetWeapon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SG_JAK_Magic_Reload_Quick_C", "ExecuteUbergraph_Action_SG_JAK_Magic_Reload_Quick");

	Params::UAction_SG_JAK_Magic_Reload_Quick_C_ExecuteUbergraph_Action_SG_JAK_Magic_Reload_Quick_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetWeapon_ReturnValue = CallFunc_K2_GetWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


