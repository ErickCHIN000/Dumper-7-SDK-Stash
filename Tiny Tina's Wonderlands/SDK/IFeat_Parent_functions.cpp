#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IFeat_Parent.IFeat_Parent_C
// (None)

class UClass* IIFeat_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFeat_Parent_C");

	return Clss;
}


// IFeat_Parent_C IFeat_Parent.Default__IFeat_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIFeat_Parent_C* IIFeat_Parent_C::GetDefaultObj()
{
	static class IIFeat_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIFeat_Parent_C*>(IIFeat_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


