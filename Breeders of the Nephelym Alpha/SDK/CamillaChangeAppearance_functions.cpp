#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaChangeAppearance.CamillaChangeAppearance_C
// (None)

class UClass* UCamillaChangeAppearance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaChangeAppearance_C");

	return Clss;
}


// CamillaChangeAppearance_C CamillaChangeAppearance.Default__CamillaChangeAppearance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaChangeAppearance_C* UCamillaChangeAppearance_C::GetDefaultObj()
{
	static class UCamillaChangeAppearance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaChangeAppearance_C*>(UCamillaChangeAppearance_C::StaticClass()->DefaultObject);

	return Default;
}

}


