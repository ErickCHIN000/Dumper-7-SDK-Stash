#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Crevasse.NavArea_Crevasse_C
// (None)

class UClass* UNavArea_Crevasse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Crevasse_C");

	return Clss;
}


// NavArea_Crevasse_C NavArea_Crevasse.Default__NavArea_Crevasse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Crevasse_C* UNavArea_Crevasse_C::GetDefaultObj()
{
	static class UNavArea_Crevasse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Crevasse_C*>(UNavArea_Crevasse_C::StaticClass()->DefaultObject);

	return Default;
}

}


