#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDefault01_Meow_StartSplinters.CassieDefault01_Meow_StartSplinters_C
// (None)

class UClass* UCassieDefault01_Meow_StartSplinters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDefault01_Meow_StartSplinters_C");

	return Clss;
}


// CassieDefault01_Meow_StartSplinters_C CassieDefault01_Meow_StartSplinters.Default__CassieDefault01_Meow_StartSplinters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDefault01_Meow_StartSplinters_C* UCassieDefault01_Meow_StartSplinters_C::GetDefaultObj()
{
	static class UCassieDefault01_Meow_StartSplinters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDefault01_Meow_StartSplinters_C*>(UCassieDefault01_Meow_StartSplinters_C::StaticClass()->DefaultObject);

	return Default;
}

}


