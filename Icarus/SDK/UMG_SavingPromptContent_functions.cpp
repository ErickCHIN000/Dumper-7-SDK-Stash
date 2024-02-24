#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SavingPromptContent.UMG_SavingPromptContent_C
// (None)

class UClass* UUMG_SavingPromptContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SavingPromptContent_C");

	return Clss;
}


// UMG_SavingPromptContent_C UMG_SavingPromptContent.Default__UMG_SavingPromptContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SavingPromptContent_C* UUMG_SavingPromptContent_C::GetDefaultObj()
{
	static class UUMG_SavingPromptContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SavingPromptContent_C*>(UUMG_SavingPromptContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SavingPromptContent.UMG_SavingPromptContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SavingPromptContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SavingPromptContent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SavingPromptContent.UMG_SavingPromptContent_C.ExecuteUbergraph_UMG_SavingPromptContent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SavingPromptContent_C::ExecuteUbergraph_UMG_SavingPromptContent(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SavingPromptContent_C", "ExecuteUbergraph_UMG_SavingPromptContent");

	Params::UUMG_SavingPromptContent_C_ExecuteUbergraph_UMG_SavingPromptContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


