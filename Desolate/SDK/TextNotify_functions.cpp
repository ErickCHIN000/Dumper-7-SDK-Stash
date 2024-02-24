#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TextNotify.TextNotify_C
// (None)

class UClass* UTextNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextNotify_C");

	return Clss;
}


// TextNotify_C TextNotify.Default__TextNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextNotify_C* UTextNotify_C::GetDefaultObj()
{
	static class UTextNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextNotify_C*>(UTextNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TextNotify.TextNotify_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DecalText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CanShow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextNotify_C::SetText(class FText DecalText, bool CanShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextNotify_C", "SetText");

	Params::UTextNotify_C_SetText_Params Parms{};

	Parms.DecalText = DecalText;
	Parms.CanShow = CanShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TextNotify.TextNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTextNotify_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextNotify_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TextNotify.TextNotify_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextNotify_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextNotify_C", "Tick");

	Params::UTextNotify_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TextNotify.TextNotify_C.ShowNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UTextNotify_C::ShowNotify(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextNotify_C", "ShowNotify");

	Params::UTextNotify_C_ShowNotify_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TextNotify.TextNotify_C.OnHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTextNotify_C::OnHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextNotify_C", "OnHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TextNotify.TextNotify_C.ExecuteUbergraph_TextNotify
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)

void UTextNotify_C::ExecuteUbergraph_TextNotify(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText K2Node_CustomEvent_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextNotify_C", "ExecuteUbergraph_TextNotify");

	Params::UTextNotify_C_ExecuteUbergraph_TextNotify_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


