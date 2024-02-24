#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDefault01.CassieDefault01_C
// (None)

class UClass* UCassieDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDefault01_C");

	return Clss;
}


// CassieDefault01_C CassieDefault01.Default__CassieDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDefault01_C* UCassieDefault01_C::GetDefaultObj()
{
	static class UCassieDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDefault01_C*>(UCassieDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


