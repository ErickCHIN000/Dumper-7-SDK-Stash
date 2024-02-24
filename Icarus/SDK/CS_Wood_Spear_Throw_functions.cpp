#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Wood_Spear_Throw.CS_Wood_Spear_Throw_C
// (None)

class UClass* UCS_Wood_Spear_Throw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Wood_Spear_Throw_C");

	return Clss;
}


// CS_Wood_Spear_Throw_C CS_Wood_Spear_Throw.Default__CS_Wood_Spear_Throw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Wood_Spear_Throw_C* UCS_Wood_Spear_Throw_C::GetDefaultObj()
{
	static class UCS_Wood_Spear_Throw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Wood_Spear_Throw_C*>(UCS_Wood_Spear_Throw_C::StaticClass()->DefaultObject);

	return Default;
}

}


