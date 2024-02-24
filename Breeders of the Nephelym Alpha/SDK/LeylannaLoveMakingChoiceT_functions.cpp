#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaLoveMakingChoiceT.LeylannaLoveMakingChoiceT_C
// (None)

class UClass* ULeylannaLoveMakingChoiceT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaLoveMakingChoiceT_C");

	return Clss;
}


// LeylannaLoveMakingChoiceT_C LeylannaLoveMakingChoiceT.Default__LeylannaLoveMakingChoiceT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaLoveMakingChoiceT_C* ULeylannaLoveMakingChoiceT_C::GetDefaultObj()
{
	static class ULeylannaLoveMakingChoiceT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaLoveMakingChoiceT_C*>(ULeylannaLoveMakingChoiceT_C::StaticClass()->DefaultObject);

	return Default;
}

}


