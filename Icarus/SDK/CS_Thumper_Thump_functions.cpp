#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Thumper_Thump.CS_Thumper_Thump_C
// (None)

class UClass* UCS_Thumper_Thump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Thumper_Thump_C");

	return Clss;
}


// CS_Thumper_Thump_C CS_Thumper_Thump.Default__CS_Thumper_Thump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Thumper_Thump_C* UCS_Thumper_Thump_C::GetDefaultObj()
{
	static class UCS_Thumper_Thump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Thumper_Thump_C*>(UCS_Thumper_Thump_C::StaticClass()->DefaultObject);

	return Default;
}

}


