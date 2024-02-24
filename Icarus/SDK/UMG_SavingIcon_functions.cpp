#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SavingIcon.UMG_SavingIcon_C
// (None)

class UClass* UUMG_SavingIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SavingIcon_C");

	return Clss;
}


// UMG_SavingIcon_C UMG_SavingIcon.Default__UMG_SavingIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SavingIcon_C* UUMG_SavingIcon_C::GetDefaultObj()
{
	static class UUMG_SavingIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SavingIcon_C*>(UUMG_SavingIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SavingIcon.UMG_SavingIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SavingIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SavingIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SavingIcon.UMG_SavingIcon_C.ExecuteUbergraph_UMG_SavingIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SavingIcon_C::ExecuteUbergraph_UMG_SavingIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SavingIcon_C", "ExecuteUbergraph_UMG_SavingIcon");

	Params::UUMG_SavingIcon_C_ExecuteUbergraph_UMG_SavingIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


