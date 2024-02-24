#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedMN_G.BaseLiftedMN_G_C
// (None)

class UClass* UBaseLiftedMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedMN_G_C");

	return Clss;
}


// BaseLiftedMN_G_C BaseLiftedMN_G.Default__BaseLiftedMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedMN_G_C* UBaseLiftedMN_G_C::GetDefaultObj()
{
	static class UBaseLiftedMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedMN_G_C*>(UBaseLiftedMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


