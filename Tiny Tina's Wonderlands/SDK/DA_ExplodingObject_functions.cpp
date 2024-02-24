#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_ExplodingObject.DA_ExplodingObject_C
// (None)

class UClass* UDA_ExplodingObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_ExplodingObject_C");

	return Clss;
}


// DA_ExplodingObject_C DA_ExplodingObject.Default__DA_ExplodingObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_ExplodingObject_C* UDA_ExplodingObject_C::GetDefaultObj()
{
	static class UDA_ExplodingObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_ExplodingObject_C*>(UDA_ExplodingObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


