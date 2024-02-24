#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchStartShySexT.MonarchStartShySexT_C
// (None)

class UClass* UMonarchStartShySexT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchStartShySexT_C");

	return Clss;
}


// MonarchStartShySexT_C MonarchStartShySexT.Default__MonarchStartShySexT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchStartShySexT_C* UMonarchStartShySexT_C::GetDefaultObj()
{
	static class UMonarchStartShySexT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchStartShySexT_C*>(UMonarchStartShySexT_C::StaticClass()->DefaultObject);

	return Default;
}

}


