#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bi_ItemOnUseAction.bi_ItemOnUseAction_C
// (None)

class UClass* Ibi_ItemOnUseAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bi_ItemOnUseAction_C");

	return Clss;
}


// bi_ItemOnUseAction_C bi_ItemOnUseAction.Default__bi_ItemOnUseAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ibi_ItemOnUseAction_C* Ibi_ItemOnUseAction_C::GetDefaultObj()
{
	static class Ibi_ItemOnUseAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ibi_ItemOnUseAction_C*>(Ibi_ItemOnUseAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bi_ItemOnUseAction.bi_ItemOnUseAction_C.TryUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  SoundToPlay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ibi_ItemOnUseAction_C::TryUse(class FName ItemId, class ACh_Hero_00_C* Pawn, const struct FVector2D& Index, bool* Success, class USoundBase** SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_ItemOnUseAction_C", "TryUse");

	Params::Ibi_ItemOnUseAction_C_TryUse_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Pawn = Pawn;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

}

}


