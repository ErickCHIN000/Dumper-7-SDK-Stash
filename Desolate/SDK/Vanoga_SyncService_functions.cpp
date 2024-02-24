#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vanoga_SyncService.Vanoga_SyncService_C
// (None)

class UClass* UVanoga_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_SyncService_C");

	return Clss;
}


// Vanoga_SyncService_C Vanoga_SyncService.Default__Vanoga_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVanoga_SyncService_C* UVanoga_SyncService_C::GetDefaultObj()
{
	static class UVanoga_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVanoga_SyncService_C*>(UVanoga_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vanoga_SyncService.Vanoga_SyncService_C.SS_SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVanoga_PatrolTypes     NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVanoga_SyncService_C::SS_SetPatrolType(enum class EVanoga_PatrolTypes NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_SyncService_C", "SS_SetPatrolType");

	Params::UVanoga_SyncService_C_SS_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vanoga_SyncService.Vanoga_SyncService_C.SS_SetPatrolPoiLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVanoga_SyncService_C::SS_SetPatrolPoiLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_SyncService_C", "SS_SetPatrolPoiLocation");

	Params::UVanoga_SyncService_C_SS_SetPatrolPoiLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vanoga_SyncService.Vanoga_SyncService_C.SS_SetPatrolPoiType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVanoga_PatrolPoiType   PatrolPoiType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVanoga_SyncService_C::SS_SetPatrolPoiType(enum class EVanoga_PatrolPoiType PatrolPoiType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_SyncService_C", "SS_SetPatrolPoiType");

	Params::UVanoga_SyncService_C_SS_SetPatrolPoiType_Params Parms{};

	Parms.PatrolPoiType = PatrolPoiType;

	UObject::ProcessEvent(Func, &Parms);

}

}


