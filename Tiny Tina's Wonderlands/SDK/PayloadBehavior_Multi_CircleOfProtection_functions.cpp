#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PayloadBehavior_Multi_CircleOfProtection.PayloadBehavior_Multi_CircleOfProtection_C
// (None)

class UClass* UPayloadBehavior_Multi_CircleOfProtection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PayloadBehavior_Multi_CircleOfProtection_C");

	return Clss;
}


// PayloadBehavior_Multi_CircleOfProtection_C PayloadBehavior_Multi_CircleOfProtection.Default__PayloadBehavior_Multi_CircleOfProtection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPayloadBehavior_Multi_CircleOfProtection_C* UPayloadBehavior_Multi_CircleOfProtection_C::GetDefaultObj()
{
	static class UPayloadBehavior_Multi_CircleOfProtection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPayloadBehavior_Multi_CircleOfProtection_C*>(UPayloadBehavior_Multi_CircleOfProtection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PayloadBehavior_Multi_CircleOfProtection.PayloadBehavior_Multi_CircleOfProtection_C.GetCustomSpellSpawnInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenadeMod*                 GrenadeMod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxSpawnCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  OverrideInitialTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TArray<struct FSpellSpawnInfo>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// int32                              IndexToUse                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          ConeTransforms                                                   (Edit, BlueprintVisible, ZeroConstructor)
// class AOakCharacter_Player*        InPlayer                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSpellSpawnInfo>     SpellStructToUse                                                 (Edit, BlueprintVisible, ZeroConstructor)

TArray<struct FSpellSpawnInfo> UPayloadBehavior_Multi_CircleOfProtection_C::GetCustomSpellSpawnInfo(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer, int32 MaxSpawnCount, const struct FTransform& OverrideInitialTransform, int32 IndexToUse, const TArray<struct FTransform>& ConeTransforms, class AOakCharacter_Player* InPlayer, const TArray<struct FSpellSpawnInfo>& SpellStructToUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PayloadBehavior_Multi_CircleOfProtection_C", "GetCustomSpellSpawnInfo");

	Params::UPayloadBehavior_Multi_CircleOfProtection_C_GetCustomSpellSpawnInfo_Params Parms{};

	Parms.GrenadeMod = GrenadeMod;
	Parms.EquippedPlayer = EquippedPlayer;
	Parms.MaxSpawnCount = MaxSpawnCount;
	Parms.OverrideInitialTransform = OverrideInitialTransform;
	Parms.IndexToUse = IndexToUse;
	Parms.ConeTransforms = ConeTransforms;
	Parms.InPlayer = InPlayer;
	Parms.SpellStructToUse = SpellStructToUse;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


