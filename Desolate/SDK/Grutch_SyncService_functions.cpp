#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_SyncService.Grutch_SyncService_C
// (None)

class UClass* UGrutch_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_SyncService_C");

	return Clss;
}


// Grutch_SyncService_C Grutch_SyncService.Default__Grutch_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrutch_SyncService_C* UGrutch_SyncService_C::GetDefaultObj()
{
	static class UGrutch_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrutch_SyncService_C*>(UGrutch_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Grutch_SyncService.Grutch_SyncService_C.SS_SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGrutch_PatrolTypes     NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrutch_SyncService_C::SS_SetPatrolType(enum class EGrutch_PatrolTypes NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_SyncService_C", "SS_SetPatrolType");

	Params::UGrutch_SyncService_C_SS_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grutch_SyncService.Grutch_SyncService_C.SS_SetPatrolPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGrutch_PatrolPoiType   PoiType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrutch_SyncService_C::SS_SetPatrolPOI(enum class EGrutch_PatrolPoiType PoiType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_SyncService_C", "SS_SetPatrolPOI");

	Params::UGrutch_SyncService_C_SS_SetPatrolPOI_Params Parms{};

	Parms.PoiType = PoiType;

	UObject::ProcessEvent(Func, &Parms);

}

}


