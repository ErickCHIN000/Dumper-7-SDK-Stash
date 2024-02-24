#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Churaka_SyncService.Churaka_SyncService_C
// (None)

class UClass* UChuraka_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Churaka_SyncService_C");

	return Clss;
}


// Churaka_SyncService_C Churaka_SyncService.Default__Churaka_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChuraka_SyncService_C* UChuraka_SyncService_C::GetDefaultObj()
{
	static class UChuraka_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChuraka_SyncService_C*>(UChuraka_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Churaka_SyncService.Churaka_SyncService_C.SS_SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EChuraka_PatrolTypes    NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChuraka_SyncService_C::SS_SetPatrolType(enum class EChuraka_PatrolTypes NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_SyncService_C", "SS_SetPatrolType");

	Params::UChuraka_SyncService_C_SS_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_SyncService.Churaka_SyncService_C.SS_SetPatrolPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EChuraka_PatrolPoiType  PoiType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChuraka_SyncService_C::SS_SetPatrolPOI(enum class EChuraka_PatrolPoiType PoiType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_SyncService_C", "SS_SetPatrolPOI");

	Params::UChuraka_SyncService_C_SS_SetPatrolPOI_Params Parms{};

	Parms.PoiType = PoiType;

	UObject::ProcessEvent(Func, &Parms);

}

}


