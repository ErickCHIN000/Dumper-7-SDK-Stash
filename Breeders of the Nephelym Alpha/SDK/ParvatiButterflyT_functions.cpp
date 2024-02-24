#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiButterflyT.ParvatiButterflyT_C
// (None)

class UClass* UParvatiButterflyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiButterflyT_C");

	return Clss;
}


// ParvatiButterflyT_C ParvatiButterflyT.Default__ParvatiButterflyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiButterflyT_C* UParvatiButterflyT_C::GetDefaultObj()
{
	static class UParvatiButterflyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiButterflyT_C*>(UParvatiButterflyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


