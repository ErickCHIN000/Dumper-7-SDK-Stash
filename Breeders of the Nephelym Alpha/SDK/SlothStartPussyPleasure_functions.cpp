#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStartPussyPleasure.SlothStartPussyPleasure_C
// (None)

class UClass* USlothStartPussyPleasure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStartPussyPleasure_C");

	return Clss;
}


// SlothStartPussyPleasure_C SlothStartPussyPleasure.Default__SlothStartPussyPleasure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStartPussyPleasure_C* USlothStartPussyPleasure_C::GetDefaultObj()
{
	static class USlothStartPussyPleasure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStartPussyPleasure_C*>(USlothStartPussyPleasure_C::StaticClass()->DefaultObject);

	return Default;
}

}


