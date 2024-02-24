#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CambionMilkNL_G.CambionMilkNL_G_C
// (None)

class UClass* UCambionMilkNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CambionMilkNL_G_C");

	return Clss;
}


// CambionMilkNL_G_C CambionMilkNL_G.Default__CambionMilkNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCambionMilkNL_G_C* UCambionMilkNL_G_C::GetDefaultObj()
{
	static class UCambionMilkNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCambionMilkNL_G_C*>(UCambionMilkNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


