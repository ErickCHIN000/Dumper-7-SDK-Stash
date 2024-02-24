#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SesterCrossbow.SesterCrossbow_C
// (Actor)

class UClass* ASesterCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SesterCrossbow_C");

	return Clss;
}


// SesterCrossbow_C SesterCrossbow.Default__SesterCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASesterCrossbow_C* ASesterCrossbow_C::GetDefaultObj()
{
	static class ASesterCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASesterCrossbow_C*>(ASesterCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


