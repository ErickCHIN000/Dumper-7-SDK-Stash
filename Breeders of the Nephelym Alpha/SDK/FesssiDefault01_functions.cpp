#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiDefault01.FesssiDefault01_C
// (None)

class UClass* UFesssiDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiDefault01_C");

	return Clss;
}


// FesssiDefault01_C FesssiDefault01.Default__FesssiDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiDefault01_C* UFesssiDefault01_C::GetDefaultObj()
{
	static class UFesssiDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiDefault01_C*>(UFesssiDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


