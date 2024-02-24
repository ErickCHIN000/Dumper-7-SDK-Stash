#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MasterTools.MasterTools_C
// (Actor)

class UClass* AMasterTools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MasterTools_C");

	return Clss;
}


// MasterTools_C MasterTools.Default__MasterTools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMasterTools_C* AMasterTools_C::GetDefaultObj()
{
	static class AMasterTools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMasterTools_C*>(AMasterTools_C::StaticClass()->DefaultObject);

	return Default;
}

}


