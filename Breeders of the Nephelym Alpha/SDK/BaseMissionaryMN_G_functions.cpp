#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMN_G.BaseMissionaryMN_G_C
// (None)

class UClass* UBaseMissionaryMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMN_G_C");

	return Clss;
}


// BaseMissionaryMN_G_C BaseMissionaryMN_G.Default__BaseMissionaryMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMN_G_C* UBaseMissionaryMN_G_C::GetDefaultObj()
{
	static class UBaseMissionaryMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMN_G_C*>(UBaseMissionaryMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


