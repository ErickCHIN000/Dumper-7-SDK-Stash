#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandage.Bandage_C
// (Actor)

class UClass* ABandage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandage_C");

	return Clss;
}


// Bandage_C Bandage.Default__Bandage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandage_C* ABandage_C::GetDefaultObj()
{
	static class ABandage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandage_C*>(ABandage_C::StaticClass()->DefaultObject);

	return Default;
}

}


