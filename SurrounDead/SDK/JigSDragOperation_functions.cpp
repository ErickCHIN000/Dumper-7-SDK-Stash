#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JigSDragOperation.JigSDragOperation_C
// (None)

class UClass* UJigSDragOperation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JigSDragOperation_C");

	return Clss;
}


// JigSDragOperation_C JigSDragOperation.Default__JigSDragOperation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJigSDragOperation_C* UJigSDragOperation_C::GetDefaultObj()
{
	static class UJigSDragOperation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJigSDragOperation_C*>(UJigSDragOperation_C::StaticClass()->DefaultObject);

	return Default;
}

}


