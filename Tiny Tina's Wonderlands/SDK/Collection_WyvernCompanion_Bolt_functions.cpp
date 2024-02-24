#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Collection_WyvernCompanion_Bolt.Collection_WyvernCompanion_Bolt_C
// (None)

class UClass* UCollection_WyvernCompanion_Bolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Collection_WyvernCompanion_Bolt_C");

	return Clss;
}


// Collection_WyvernCompanion_Bolt_C Collection_WyvernCompanion_Bolt.Default__Collection_WyvernCompanion_Bolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollection_WyvernCompanion_Bolt_C* UCollection_WyvernCompanion_Bolt_C::GetDefaultObj()
{
	static class UCollection_WyvernCompanion_Bolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollection_WyvernCompanion_Bolt_C*>(UCollection_WyvernCompanion_Bolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


