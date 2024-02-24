#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlST_R.CowgirlST_R_C
// (None)

class UClass* UCowgirlST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlST_R_C");

	return Clss;
}


// CowgirlST_R_C CowgirlST_R.Default__CowgirlST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlST_R_C* UCowgirlST_R_C::GetDefaultObj()
{
	static class UCowgirlST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlST_R_C*>(UCowgirlST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


