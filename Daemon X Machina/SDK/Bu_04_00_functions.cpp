#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bu_04_00.Bu_04_00_C
// (Actor)

class UClass* ABu_04_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bu_04_00_C");

	return Clss;
}


// Bu_04_00_C Bu_04_00.Default__Bu_04_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABu_04_00_C* ABu_04_00_C::GetDefaultObj()
{
	static class ABu_04_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABu_04_00_C*>(ABu_04_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bu_04_00.Bu_04_00_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABu_04_00_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bu_04_00_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


