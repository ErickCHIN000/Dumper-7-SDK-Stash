#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameModeUtilInterface.GameModeUtilInterface_C
// (None)

class UClass* IGameModeUtilInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameModeUtilInterface_C");

	return Clss;
}


// GameModeUtilInterface_C GameModeUtilInterface.Default__GameModeUtilInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGameModeUtilInterface_C* IGameModeUtilInterface_C::GetDefaultObj()
{
	static class IGameModeUtilInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameModeUtilInterface_C*>(IGameModeUtilInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_PrevLuteMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGameModeUtilInterface_C::GameModeUtils_PrevLuteMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_PrevLuteMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_NextLuteMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGameModeUtilInterface_C::GameModeUtils_NextLuteMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_NextLuteMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_GetArbNameForLevelFromSaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ArbName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameModeUtilInterface_C::GameModeUtils_GetArbNameForLevelFromSaveGame(class FName LevelName, class FName ArbName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_GetArbNameForLevelFromSaveGame");

	Params::IGameModeUtilInterface_C_GameModeUtils_GetArbNameForLevelFromSaveGame_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.ArbName = ArbName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_IsAbritraryNameInSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInSet                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameModeUtilInterface_C::GameModeUtils_IsAbritraryNameInSet(class FName Name, bool* bIsInSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_IsAbritraryNameInSet");

	Params::IGameModeUtilInterface_C_GameModeUtils_IsAbritraryNameInSet_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInSet != nullptr)
		*bIsInSet = Parms.bIsInSet;

}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_RemoveAbritraryNameFromChangedSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccessful                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameModeUtilInterface_C::GameModeUtils_RemoveAbritraryNameFromChangedSet(class FName Name, bool* bSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_RemoveAbritraryNameFromChangedSet");

	Params::IGameModeUtilInterface_C_GameModeUtils_RemoveAbritraryNameFromChangedSet_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccessful != nullptr)
		*bSuccessful = Parms.bSuccessful;

}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_AddAbritraryNameToChangedSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameModeUtilInterface_C::GameModeUtils_AddAbritraryNameToChangedSet(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_AddAbritraryNameToChangedSet");

	Params::IGameModeUtilInterface_C_GameModeUtils_AddAbritraryNameToChangedSet_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_ToggleFog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGameModeUtilInterface_C::GameModeUtils_ToggleFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_ToggleFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_SaveMapState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGameModeUtilInterface_C::GameModeUtils_SaveMapState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameModeUtilInterface_C", "GameModeUtils_SaveMapState");



	UObject::ProcessEvent(Func, nullptr);

}

}


