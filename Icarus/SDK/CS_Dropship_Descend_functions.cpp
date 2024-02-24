#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Dropship_Descend.CS_Dropship_Descend_C
// (None)

class UClass* UCS_Dropship_Descend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Dropship_Descend_C");

	return Clss;
}


// CS_Dropship_Descend_C CS_Dropship_Descend.Default__CS_Dropship_Descend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Dropship_Descend_C* UCS_Dropship_Descend_C::GetDefaultObj()
{
	static class UCS_Dropship_Descend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Dropship_Descend_C*>(UCS_Dropship_Descend_C::StaticClass()->DefaultObject);

	return Default;
}

}


