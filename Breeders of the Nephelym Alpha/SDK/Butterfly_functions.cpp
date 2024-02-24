#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butterfly.Butterfly_C
// (None)

class UClass* UButterfly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butterfly_C");

	return Clss;
}


// Butterfly_C Butterfly.Default__Butterfly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterfly_C* UButterfly_C::GetDefaultObj()
{
	static class UButterfly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterfly_C*>(UButterfly_C::StaticClass()->DefaultObject);

	return Default;
}

}


