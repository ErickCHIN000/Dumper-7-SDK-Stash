#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AlrauneFern.AlrauneFern_C
// (None)

class UClass* UAlrauneFern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlrauneFern_C");

	return Clss;
}


// AlrauneFern_C AlrauneFern.Default__AlrauneFern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlrauneFern_C* UAlrauneFern_C::GetDefaultObj()
{
	static class UAlrauneFern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlrauneFern_C*>(UAlrauneFern_C::StaticClass()->DefaultObject);

	return Default;
}

}


