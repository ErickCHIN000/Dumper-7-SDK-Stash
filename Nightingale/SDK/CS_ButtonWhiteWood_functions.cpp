#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_ButtonWhiteWood.CS_ButtonWhiteWood_C
// (None)

class UClass* UCS_ButtonWhiteWood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_ButtonWhiteWood_C");

	return Clss;
}


// CS_ButtonWhiteWood_C CS_ButtonWhiteWood.Default__CS_ButtonWhiteWood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_ButtonWhiteWood_C* UCS_ButtonWhiteWood_C::GetDefaultObj()
{
	static class UCS_ButtonWhiteWood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_ButtonWhiteWood_C*>(UCS_ButtonWhiteWood_C::StaticClass()->DefaultObject);

	return Default;
}

}


