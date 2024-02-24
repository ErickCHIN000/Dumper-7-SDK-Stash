#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedHS_G.BaseLiftedHS_G_C
// (None)

class UClass* UBaseLiftedHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedHS_G_C");

	return Clss;
}


// BaseLiftedHS_G_C BaseLiftedHS_G.Default__BaseLiftedHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedHS_G_C* UBaseLiftedHS_G_C::GetDefaultObj()
{
	static class UBaseLiftedHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedHS_G_C*>(UBaseLiftedHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


