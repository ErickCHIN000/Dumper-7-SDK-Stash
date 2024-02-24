#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedML_G.BaseLiftedML_G_C
// (None)

class UClass* UBaseLiftedML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedML_G_C");

	return Clss;
}


// BaseLiftedML_G_C BaseLiftedML_G.Default__BaseLiftedML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedML_G_C* UBaseLiftedML_G_C::GetDefaultObj()
{
	static class UBaseLiftedML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedML_G_C*>(UBaseLiftedML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


