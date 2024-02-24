#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNPC_SyncService.GenericNPC_SyncService_C
// (None)

class UClass* UGenericNPC_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNPC_SyncService_C");

	return Clss;
}


// GenericNPC_SyncService_C GenericNPC_SyncService.Default__GenericNPC_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericNPC_SyncService_C* UGenericNPC_SyncService_C::GetDefaultObj()
{
	static class UGenericNPC_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericNPC_SyncService_C*>(UGenericNPC_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericNPC_SyncService.GenericNPC_SyncService_C.SS_SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGenericNPC_PatrolTypes NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericNPC_SyncService_C::SS_SetPatrolType(enum class EGenericNPC_PatrolTypes NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_SyncService_C", "SS_SetPatrolType");

	Params::UGenericNPC_SyncService_C_SS_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericNPC_SyncService.GenericNPC_SyncService_C.SS_SetWeaponType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponType             WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericNPC_SyncService_C::SS_SetWeaponType(enum class EWeaponType WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericNPC_SyncService_C", "SS_SetWeaponType");

	Params::UGenericNPC_SyncService_C_SS_SetWeaponType_Params Parms{};

	Parms.WeaponType = WeaponType;

	UObject::ProcessEvent(Func, &Parms);

}

}


