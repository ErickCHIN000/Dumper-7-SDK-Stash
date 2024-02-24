#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPMenuActor_ItemInspection.BPMenuActor_ItemInspection_C
// (Actor)

class UClass* ABPMenuActor_ItemInspection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPMenuActor_ItemInspection_C");

	return Clss;
}


// BPMenuActor_ItemInspection_C BPMenuActor_ItemInspection.Default__BPMenuActor_ItemInspection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPMenuActor_ItemInspection_C* ABPMenuActor_ItemInspection_C::GetDefaultObj()
{
	static class ABPMenuActor_ItemInspection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPMenuActor_ItemInspection_C*>(ABPMenuActor_ItemInspection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPMenuActor_ItemInspection.BPMenuActor_ItemInspection_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPMenuActor_ItemInspection_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPMenuActor_ItemInspection_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


