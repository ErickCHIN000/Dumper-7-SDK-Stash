#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_Squad_BoundBase.PDA_Squad_BoundBase_C
// (None)

class UClass* UPDA_Squad_BoundBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_Squad_BoundBase_C");

	return Clss;
}


// PDA_Squad_BoundBase_C PDA_Squad_BoundBase.Default__PDA_Squad_BoundBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_Squad_BoundBase_C* UPDA_Squad_BoundBase_C::GetDefaultObj()
{
	static class UPDA_Squad_BoundBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_Squad_BoundBase_C*>(UPDA_Squad_BoundBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


