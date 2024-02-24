#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CreatureInfo.BPI_CreatureInfo_C
// (None)

class UClass* IBPI_CreatureInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CreatureInfo_C");

	return Clss;
}


// BPI_CreatureInfo_C BPI_CreatureInfo.Default__BPI_CreatureInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CreatureInfo_C* IBPI_CreatureInfo_C::GetDefaultObj()
{
	static class IBPI_CreatureInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CreatureInfo_C*>(IBPI_CreatureInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CreatureInfo.BPI_CreatureInfo_C.RemoveFromEnemies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EnemyTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CreatureInfo_C::RemoveFromEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CreatureInfo_C", "RemoveFromEnemies");

	Params::IBPI_CreatureInfo_C_RemoveFromEnemies_Params Parms{};

	Parms.EnemyTag = EnemyTag;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_CreatureInfo.BPI_CreatureInfo_C.AddToEnemies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EnemyTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CreatureInfo_C::AddToEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CreatureInfo_C", "AddToEnemies");

	Params::IBPI_CreatureInfo_C_AddToEnemies_Params Parms{};

	Parms.EnemyTag = EnemyTag;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_CreatureInfo.BPI_CreatureInfo_C.RemoveFromFriends
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                FriendTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CreatureInfo_C::RemoveFromFriends(const struct FGameplayTag& FriendTag, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CreatureInfo_C", "RemoveFromFriends");

	Params::IBPI_CreatureInfo_C_RemoveFromFriends_Params Parms{};

	Parms.FriendTag = FriendTag;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_CreatureInfo.BPI_CreatureInfo_C.AddToFriends
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                FriendTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CreatureInfo_C::AddToFriends(const struct FGameplayTag& FriendTag, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CreatureInfo_C", "AddToFriends");

	Params::IBPI_CreatureInfo_C_AddToFriends_Params Parms{};

	Parms.FriendTag = FriendTag;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_CreatureInfo.BPI_CreatureInfo_C.GetCreatureInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CreatureInfo             Info                                                             (Parm, OutParm, HasGetValueTypeHash)

void IBPI_CreatureInfo_C::GetCreatureInfo(struct FS_CreatureInfo* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CreatureInfo_C", "GetCreatureInfo");

	Params::IBPI_CreatureInfo_C_GetCreatureInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}

}


