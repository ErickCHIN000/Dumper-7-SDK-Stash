#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothDialogue.SlothDialogue_C
// (None)

class UClass* USlothDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothDialogue_C");

	return Clss;
}


// SlothDialogue_C SlothDialogue.Default__SlothDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothDialogue_C* USlothDialogue_C::GetDefaultObj()
{
	static class USlothDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothDialogue_C*>(USlothDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


