#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Aggressive_SyncService.Aggressive_SyncService_C
// (None)

class UClass* UAggressive_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Aggressive_SyncService_C");

	return Clss;
}


// Aggressive_SyncService_C Aggressive_SyncService.Default__Aggressive_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAggressive_SyncService_C* UAggressive_SyncService_C::GetDefaultObj()
{
	static class UAggressive_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAggressive_SyncService_C*>(UAggressive_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Aggressive_SyncService.Aggressive_SyncService_C.SS_SetAggroPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     POI                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAggressive_SyncService_C::SS_SetAggroPOI(const struct FVector& POI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Aggressive_SyncService_C", "SS_SetAggroPOI");

	Params::UAggressive_SyncService_C_SS_SetAggroPOI_Params Parms{};

	Parms.POI = POI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Aggressive_SyncService.Aggressive_SyncService_C.SS_SetEnemyCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAggressive_SyncService_C::SS_SetEnemyCharacter(class ASHCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Aggressive_SyncService_C", "SS_SetEnemyCharacter");

	Params::UAggressive_SyncService_C_SS_SetEnemyCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


