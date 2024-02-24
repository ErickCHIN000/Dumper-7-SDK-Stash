#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Collection_Shaman_Spirits.Collection_Shaman_Spirits_C
// (None)

class UClass* UCollection_Shaman_Spirits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Collection_Shaman_Spirits_C");

	return Clss;
}


// Collection_Shaman_Spirits_C Collection_Shaman_Spirits.Default__Collection_Shaman_Spirits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollection_Shaman_Spirits_C* UCollection_Shaman_Spirits_C::GetDefaultObj()
{
	static class UCollection_Shaman_Spirits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollection_Shaman_Spirits_C*>(UCollection_Shaman_Spirits_C::StaticClass()->DefaultObject);

	return Default;
}

}


