#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Collection_WyvernCompanion_Breath.Collection_WyvernCompanion_Breath_C
// (None)

class UClass* UCollection_WyvernCompanion_Breath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Collection_WyvernCompanion_Breath_C");

	return Clss;
}


// Collection_WyvernCompanion_Breath_C Collection_WyvernCompanion_Breath.Default__Collection_WyvernCompanion_Breath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollection_WyvernCompanion_Breath_C* UCollection_WyvernCompanion_Breath_C::GetDefaultObj()
{
	static class UCollection_WyvernCompanion_Breath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollection_WyvernCompanion_Breath_C*>(UCollection_WyvernCompanion_Breath_C::StaticClass()->DefaultObject);

	return Default;
}

}


