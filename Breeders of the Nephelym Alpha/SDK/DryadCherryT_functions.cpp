#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadCherryT.DryadCherryT_C
// (None)

class UClass* UDryadCherryT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadCherryT_C");

	return Clss;
}


// DryadCherryT_C DryadCherryT.Default__DryadCherryT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadCherryT_C* UDryadCherryT_C::GetDefaultObj()
{
	static class UDryadCherryT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadCherryT_C*>(UDryadCherryT_C::StaticClass()->DefaultObject);

	return Default;
}

}


