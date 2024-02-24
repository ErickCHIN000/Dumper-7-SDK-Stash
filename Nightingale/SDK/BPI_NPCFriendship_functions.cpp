#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPCFriendship.BPI_NPCFriendship_C
// (None)

class UClass* IBPI_NPCFriendship_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCFriendship_C");

	return Clss;
}


// BPI_NPCFriendship_C BPI_NPCFriendship.Default__BPI_NPCFriendship_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCFriendship_C* IBPI_NPCFriendship_C::GetDefaultObj()
{
	static class IBPI_NPCFriendship_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCFriendship_C*>(IBPI_NPCFriendship_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPCFriendship.BPI_NPCFriendship_C.GetBestFriend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_NPCFriendship_C::GetBestFriend(class FString* PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCFriendship_C", "GetBestFriend");

	Params::IBPI_NPCFriendship_C_GetBestFriend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayerId != nullptr)
		*PlayerId = std::move(Parms.PlayerId);

}


// Function BPI_NPCFriendship.BPI_NPCFriendship_C.GetFriendshipLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_FriendshipLevel    FriendshipLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FriendshipScore                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCFriendship_C::GetFriendshipLevel(const class FString& PlayerId, enum class Enum_FriendshipLevel* FriendshipLevel, int32* FriendshipScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCFriendship_C", "GetFriendshipLevel");

	Params::IBPI_NPCFriendship_C_GetFriendshipLevel_Params Parms{};

	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

	if (FriendshipLevel != nullptr)
		*FriendshipLevel = Parms.FriendshipLevel;

	if (FriendshipScore != nullptr)
		*FriendshipScore = Parms.FriendshipScore;

}


// Function BPI_NPCFriendship.BPI_NPCFriendship_C.FriendshipEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_NPCFriendshipEvent EventStrength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScoreAwarded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCFriendship_C::FriendshipEvent(const class FString& PlayerId, enum class Enum_NPCFriendshipEvent EventStrength, bool* Success, int32* ScoreAwarded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCFriendship_C", "FriendshipEvent");

	Params::IBPI_NPCFriendship_C_FriendshipEvent_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.EventStrength = EventStrength;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ScoreAwarded != nullptr)
		*ScoreAwarded = Parms.ScoreAwarded;

}

}


