#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStartPussyLick.SlothStartPussyLick_C
// (None)

class UClass* USlothStartPussyLick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStartPussyLick_C");

	return Clss;
}


// SlothStartPussyLick_C SlothStartPussyLick.Default__SlothStartPussyLick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStartPussyLick_C* USlothStartPussyLick_C::GetDefaultObj()
{
	static class USlothStartPussyLick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStartPussyLick_C*>(USlothStartPussyLick_C::StaticClass()->DefaultObject);

	return Default;
}

}


