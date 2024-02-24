#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dog_SyncService.Dog_SyncService_C
// (None)

class UClass* UDog_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dog_SyncService_C");

	return Clss;
}


// Dog_SyncService_C Dog_SyncService.Default__Dog_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDog_SyncService_C* UDog_SyncService_C::GetDefaultObj()
{
	static class UDog_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDog_SyncService_C*>(UDog_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dog_SyncService.Dog_SyncService_C.SS_SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDog_PatrolType         NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDog_SyncService_C::SS_SetPatrolType(enum class EDog_PatrolType NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_SyncService_C", "SS_SetPatrolType");

	Params::UDog_SyncService_C_SS_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_SyncService.Dog_SyncService_C.SS_SetPatrolPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDog_PatrolPoiType      PoiType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDog_SyncService_C::SS_SetPatrolPOI(enum class EDog_PatrolPoiType PoiType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_SyncService_C", "SS_SetPatrolPOI");

	Params::UDog_SyncService_C_SS_SetPatrolPOI_Params Parms{};

	Parms.PoiType = PoiType;

	UObject::ProcessEvent(Func, &Parms);

}

}


