#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadHadSex01.DryadHadSex01_C
// (None)

class UClass* UDryadHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadHadSex01_C");

	return Clss;
}


// DryadHadSex01_C DryadHadSex01.Default__DryadHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadHadSex01_C* UDryadHadSex01_C::GetDefaultObj()
{
	static class UDryadHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadHadSex01_C*>(UDryadHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


