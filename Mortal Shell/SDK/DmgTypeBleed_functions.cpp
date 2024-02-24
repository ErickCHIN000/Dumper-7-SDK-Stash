#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeBleed.DmgTypeBleed_C
// (None)

class UClass* UDmgTypeBleed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeBleed_C");

	return Clss;
}


// DmgTypeBleed_C DmgTypeBleed.Default__DmgTypeBleed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeBleed_C* UDmgTypeBleed_C::GetDefaultObj()
{
	static class UDmgTypeBleed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeBleed_C*>(UDmgTypeBleed_C::StaticClass()->DefaultObject);

	return Default;
}

}


