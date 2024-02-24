#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HybridDaevaF.HybridDaevaF_C
// (None)

class UClass* UHybridDaevaF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HybridDaevaF_C");

	return Clss;
}


// HybridDaevaF_C HybridDaevaF.Default__HybridDaevaF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHybridDaevaF_C* UHybridDaevaF_C::GetDefaultObj()
{
	static class UHybridDaevaF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHybridDaevaF_C*>(UHybridDaevaF_C::StaticClass()->DefaultObject);

	return Default;
}

}


