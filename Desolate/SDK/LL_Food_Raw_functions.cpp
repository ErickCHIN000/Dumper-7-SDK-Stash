#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Food_Raw.LL_Food_Raw_C
// (Actor)

class UClass* ALL_Food_Raw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Food_Raw_C");

	return Clss;
}


// LL_Food_Raw_C LL_Food_Raw.Default__LL_Food_Raw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Food_Raw_C* ALL_Food_Raw_C::GetDefaultObj()
{
	static class ALL_Food_Raw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Food_Raw_C*>(ALL_Food_Raw_C::StaticClass()->DefaultObject);

	return Default;
}

}


