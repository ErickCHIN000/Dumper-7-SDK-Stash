#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_DrakeDefault.CS_DrakeDefault_C
// (None)

class UClass* UCS_DrakeDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_DrakeDefault_C");

	return Clss;
}


// CS_DrakeDefault_C CS_DrakeDefault.Default__CS_DrakeDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_DrakeDefault_C* UCS_DrakeDefault_C::GetDefaultObj()
{
	static class UCS_DrakeDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_DrakeDefault_C*>(UCS_DrakeDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


