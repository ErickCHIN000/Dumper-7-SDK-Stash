#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoxenSionnachM.FoxenSionnachM_C
// (None)

class UClass* UFoxenSionnachM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoxenSionnachM_C");

	return Clss;
}


// FoxenSionnachM_C FoxenSionnachM.Default__FoxenSionnachM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoxenSionnachM_C* UFoxenSionnachM_C::GetDefaultObj()
{
	static class UFoxenSionnachM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoxenSionnachM_C*>(UFoxenSionnachM_C::StaticClass()->DefaultObject);

	return Default;
}

}


