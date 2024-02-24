#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MacroLibrary_Dialog_Mission.MacroLibrary_Dialog_Mission_C
// (None)

class UClass* UMacroLibrary_Dialog_Mission_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MacroLibrary_Dialog_Mission_C");

	return Clss;
}


// MacroLibrary_Dialog_Mission_C MacroLibrary_Dialog_Mission.Default__MacroLibrary_Dialog_Mission_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMacroLibrary_Dialog_Mission_C* UMacroLibrary_Dialog_Mission_C::GetDefaultObj()
{
	static class UMacroLibrary_Dialog_Mission_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMacroLibrary_Dialog_Mission_C*>(UMacroLibrary_Dialog_Mission_C::StaticClass()->DefaultObject);

	return Default;
}

}


