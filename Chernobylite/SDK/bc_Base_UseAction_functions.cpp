#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_Base_UseAction.bc_Base_UseAction_C
// (None)

class UClass* Ubc_Base_UseAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_Base_UseAction_C");

	return Clss;
}


// bc_Base_UseAction_C bc_Base_UseAction.Default__bc_Base_UseAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_Base_UseAction_C* Ubc_Base_UseAction_C::GetDefaultObj()
{
	static class Ubc_Base_UseAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_Base_UseAction_C*>(Ubc_Base_UseAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_Base_UseAction.bc_Base_UseAction_C.TryUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  SoundToPlay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionBody_Success                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  CallFunc_ActionBody_SoundToPlay                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_Base_UseAction_C::TryUse(class FName ItemId, class ACh_Hero_00_C* Pawn, const struct FVector2D& Index, bool* Success, class USoundBase** SoundToPlay, bool CallFunc_ActionBody_Success, class USoundBase* CallFunc_ActionBody_SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Base_UseAction_C", "TryUse");

	Params::Ubc_Base_UseAction_C_TryUse_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Pawn = Pawn;
	Parms.Index = Index;
	Parms.CallFunc_ActionBody_Success = CallFunc_ActionBody_Success;
	Parms.CallFunc_ActionBody_SoundToPlay = CallFunc_ActionBody_SoundToPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

}


// Function bc_Base_UseAction.bc_Base_UseAction_C.ActionBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  SoundToPlay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_Base_UseAction_C::ActionBody(bool* Success, class USoundBase** SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Base_UseAction_C", "ActionBody");

	Params::Ubc_Base_UseAction_C_ActionBody_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

}

}


