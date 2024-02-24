#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNN_G.BaseSemenNN_G_C
// (None)

class UClass* UBaseSemenNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNN_G_C");

	return Clss;
}


// BaseSemenNN_G_C BaseSemenNN_G.Default__BaseSemenNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNN_G_C* UBaseSemenNN_G_C::GetDefaultObj()
{
	static class UBaseSemenNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNN_G_C*>(UBaseSemenNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


