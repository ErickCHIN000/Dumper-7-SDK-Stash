#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlST_G.CowgirlST_G_C
// (None)

class UClass* UCowgirlST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlST_G_C");

	return Clss;
}


// CowgirlST_G_C CowgirlST_G.Default__CowgirlST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlST_G_C* UCowgirlST_G_C::GetDefaultObj()
{
	static class UCowgirlST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlST_G_C*>(UCowgirlST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


