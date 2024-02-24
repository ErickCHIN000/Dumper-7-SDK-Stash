#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_RandomizedObject.BPI_RandomizedObject_C
// (None)

class UClass* IBPI_RandomizedObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_RandomizedObject_C");

	return Clss;
}


// BPI_RandomizedObject_C BPI_RandomizedObject.Default__BPI_RandomizedObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_RandomizedObject_C* IBPI_RandomizedObject_C::GetDefaultObj()
{
	static class IBPI_RandomizedObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_RandomizedObject_C*>(IBPI_RandomizedObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.AskRandomDarkFormUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)

void IBPI_RandomizedObject_C::AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "AskRandomDarkFormUpgrade");

	Params::IBPI_RandomizedObject_C_AskRandomDarkFormUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.AskRandomWeaponUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void IBPI_RandomizedObject_C::AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "AskRandomWeaponUpgrade");

	Params::IBPI_RandomizedObject_C_AskRandomWeaponUpgrade_Params Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.ReRandomizeEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSeed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_RandomizedObject_C::ReRandomizeEnemy(int32 NewSeed, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "ReRandomizeEnemy");

	Params::IBPI_RandomizedObject_C_ReRandomizeEnemy_Params Parms{};

	Parms.NewSeed = NewSeed;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.AskRandomUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void IBPI_RandomizedObject_C::AskRandomUpgrade(struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "AskRandomUpgrade");

	Params::IBPI_RandomizedObject_C_AskRandomUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.SetObjectAsTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_RandomizedObject_C::SetObjectAsTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "SetObjectAsTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.SetPillarType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_PillarType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_RandomizedObject_C::SetPillarType(enum class Enum_PillarType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "SetPillarType");

	Params::IBPI_RandomizedObject_C_SetPillarType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.RemoveObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_RandomizedObject_C::RemoveObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "RemoveObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.SetObjectMainChance%
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rune_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Item_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_RandomizedObject_C::SetObjectMainChance_(float Rune_Chance, float Item_Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "SetObjectMainChance%");

	Params::IBPI_RandomizedObject_C_SetObjectMainChance__Params Parms{};

	Parms.Rune_Chance = Rune_Chance;
	Parms.Item_Chance = Item_Chance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_RandomizedObject.BPI_RandomizedObject_C.InitiliazeSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SeedID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitialSeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_RandomizedObject_C::InitiliazeSeed(int32 SeedID, int32 InitialSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RandomizedObject_C", "InitiliazeSeed");

	Params::IBPI_RandomizedObject_C_InitiliazeSeed_Params Parms{};

	Parms.SeedID = SeedID;
	Parms.InitialSeed = InitialSeed;

	UObject::ProcessEvent(Func, &Parms);

}

}


