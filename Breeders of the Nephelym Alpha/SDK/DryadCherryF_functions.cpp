#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadCherryF.DryadCherryF_C
// (None)

class UClass* UDryadCherryF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadCherryF_C");

	return Clss;
}


// DryadCherryF_C DryadCherryF.Default__DryadCherryF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadCherryF_C* UDryadCherryF_C::GetDefaultObj()
{
	static class UDryadCherryF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadCherryF_C*>(UDryadCherryF_C::StaticClass()->DefaultObject);

	return Default;
}

}


