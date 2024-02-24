#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_AyrshireDefault.CS_AyrshireDefault_C
// (None)

class UClass* UCS_AyrshireDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_AyrshireDefault_C");

	return Clss;
}


// CS_AyrshireDefault_C CS_AyrshireDefault.Default__CS_AyrshireDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_AyrshireDefault_C* UCS_AyrshireDefault_C::GetDefaultObj()
{
	static class UCS_AyrshireDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_AyrshireDefault_C*>(UCS_AyrshireDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


