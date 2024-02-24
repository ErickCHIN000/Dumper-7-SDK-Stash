#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandAxe_BagHead.LightBrigandAxe_BagHead_C
// (Actor, Pawn)

class UClass* ALightBrigandAxe_BagHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandAxe_BagHead_C");

	return Clss;
}


// LightBrigandAxe_BagHead_C LightBrigandAxe_BagHead.Default__LightBrigandAxe_BagHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandAxe_BagHead_C* ALightBrigandAxe_BagHead_C::GetDefaultObj()
{
	static class ALightBrigandAxe_BagHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandAxe_BagHead_C*>(ALightBrigandAxe_BagHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


