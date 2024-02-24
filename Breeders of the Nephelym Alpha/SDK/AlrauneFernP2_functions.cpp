#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AlrauneFernP2.AlrauneFernP2_C
// (None)

class UClass* UAlrauneFernP2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlrauneFernP2_C");

	return Clss;
}


// AlrauneFernP2_C AlrauneFernP2.Default__AlrauneFernP2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlrauneFernP2_C* UAlrauneFernP2_C::GetDefaultObj()
{
	static class UAlrauneFernP2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlrauneFernP2_C*>(UAlrauneFernP2_C::StaticClass()->DefaultObject);

	return Default;
}

}


