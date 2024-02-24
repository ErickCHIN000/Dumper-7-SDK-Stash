#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Formurian.Formurian_C
// (None)

class UClass* UFormurian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Formurian_C");

	return Clss;
}


// Formurian_C Formurian.Default__Formurian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFormurian_C* UFormurian_C::GetDefaultObj()
{
	static class UFormurian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFormurian_C*>(UFormurian_C::StaticClass()->DefaultObject);

	return Default;
}

}


