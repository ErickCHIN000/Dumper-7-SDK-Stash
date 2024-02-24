#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SafeZoneUI.SafeZoneUI_C
// (None)

class UClass* USafeZoneUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeZoneUI_C");

	return Clss;
}


// SafeZoneUI_C SafeZoneUI.Default__SafeZoneUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USafeZoneUI_C* USafeZoneUI_C::GetDefaultObj()
{
	static class USafeZoneUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USafeZoneUI_C*>(USafeZoneUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SafeZoneUI.SafeZoneUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USafeZoneUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneUI.SafeZoneUI_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USafeZoneUI_C::Destroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneUI_C", "Destroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SafeZoneUI.SafeZoneUI_C.ExecuteUbergraph_SafeZoneUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USafeZoneUI_C::ExecuteUbergraph_SafeZoneUI(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZoneUI_C", "ExecuteUbergraph_SafeZoneUI");

	Params::USafeZoneUI_C_ExecuteUbergraph_SafeZoneUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


