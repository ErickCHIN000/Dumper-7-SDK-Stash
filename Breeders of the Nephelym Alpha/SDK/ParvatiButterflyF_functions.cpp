#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiButterflyF.ParvatiButterflyF_C
// (None)

class UClass* UParvatiButterflyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiButterflyF_C");

	return Clss;
}


// ParvatiButterflyF_C ParvatiButterflyF.Default__ParvatiButterflyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiButterflyF_C* UParvatiButterflyF_C::GetDefaultObj()
{
	static class UParvatiButterflyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiButterflyF_C*>(UParvatiButterflyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


