#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LockIcon.WB_LockIcon_C
// (None)

class UClass* UWB_LockIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LockIcon_C");

	return Clss;
}


// WB_LockIcon_C WB_LockIcon.Default__WB_LockIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LockIcon_C* UWB_LockIcon_C::GetDefaultObj()
{
	static class UWB_LockIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LockIcon_C*>(UWB_LockIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LockIcon.WB_LockIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LockIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LockIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LockIcon.WB_LockIcon_C.ExecuteUbergraph_WB_LockIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LockIcon_C::ExecuteUbergraph_WB_LockIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LockIcon_C", "ExecuteUbergraph_WB_LockIcon");

	Params::UWB_LockIcon_C_ExecuteUbergraph_WB_LockIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


