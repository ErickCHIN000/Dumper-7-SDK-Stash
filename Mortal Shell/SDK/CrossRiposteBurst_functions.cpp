#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CrossRiposteBurst.CrossRiposteBurst_C
// (None)

class UClass* UCrossRiposteBurst_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrossRiposteBurst_C");

	return Clss;
}


// CrossRiposteBurst_C CrossRiposteBurst.Default__CrossRiposteBurst_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrossRiposteBurst_C* UCrossRiposteBurst_C::GetDefaultObj()
{
	static class UCrossRiposteBurst_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrossRiposteBurst_C*>(UCrossRiposteBurst_C::StaticClass()->DefaultObject);

	return Default;
}

}


