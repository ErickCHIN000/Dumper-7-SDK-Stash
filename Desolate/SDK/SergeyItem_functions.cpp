#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SergeyItem.SergeyItem_C
// (Actor)

class UClass* ASergeyItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SergeyItem_C");

	return Clss;
}


// SergeyItem_C SergeyItem.Default__SergeyItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASergeyItem_C* ASergeyItem_C::GetDefaultObj()
{
	static class ASergeyItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASergeyItem_C*>(ASergeyItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


