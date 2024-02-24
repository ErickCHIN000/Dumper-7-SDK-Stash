#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadStartMakeCherry.DryadStartMakeCherry_C
// (None)

class UClass* UDryadStartMakeCherry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadStartMakeCherry_C");

	return Clss;
}


// DryadStartMakeCherry_C DryadStartMakeCherry.Default__DryadStartMakeCherry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadStartMakeCherry_C* UDryadStartMakeCherry_C::GetDefaultObj()
{
	static class UDryadStartMakeCherry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadStartMakeCherry_C*>(UDryadStartMakeCherry_C::StaticClass()->DefaultObject);

	return Default;
}

}


