#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_TrashMain.LL_TrashMain_C
// (Actor)

class UClass* ALL_TrashMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_TrashMain_C");

	return Clss;
}


// LL_TrashMain_C LL_TrashMain.Default__LL_TrashMain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_TrashMain_C* ALL_TrashMain_C::GetDefaultObj()
{
	static class ALL_TrashMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_TrashMain_C*>(ALL_TrashMain_C::StaticClass()->DefaultObject);

	return Default;
}

}


