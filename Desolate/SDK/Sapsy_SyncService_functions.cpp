#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sapsy_SyncService.Sapsy_SyncService_C
// (None)

class UClass* USapsy_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sapsy_SyncService_C");

	return Clss;
}


// Sapsy_SyncService_C Sapsy_SyncService.Default__Sapsy_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USapsy_SyncService_C* USapsy_SyncService_C::GetDefaultObj()
{
	static class USapsy_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USapsy_SyncService_C*>(USapsy_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Sapsy_SyncService.Sapsy_SyncService_C.SS_SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESapsy_PatrolTypes      NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USapsy_SyncService_C::SS_SetPatrolType(enum class ESapsy_PatrolTypes NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_SyncService_C", "SS_SetPatrolType");

	Params::USapsy_SyncService_C_SS_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Sapsy_SyncService.Sapsy_SyncService_C.SS_SetPatrolPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESapsy_PatrolPoiType    PoiType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USapsy_SyncService_C::SS_SetPatrolPOI(enum class ESapsy_PatrolPoiType PoiType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_SyncService_C", "SS_SetPatrolPOI");

	Params::USapsy_SyncService_C_SS_SetPatrolPOI_Params Parms{};

	Parms.PoiType = PoiType;

	UObject::ProcessEvent(Func, &Parms);

}

}


