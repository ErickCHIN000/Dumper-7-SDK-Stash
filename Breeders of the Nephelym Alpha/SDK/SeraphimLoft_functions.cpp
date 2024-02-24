#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SeraphimLoft.SeraphimLoft_C
// (None)

class UClass* USeraphimLoft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeraphimLoft_C");

	return Clss;
}


// SeraphimLoft_C SeraphimLoft.Default__SeraphimLoft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeraphimLoft_C* USeraphimLoft_C::GetDefaultObj()
{
	static class USeraphimLoft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeraphimLoft_C*>(USeraphimLoft_C::StaticClass()->DefaultObject);

	return Default;
}

}


