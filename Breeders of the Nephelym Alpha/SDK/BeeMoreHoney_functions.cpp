#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeMoreHoney.BeeMoreHoney_C
// (None)

class UClass* UBeeMoreHoney_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeMoreHoney_C");

	return Clss;
}


// BeeMoreHoney_C BeeMoreHoney.Default__BeeMoreHoney_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeMoreHoney_C* UBeeMoreHoney_C::GetDefaultObj()
{
	static class UBeeMoreHoney_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeMoreHoney_C*>(UBeeMoreHoney_C::StaticClass()->DefaultObject);

	return Default;
}

}


