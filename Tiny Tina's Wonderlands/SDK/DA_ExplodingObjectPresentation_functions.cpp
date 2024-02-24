#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_ExplodingObjectPresentation.DA_ExplodingObjectPresentation_C
// (None)

class UClass* UDA_ExplodingObjectPresentation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_ExplodingObjectPresentation_C");

	return Clss;
}


// DA_ExplodingObjectPresentation_C DA_ExplodingObjectPresentation.Default__DA_ExplodingObjectPresentation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_ExplodingObjectPresentation_C* UDA_ExplodingObjectPresentation_C::GetDefaultObj()
{
	static class UDA_ExplodingObjectPresentation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_ExplodingObjectPresentation_C*>(UDA_ExplodingObjectPresentation_C::StaticClass()->DefaultObject);

	return Default;
}

}


