#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_PerkManager.bc_PerkManager_C
// (None)

class UClass* Ubc_PerkManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_PerkManager_C");

	return Clss;
}


// bc_PerkManager_C bc_PerkManager.Default__bc_PerkManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_PerkManager_C* Ubc_PerkManager_C::GetDefaultObj()
{
	static class Ubc_PerkManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_PerkManager_C*>(Ubc_PerkManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_PerkManager.bc_PerkManager_C.CheckPerk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PerkName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPerk_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_PerkManager_C::CheckPerk(class FName PerkName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_CheckPerk_ValueA, float CallFunc_CheckPerk_ValueB, bool CallFunc_CheckPerk_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PerkManager_C", "CheckPerk");

	Params::Ubc_PerkManager_C_CheckPerk_Params Parms{};

	Parms.PerkName = PerkName;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_CheckPerk_ValueA = CallFunc_CheckPerk_ValueA;
	Parms.CallFunc_CheckPerk_ValueB = CallFunc_CheckPerk_ValueB;
	Parms.CallFunc_CheckPerk_ReturnValue = CallFunc_CheckPerk_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_PerkManager.bc_PerkManager_C.RemovePerk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PerkName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_PerkManager_C::RemovePerk(class FName PerkName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PerkManager_C", "RemovePerk");

	Params::Ubc_PerkManager_C_RemovePerk_Params Parms{};

	Parms.PerkName = PerkName;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_PerkManager.bc_PerkManager_C.AddPerk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PerkName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddPerk_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_PerkManager_C::AddPerk(class FName PerkName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_AddPerk_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PerkManager_C", "AddPerk");

	Params::Ubc_PerkManager_C_AddPerk_Params Parms{};

	Parms.PerkName = PerkName;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_AddPerk_ReturnValue = CallFunc_AddPerk_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


