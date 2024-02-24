#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeKneel.BeeKneel_C
// (None)

class UClass* UBeeKneel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeKneel_C");

	return Clss;
}


// BeeKneel_C BeeKneel.Default__BeeKneel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeKneel_C* UBeeKneel_C::GetDefaultObj()
{
	static class UBeeKneel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeKneel_C*>(UBeeKneel_C::StaticClass()->DefaultObject);

	return Default;
}

}


