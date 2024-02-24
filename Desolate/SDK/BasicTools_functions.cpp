#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasicTools.BasicTools_C
// (Actor)

class UClass* ABasicTools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicTools_C");

	return Clss;
}


// BasicTools_C BasicTools.Default__BasicTools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasicTools_C* ABasicTools_C::GetDefaultObj()
{
	static class ABasicTools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasicTools_C*>(ABasicTools_C::StaticClass()->DefaultObject);

	return Default;
}

}


