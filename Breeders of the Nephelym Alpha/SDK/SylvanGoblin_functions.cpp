#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanGoblin.SylvanGoblin_C
// (None)

class UClass* USylvanGoblin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanGoblin_C");

	return Clss;
}


// SylvanGoblin_C SylvanGoblin.Default__SylvanGoblin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanGoblin_C* USylvanGoblin_C::GetDefaultObj()
{
	static class USylvanGoblin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanGoblin_C*>(USylvanGoblin_C::StaticClass()->DefaultObject);

	return Default;
}

}


