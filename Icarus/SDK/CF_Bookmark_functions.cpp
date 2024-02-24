#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_Bookmark.CF_Bookmark_C
// (None)

class UClass* UCF_Bookmark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_Bookmark_C");

	return Clss;
}


// CF_Bookmark_C CF_Bookmark.Default__CF_Bookmark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_Bookmark_C* UCF_Bookmark_C::GetDefaultObj()
{
	static class UCF_Bookmark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_Bookmark_C*>(UCF_Bookmark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_Bookmark.CF_Bookmark_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_Bookmark_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_Bookmark_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_Bookmark.CF_Bookmark_C.ExecuteUbergraph_CF_Bookmark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UCF_Bookmark_C::ExecuteUbergraph_CF_Bookmark(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_Bookmark_C", "ExecuteUbergraph_CF_Bookmark");

	Params::UCF_Bookmark_C_ExecuteUbergraph_CF_Bookmark_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


