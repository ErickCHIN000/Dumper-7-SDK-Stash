#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScoutFist.ScoutFist_C
// (Actor)

class UClass* AScoutFist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoutFist_C");

	return Clss;
}


// ScoutFist_C ScoutFist.Default__ScoutFist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScoutFist_C* AScoutFist_C::GetDefaultObj()
{
	static class AScoutFist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScoutFist_C*>(AScoutFist_C::StaticClass()->DefaultObject);

	return Default;
}

}


