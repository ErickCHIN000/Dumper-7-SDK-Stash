#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BeeDefault.CS_BeeDefault_C
// (None)

class UClass* UCS_BeeDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BeeDefault_C");

	return Clss;
}


// CS_BeeDefault_C CS_BeeDefault.Default__CS_BeeDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BeeDefault_C* UCS_BeeDefault_C::GetDefaultObj()
{
	static class UCS_BeeDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BeeDefault_C*>(UCS_BeeDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


