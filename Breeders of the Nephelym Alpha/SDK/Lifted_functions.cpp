#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lifted.Lifted_C
// (None)

class UClass* ULifted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lifted_C");

	return Clss;
}


// Lifted_C Lifted.Default__Lifted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULifted_C* ULifted_C::GetDefaultObj()
{
	static class ULifted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULifted_C*>(ULifted_C::StaticClass()->DefaultObject);

	return Default;
}

}


