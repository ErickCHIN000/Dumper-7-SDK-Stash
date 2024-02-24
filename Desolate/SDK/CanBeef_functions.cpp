#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanBeef.CanBeef_C
// (Actor)

class UClass* ACanBeef_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanBeef_C");

	return Clss;
}


// CanBeef_C CanBeef.Default__CanBeef_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACanBeef_C* ACanBeef_C::GetDefaultObj()
{
	static class ACanBeef_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACanBeef_C*>(ACanBeef_C::StaticClass()->DefaultObject);

	return Default;
}

}


