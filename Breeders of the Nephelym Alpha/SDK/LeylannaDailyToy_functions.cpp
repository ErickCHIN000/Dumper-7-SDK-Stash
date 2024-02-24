#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDailyToy.LeylannaDailyToy_C
// (None)

class UClass* ULeylannaDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDailyToy_C");

	return Clss;
}


// LeylannaDailyToy_C LeylannaDailyToy.Default__LeylannaDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDailyToy_C* ULeylannaDailyToy_C::GetDefaultObj()
{
	static class ULeylannaDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDailyToy_C*>(ULeylannaDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


