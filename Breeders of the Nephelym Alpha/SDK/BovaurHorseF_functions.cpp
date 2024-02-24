#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurHorseF.BovaurHorseF_C
// (None)

class UClass* UBovaurHorseF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurHorseF_C");

	return Clss;
}


// BovaurHorseF_C BovaurHorseF.Default__BovaurHorseF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurHorseF_C* UBovaurHorseF_C::GetDefaultObj()
{
	static class UBovaurHorseF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurHorseF_C*>(UBovaurHorseF_C::StaticClass()->DefaultObject);

	return Default;
}

}


