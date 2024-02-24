#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Food_Medium.LL_Food_Medium_C
// (Actor)

class UClass* ALL_Food_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Food_Medium_C");

	return Clss;
}


// LL_Food_Medium_C LL_Food_Medium.Default__LL_Food_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Food_Medium_C* ALL_Food_Medium_C::GetDefaultObj()
{
	static class ALL_Food_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Food_Medium_C*>(ALL_Food_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


