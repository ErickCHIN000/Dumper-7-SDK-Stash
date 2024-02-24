#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AdvancedTools.AdvancedTools_C
// (Actor)

class UClass* AAdvancedTools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedTools_C");

	return Clss;
}


// AdvancedTools_C AdvancedTools.Default__AdvancedTools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAdvancedTools_C* AAdvancedTools_C::GetDefaultObj()
{
	static class AAdvancedTools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAdvancedTools_C*>(AAdvancedTools_C::StaticClass()->DefaultObject);

	return Default;
}

}


