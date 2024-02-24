#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_ColossusDefault.CS_ColossusDefault_C
// (None)

class UClass* UCS_ColossusDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_ColossusDefault_C");

	return Clss;
}


// CS_ColossusDefault_C CS_ColossusDefault.Default__CS_ColossusDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_ColossusDefault_C* UCS_ColossusDefault_C::GetDefaultObj()
{
	static class UCS_ColossusDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_ColossusDefault_C*>(UCS_ColossusDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


