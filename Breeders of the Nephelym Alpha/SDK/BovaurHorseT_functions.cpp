#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurHorseT.BovaurHorseT_C
// (None)

class UClass* UBovaurHorseT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurHorseT_C");

	return Clss;
}


// BovaurHorseT_C BovaurHorseT.Default__BovaurHorseT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurHorseT_C* UBovaurHorseT_C::GetDefaultObj()
{
	static class UBovaurHorseT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurHorseT_C*>(UBovaurHorseT_C::StaticClass()->DefaultObject);

	return Default;
}

}


