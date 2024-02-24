#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_Set.CF_Set_C
// (None)

class UClass* UCF_Set_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_Set_C");

	return Clss;
}


// CF_Set_C CF_Set.Default__CF_Set_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_Set_C* UCF_Set_C::GetDefaultObj()
{
	static class UCF_Set_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_Set_C*>(UCF_Set_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_Set.CF_Set_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_Set_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_Set_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_Set.CF_Set_C.ExecuteUbergraph_CF_Set
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCheatVariable_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_Set_C::ExecuteUbergraph_CF_Set(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_SetCheatVariable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_Set_C", "ExecuteUbergraph_CF_Set");

	Params::UCF_Set_C_ExecuteUbergraph_CF_Set_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCheatOverlay_ReturnValue = CallFunc_GetCheatOverlay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_SetCheatVariable_ReturnValue = CallFunc_SetCheatVariable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


