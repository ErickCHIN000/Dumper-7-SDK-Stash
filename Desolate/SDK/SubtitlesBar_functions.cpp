#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubtitlesBar.SubtitlesBar_C
// (None)

class UClass* USubtitlesBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitlesBar_C");

	return Clss;
}


// SubtitlesBar_C SubtitlesBar.Default__SubtitlesBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubtitlesBar_C* USubtitlesBar_C::GetDefaultObj()
{
	static class USubtitlesBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitlesBar_C*>(USubtitlesBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SubtitlesBar.SubtitlesBar_C.AddSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Author                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Phrase                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubtitlesBar_C::AddSubtitle(class FText Author, class FText Phrase, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesBar_C", "AddSubtitle");

	Params::USubtitlesBar_C_AddSubtitle_Params Parms{};

	Parms.Author = Author;
	Parms.Phrase = Phrase;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubtitlesBar.SubtitlesBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubtitlesBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubtitlesBar.SubtitlesBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitlesBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesBar_C", "Tick");

	Params::USubtitlesBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubtitlesBar.SubtitlesBar_C.ExecuteUbergraph_SubtitlesBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitlesBar_C::ExecuteUbergraph_SubtitlesBar(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesBar_C", "ExecuteUbergraph_SubtitlesBar");

	Params::USubtitlesBar_C_ExecuteUbergraph_SubtitlesBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


