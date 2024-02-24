#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_TakeScreenshot.CF_TakeScreenshot_C
// (None)

class UClass* UCF_TakeScreenshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_TakeScreenshot_C");

	return Clss;
}


// CF_TakeScreenshot_C CF_TakeScreenshot.Default__CF_TakeScreenshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_TakeScreenshot_C* UCF_TakeScreenshot_C::GetDefaultObj()
{
	static class UCF_TakeScreenshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_TakeScreenshot_C*>(UCF_TakeScreenshot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_TakeScreenshot.CF_TakeScreenshot_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_TakeScreenshot_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_TakeScreenshot_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_TakeScreenshot.CF_TakeScreenshot_C.ExecuteUbergraph_CF_TakeScreenshot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFallbackStruct             K2Node_MakeStruct_AutomationScreenshotOptions                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_TakeScreenshot_C::ExecuteUbergraph_CF_TakeScreenshot(int32 EntryPoint, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFallbackStruct& K2Node_MakeStruct_AutomationScreenshotOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_TakeScreenshot_C", "ExecuteUbergraph_CF_TakeScreenshot");

	Params::UCF_TakeScreenshot_C_ExecuteUbergraph_CF_TakeScreenshot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCheatOverlay_ReturnValue = CallFunc_GetCheatOverlay_ReturnValue;
	Parms.CallFunc_GetCheatOverlay_ReturnValue_1 = CallFunc_GetCheatOverlay_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_AutomationScreenshotOptions = K2Node_MakeStruct_AutomationScreenshotOptions;

	UObject::ProcessEvent(Func, &Parms);

}

}


