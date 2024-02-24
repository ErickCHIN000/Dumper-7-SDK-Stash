#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MacroLibrary_Shared.MacroLibrary_Shared_C
// (None)

class UClass* UMacroLibrary_Shared_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MacroLibrary_Shared_C");

	return Clss;
}


// MacroLibrary_Shared_C MacroLibrary_Shared.Default__MacroLibrary_Shared_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMacroLibrary_Shared_C* UMacroLibrary_Shared_C::GetDefaultObj()
{
	static class UMacroLibrary_Shared_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMacroLibrary_Shared_C*>(UMacroLibrary_Shared_C::StaticClass()->DefaultObject);

	return Default;
}

}


