#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiAreYouOk.FesssiAreYouOk_C
// (None)

class UClass* UFesssiAreYouOk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiAreYouOk_C");

	return Clss;
}


// FesssiAreYouOk_C FesssiAreYouOk.Default__FesssiAreYouOk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiAreYouOk_C* UFesssiAreYouOk_C::GetDefaultObj()
{
	static class UFesssiAreYouOk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiAreYouOk_C*>(UFesssiAreYouOk_C::StaticClass()->DefaultObject);

	return Default;
}

}


