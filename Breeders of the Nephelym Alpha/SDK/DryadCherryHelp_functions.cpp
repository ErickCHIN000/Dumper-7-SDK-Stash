#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadCherryHelp.DryadCherryHelp_C
// (None)

class UClass* UDryadCherryHelp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadCherryHelp_C");

	return Clss;
}


// DryadCherryHelp_C DryadCherryHelp.Default__DryadCherryHelp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadCherryHelp_C* UDryadCherryHelp_C::GetDefaultObj()
{
	static class UDryadCherryHelp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadCherryHelp_C*>(UDryadCherryHelp_C::StaticClass()->DefaultObject);

	return Default;
}

}


