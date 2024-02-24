#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MS_SyncService.MS_SyncService_C
// (None)

class UClass* UMS_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MS_SyncService_C");

	return Clss;
}


// MS_SyncService_C MS_SyncService.Default__MS_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMS_SyncService_C* UMS_SyncService_C::GetDefaultObj()
{
	static class UMS_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMS_SyncService_C*>(UMS_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MS_SyncService.MS_SyncService_C.SS_SetWeaponType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMadman_WeaponType      NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMS_SyncService_C::SS_SetWeaponType(enum class EMadman_WeaponType NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_SyncService_C", "SS_SetWeaponType");

	Params::UMS_SyncService_C_SS_SetWeaponType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MS_SyncService.MS_SyncService_C.SS_SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMS_PatrolTypes         NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMS_SyncService_C::SS_SetPatrolType(enum class EMS_PatrolTypes NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_SyncService_C", "SS_SetPatrolType");

	Params::UMS_SyncService_C_SS_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MS_SyncService.MS_SyncService_C.SS_SyncDemoniacState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMS_DemoniacStates      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMS_SyncService_C::SS_SyncDemoniacState(enum class EMS_DemoniacStates State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_SyncService_C", "SS_SyncDemoniacState");

	Params::UMS_SyncService_C_SS_SyncDemoniacState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MS_SyncService.MS_SyncService_C.SS_SetPatrolPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMS_PatrolPoiType       PoiType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PoiLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMS_SyncService_C::SS_SetPatrolPOI(enum class EMS_PatrolPoiType PoiType, const struct FVector& PoiLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MS_SyncService_C", "SS_SetPatrolPOI");

	Params::UMS_SyncService_C_SS_SetPatrolPOI_Params Parms{};

	Parms.PoiType = PoiType;
	Parms.PoiLocation = PoiLocation;

	UObject::ProcessEvent(Func, &Parms);

}

}


