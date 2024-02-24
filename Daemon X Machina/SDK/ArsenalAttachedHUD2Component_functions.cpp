#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalAttachedHUD2Component.ArsenalAttachedHUD2Component_C
// (None)

class UClass* UArsenalAttachedHUD2Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalAttachedHUD2Component_C");

	return Clss;
}


// ArsenalAttachedHUD2Component_C ArsenalAttachedHUD2Component.Default__ArsenalAttachedHUD2Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalAttachedHUD2Component_C* UArsenalAttachedHUD2Component_C::GetDefaultObj()
{
	static class UArsenalAttachedHUD2Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalAttachedHUD2Component_C*>(UArsenalAttachedHUD2Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalAttachedHUD2Component.ArsenalAttachedHUD2Component_C.ChangeMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsArsenalMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalAttachedHUD2Component_C::ChangeMode(bool IsArsenalMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUD2Component_C", "ChangeMode");

	Params::UArsenalAttachedHUD2Component_C_ChangeMode_Params Parms{};

	Parms.IsArsenalMode = IsArsenalMode;

	UObject::ProcessEvent(Func, &Parms);

}

}


