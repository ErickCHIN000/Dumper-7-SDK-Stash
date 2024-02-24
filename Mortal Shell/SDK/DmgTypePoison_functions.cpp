#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypePoison.DmgTypePoison_C
// (None)

class UClass* UDmgTypePoison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypePoison_C");

	return Clss;
}


// DmgTypePoison_C DmgTypePoison.Default__DmgTypePoison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypePoison_C* UDmgTypePoison_C::GetDefaultObj()
{
	static class UDmgTypePoison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypePoison_C*>(UDmgTypePoison_C::StaticClass()->DefaultObject);

	return Default;
}

}


