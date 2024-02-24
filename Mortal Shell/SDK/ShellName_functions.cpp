#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShellName.ShellName_C
// (None)

class UClass* UShellName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellName_C");

	return Clss;
}


// ShellName_C ShellName.Default__ShellName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellName_C* UShellName_C::GetDefaultObj()
{
	static class UShellName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellName_C*>(UShellName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellName.ShellName_C.SetShellText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewShellName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UShellName_C::SetShellText(class FText NewShellName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellName_C", "SetShellText");

	Params::UShellName_C_SetShellText_Params Parms{};

	Parms.NewShellName = NewShellName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellName.ShellName_C.ShowAfterDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellName_C::ShowAfterDelay(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellName_C", "ShowAfterDelay");

	Params::UShellName_C_ShowAfterDelay_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellName.ShellName_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellName_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellName_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellName.ShellName_C.ExecuteUbergraph_ShellName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewShellName                                  (None)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellName_C::ExecuteUbergraph_ShellName(int32 EntryPoint, class FText K2Node_CustomEvent_NewShellName, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellName_C", "ExecuteUbergraph_ShellName");

	Params::UShellName_C_ExecuteUbergraph_ShellName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewShellName = K2Node_CustomEvent_NewShellName;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


