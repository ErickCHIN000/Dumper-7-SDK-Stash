#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TitleScreen.TitleScreen_C
// (None)

class UClass* UTitleScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleScreen_C");

	return Clss;
}


// TitleScreen_C TitleScreen.Default__TitleScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleScreen_C* UTitleScreen_C::GetDefaultObj()
{
	static class UTitleScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleScreen_C*>(UTitleScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleScreen.TitleScreen_C.GetPlatform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBoolean                CallFunc_IfConsole_OutResult                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_C::GetPlatform(enum class EBoolean CallFunc_IfConsole_OutResult, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_C", "GetPlatform");

	Params::UTitleScreen_C_GetPlatform_Params Parms{};

	Parms.CallFunc_IfConsole_OutResult = CallFunc_IfConsole_OutResult;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen.TitleScreen_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitleScreen_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreen.TitleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitleScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreen.TitleScreen_C.ExecuteUbergraph_TitleScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_C::ExecuteUbergraph_TitleScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_C", "ExecuteUbergraph_TitleScreen");

	Params::UTitleScreen_C_ExecuteUbergraph_TitleScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


