#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHT_R.CowgirlHT_R_C
// (None)

class UClass* UCowgirlHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHT_R_C");

	return Clss;
}


// CowgirlHT_R_C CowgirlHT_R.Default__CowgirlHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHT_R_C* UCowgirlHT_R_C::GetDefaultObj()
{
	static class UCowgirlHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHT_R_C*>(UCowgirlHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}

