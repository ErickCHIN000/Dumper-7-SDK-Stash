#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_GriffinDefault.CS_GriffinDefault_C
// (None)

class UClass* UCS_GriffinDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_GriffinDefault_C");

	return Clss;
}


// CS_GriffinDefault_C CS_GriffinDefault.Default__CS_GriffinDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_GriffinDefault_C* UCS_GriffinDefault_C::GetDefaultObj()
{
	static class UCS_GriffinDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_GriffinDefault_C*>(UCS_GriffinDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


